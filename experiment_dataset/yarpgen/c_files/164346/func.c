/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164346
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
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 ^= ((/* implicit */unsigned char) arr_0 [i_1] [0LL]);
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        var_14 += ((/* implicit */unsigned long long int) arr_4 [i_0] [i_3]);
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                        {
                            arr_15 [i_0] = ((/* implicit */unsigned short) (-(min((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? (arr_3 [i_0]) : (arr_3 [i_0]))), (((/* implicit */long long int) arr_0 [i_0] [i_0]))))));
                            var_15 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                            arr_16 [i_3] [i_3] &= ((/* implicit */int) arr_2 [i_1]);
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2] [i_3])) ? (((/* implicit */int) arr_7 [i_0] [i_2])) : ((+(((/* implicit */int) arr_7 [i_0] [i_0]))))));
                            var_17 = ((/* implicit */signed char) max((arr_14 [i_0] [i_1] [i_0] [i_3] [i_4]), (min((((/* implicit */int) arr_0 [i_0] [i_3])), (arr_14 [i_0] [i_1] [i_0] [i_0] [i_4])))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            arr_21 [i_0] [i_1] [i_2] [i_0] [i_0] [i_2] = ((((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)233))) : (8936830510563328ULL))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_3])) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                            var_18 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_20 [16ULL] [i_1] [i_3] [i_3] [i_3])) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_0] [i_3] [i_0] [i_0] [i_0])))))));
                        }
                        arr_22 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (~(arr_1 [i_0])));
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) arr_4 [i_0] [i_1]))));
                    }
                    for (long long int i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        var_20 = ((/* implicit */long long int) min((max((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_14 [i_6] [i_2] [i_0] [i_1] [i_0]))), (arr_14 [7] [i_2] [i_0] [i_1] [i_0])));
                        var_21 = ((/* implicit */unsigned long long int) min(((~(arr_18 [14ULL] [i_1] [i_6] [i_1] [i_1] [i_0] [i_1]))), (((/* implicit */long long int) max((min((((/* implicit */short) arr_23 [i_6] [i_0] [i_0] [i_0] [i_0])), (arr_9 [i_0] [i_0] [i_2]))), (arr_6 [i_0] [i_1] [i_2] [i_0]))))));
                        /* LoopSeq 1 */
                        for (long long int i_7 = 0; i_7 < 19; i_7 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (~(36028797018963968ULL))))));
                            var_23 += (+(((/* implicit */int) arr_13 [i_7] [i_1] [i_0] [i_2] [i_1] [i_1] [i_0])));
                            arr_27 [i_6] [i_6] [i_6] [i_6] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0])))))));
                            var_24 = (!(((/* implicit */_Bool) (~(arr_12 [i_7] [i_6] [i_0] [i_2] [i_0] [i_0] [i_0])))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        arr_30 [i_8] [i_0] [i_2] [i_8] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0]))))) | (((/* implicit */int) arr_7 [i_0] [i_0]))));
                        arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (~((~(((/* implicit */int) arr_20 [i_0] [i_0] [i_2] [i_8] [i_8])))));
                    }
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */int) var_11);
    var_26 = ((/* implicit */unsigned int) (~(var_3)));
    var_27 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_11) : (var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (min((((/* implicit */long long int) (_Bool)1)), (-877566527759713769LL))))), (((/* implicit */long long int) min(((_Bool)1), ((_Bool)1)))));
}
