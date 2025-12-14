/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131012
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
    var_10 |= ((/* implicit */signed char) ((long long int) (((!(((/* implicit */_Bool) (short)6)))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((-2645180729194866665LL) + (9223372036854775807LL))) >> (((((/* implicit */int) var_4)) + (68))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 3] [i_1 + 2]))) - (((((/* implicit */_Bool) arr_5 [i_0 + 3] [i_0] [i_1 + 2])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        {
                            arr_13 [i_3] [i_1 + 1] [i_1] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (unsigned char)115)), (13044418194010849669ULL)));
                            var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-22129))))) ? (2489657242269247560ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5402325879698701946ULL)) ? (((/* implicit */int) (short)16384)) : (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1] [(unsigned short)0])) : (min((((((/* implicit */int) arr_5 [i_0] [i_0] [i_2])) + (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) (short)-17158))))));
                            arr_14 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (arr_9 [i_3 + 2] [i_2] [i_1 - 1] [i_0] [i_0 + 1] [i_0])))) ? ((+(4398038122496ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6451052336092028629ULL)) ? (((/* implicit */int) (short)22129)) : (((/* implicit */int) arr_3 [i_0] [i_1 + 2])))))));
                            var_12 = ((/* implicit */int) min((var_12), (((max((((((/* implicit */_Bool) (short)-31351)) ? (((/* implicit */int) arr_4 [i_0] [i_1 + 2])) : (var_0))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))) * (((/* implicit */int) (((~(((/* implicit */int) var_7)))) <= (((((/* implicit */_Bool) 3059426513U)) ? (52180750) : (((/* implicit */int) (unsigned char)117)))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 2; i_4 < 11; i_4 += 3) 
                {
                    for (unsigned int i_5 = 2; i_5 < 8; i_5 += 3) 
                    {
                        {
                            arr_22 [i_0] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) (signed char)62)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) arr_11 [(unsigned char)7] [i_1] [5ULL] [i_5])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min(((_Bool)1), ((_Bool)0)))))));
                            arr_23 [i_0 - 1] [4ULL] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 13044418194010849669ULL)) ? (((/* implicit */int) (short)22128)) : (((/* implicit */int) (short)31841))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned int i_7 = 1; i_7 < 11; i_7 += 3) 
                    {
                        {
                            arr_30 [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_20 [i_0]), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)(-127 - 1))))))))) ? (((unsigned long long int) ((var_3) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (var_0)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) 18446739675671429119ULL))))))));
                            var_13 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (short)-27113)) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))) : ((-(arr_21 [i_7]))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_7])) : (((/* implicit */int) min((((/* implicit */signed char) var_8)), (arr_5 [i_0 + 3] [i_0] [i_7 - 1]))))))));
                            arr_31 [8U] [i_1] [i_0] [i_7] [(unsigned short)7] = min(((~(arr_8 [i_1 + 2]))), (((((/* implicit */_Bool) ((short) var_2))) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)7554)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 6451052336092028629ULL))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
