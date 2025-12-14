/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16862
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (unsigned int i_0 = 4; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1 - 3] [i_1 - 3] [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) -6118884811734098525LL)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (short)3149)))), (((/* implicit */int) ((unsigned short) (signed char)-1)))));
                    var_10 = ((/* implicit */signed char) (((((+(((/* implicit */int) (signed char)3)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)21))))))) & ((~(((/* implicit */int) max((var_1), (arr_4 [i_0] [16]))))))));
                }
            } 
        } 
    } 
    var_11 = ((min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8)))), (((/* implicit */int) max((var_8), (((/* implicit */short) var_9))))))) != (((/* implicit */int) var_9)));
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        for (short i_4 = 3; i_4 < 17; i_4 += 4) 
        {
            {
                var_12 *= ((/* implicit */unsigned short) ((int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [i_3] [i_4 - 3] [i_4 - 3]))) <= (6805953875855894656LL))));
                /* LoopNest 3 */
                for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    for (int i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 2; i_7 < 16; i_7 += 4) 
                        {
                            {
                                arr_23 [i_7] [i_4] [i_5] [i_4] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6805953875855894656LL)) ? (-6805953875855894655LL) : (((/* implicit */long long int) arr_2 [i_7 - 2]))))) ? ((+(((((/* implicit */_Bool) 2047U)) ? (((/* implicit */unsigned long long int) 0LL)) : (6031253377185495889ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)65534), ((unsigned short)32768)))))));
                                var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((short)3149), ((short)32767))))) : (max((((/* implicit */unsigned int) var_9)), (0U)))))) ? (((((/* implicit */_Bool) 3)) ? (min((arr_19 [i_7] [i_5] [i_4] [i_3]), (((/* implicit */long long int) (unsigned char)0)))) : (((/* implicit */long long int) ((var_9) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)17))))))) : (((/* implicit */long long int) ((/* implicit */int) (short)19974))));
                                var_14 = ((/* implicit */short) (~((((!(((/* implicit */_Bool) 0U)))) ? (((((/* implicit */_Bool) -17LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_17 [i_5])))) : (((/* implicit */int) arr_7 [i_3] [i_4] [i_5] [i_4]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_8 = 2; i_8 < 16; i_8 += 1) 
                {
                    for (unsigned short i_9 = 0; i_9 < 18; i_9 += 1) 
                    {
                        {
                            var_15 &= ((/* implicit */short) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3]))) > (((((/* implicit */unsigned int) ((/* implicit */int) (short)0))) & (16U))))));
                            var_16 &= ((/* implicit */short) (((((_Bool)1) ? (arr_27 [i_3] [(_Bool)1] [(_Bool)1] [i_9] [i_9] [i_4 - 3]) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)255)), ((short)32767))))))) - (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                            var_17 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45345))) : (0ULL)));
                            arr_30 [i_3] [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4] [(short)9] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (unsigned char)111)), (18446744073709551615ULL)));
                        }
                    } 
                } 
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) var_4))));
            }
        } 
    } 
}
