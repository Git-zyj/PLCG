/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17572
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
    var_10 = ((/* implicit */unsigned int) (_Bool)1);
    var_11 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (var_1) : (var_1)))));
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_17 [i_3] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1]))) | (var_7))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1])))));
                                arr_18 [i_3] [i_3] [i_1] = var_8;
                                arr_19 [i_0] [4U] [i_2] [i_2] [i_2] |= ((/* implicit */unsigned long long int) arr_5 [i_0 - 2] [i_0 - 2] [i_4]);
                                arr_20 [i_4] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((arr_14 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_4] [i_3] [i_1] [i_1] [i_0] [i_4])) ^ (((/* implicit */int) var_3))))) : (max((((/* implicit */unsigned int) var_5)), (var_6)))))) : (var_2)));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 3; i_5 < 10; i_5 += 4) 
                    {
                        arr_23 [i_0] [i_0] [i_0 - 2] [i_0] = ((/* implicit */_Bool) min(((~(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_3)))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_7 [i_0 - 3] [i_0 - 3] [i_0 - 4])) : (((/* implicit */int) arr_7 [i_0 - 3] [i_0 - 2] [i_0 + 2]))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_28 [i_0] [i_0 - 2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-116)) && (((/* implicit */_Bool) arr_12 [i_2] [i_0 - 4])))))));
                            var_12 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                            arr_29 [i_6] [i_1] [i_2] [i_1] [i_0 - 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
                            arr_30 [i_2] [i_0] = ((/* implicit */short) ((int) (unsigned short)65535));
                            var_13 = ((/* implicit */unsigned short) ((var_0) << ((((((_Bool)1) ? (var_9) : (314301307U))) - (764171963U)))));
                        }
                        /* vectorizable */
                        for (unsigned int i_7 = 3; i_7 < 11; i_7 += 1) 
                        {
                            var_14 = ((/* implicit */short) (-(10527224580997526172ULL)));
                            var_15 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_9) : (var_1)))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            arr_33 [i_0] [i_7] [i_0 - 3] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) + (((/* implicit */int) ((short) arr_7 [8LL] [i_2] [i_0])))));
                            var_16 *= ((/* implicit */unsigned long long int) var_5);
                            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [i_0] [i_0 - 4] [i_0 + 2] [i_0] [i_0 - 3] [i_0])))));
                        }
                        arr_34 [i_0] [i_0] [i_0] [i_0] [i_0 + 2] [i_0] = ((/* implicit */long long int) ((arr_10 [(short)0] [i_2] [i_1] [i_0]) ? ((~(var_7))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3980665987U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0 - 4] [i_5 + 3] [i_0 - 4] [i_5 + 2] [i_5] [i_5] [i_5 + 1]))) : (var_1))))));
                        /* LoopSeq 1 */
                        for (int i_8 = 0; i_8 < 13; i_8 += 4) 
                        {
                            var_18 = min((((/* implicit */unsigned long long int) (_Bool)1)), (8363929006662318688ULL));
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_0))));
                            var_20 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
                        }
                    }
                    var_21 = ((/* implicit */unsigned int) (+(((arr_22 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1]) ? (((/* implicit */int) arr_22 [i_0 + 2] [i_0] [i_0 + 1] [i_0])) : (((/* implicit */int) arr_22 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]))))));
                }
            } 
        } 
    } 
}
