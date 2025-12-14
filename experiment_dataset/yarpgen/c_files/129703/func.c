/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129703
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
    var_18 = ((((/* implicit */_Bool) ((unsigned int) var_3))) && (((/* implicit */_Bool) ((((/* implicit */int) var_6)) + (((var_14) ? (var_17) : (var_5)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_10 [i_0] [(unsigned short)3] [(unsigned short)3] [i_2 + 2] [i_2] [i_2 + 1])) / (((/* implicit */int) arr_10 [i_1] [i_2] [i_2] [i_2 + 2] [i_2] [i_2 + 2])))));
                                arr_15 [i_0] [12LL] [i_2 - 1] [i_2 - 1] [i_4] = ((/* implicit */long long int) arr_9 [i_0] [i_3] [i_2] [i_3]);
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) max((((/* implicit */unsigned short) ((_Bool) arr_9 [i_0] [(short)5] [(short)10] [i_4]))), (min(((unsigned short)60676), (((/* implicit */unsigned short) arr_9 [i_2 + 2] [i_2 + 1] [i_2 + 1] [i_2 - 1])))))))));
                                var_21 *= var_15;
                                arr_16 [i_0] [i_0] [i_3] [(unsigned char)6] = ((/* implicit */unsigned int) min((((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2 - 1] [i_2 + 1]))) != (arr_7 [i_2 + 3] [i_2 + 3] [i_1] [i_1])))), (((signed char) 874952914U))));
                            }
                        } 
                    } 
                    var_22 |= max((arr_3 [i_0]), (min((((((/* implicit */int) arr_14 [i_0])) * (((/* implicit */int) arr_6 [i_0])))), (((((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_2 + 3])) / (var_5))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_23 = ((arr_0 [i_2]) == (((/* implicit */long long int) ((arr_17 [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 1]) ? (((/* implicit */int) arr_17 [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 1])) : (((/* implicit */int) arr_17 [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 1]))))));
                                var_24 -= max((((/* implicit */unsigned int) ((short) arr_2 [i_0] [i_1]))), (max((arr_11 [i_6]), (((/* implicit */unsigned int) arr_2 [i_0] [i_0])))));
                                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) var_16))))) || (((/* implicit */_Bool) var_2))));
                                arr_23 [i_5] [(_Bool)1] [i_6] [i_5 - 1] [(_Bool)1] = ((/* implicit */signed char) arr_19 [i_6] [i_2 - 1] [i_2 - 1] [i_0]);
                                arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((0), (((/* implicit */int) arr_10 [i_5 - 1] [i_6] [i_6] [i_5 - 1] [2U] [i_6]))))) && (((/* implicit */_Bool) var_13))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 = ((var_1) ^ (((((var_1) ^ (((/* implicit */unsigned int) var_7)))) >> (((((((/* implicit */int) var_3)) + (var_7))) - (87294773))))));
}
