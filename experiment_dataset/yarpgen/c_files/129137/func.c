/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129137
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
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) var_10))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_17 ^= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (signed char)36)))), (((max((arr_2 [i_0]), (arr_2 [i_0]))) * (((((/* implicit */int) (unsigned short)240)) % (((/* implicit */int) (short)-1))))))));
                var_18 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) max((((/* implicit */short) (signed char)-11)), ((short)32758))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0]))))) : (min(((+(var_6))), (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
                arr_4 [i_0] [i_1] [(unsigned char)4] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (min((-955514123), (((/* implicit */int) (signed char)127)))) : (4064))));
                arr_5 [i_0] [4] = ((/* implicit */int) ((short) ((int) arr_0 [i_1] [i_0])));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)130))) / (-1LL)));
    /* LoopNest 2 */
    for (signed char i_2 = 1; i_2 < 7; i_2 += 4) 
    {
        for (short i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            {
                var_20 = (~(((((/* implicit */_Bool) arr_6 [i_2 + 2])) ? (arr_3 [1LL] [1] [i_2 + 2]) : (max((arr_2 [(unsigned char)9]), (((/* implicit */int) var_5)))))));
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned char i_6 = 0; i_6 < 10; i_6 += 1) 
                            {
                                var_21 -= ((/* implicit */unsigned int) (signed char)-37);
                                var_22 = min((((((/* implicit */int) ((short) var_0))) - (4064))), (min((((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (signed char)49)) - (23))))), (((/* implicit */int) arr_0 [i_5] [i_6])))));
                            }
                            arr_18 [i_2 + 2] [i_3] [i_3] [(short)7] [i_5] = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) (signed char)-4)), (18446744073709551615ULL))) * (((/* implicit */unsigned long long int) (((+(arr_10 [i_3] [(unsigned char)7]))) / (((/* implicit */int) var_5)))))));
                        }
                    } 
                } 
                arr_19 [i_2] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((arr_12 [7] [i_2 + 3] [i_2 + 3] [i_3]), (((/* implicit */long long int) (signed char)-34))))) % (((unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
}
