/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108648
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
    var_14 = ((/* implicit */int) var_10);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) var_7);
        arr_4 [i_0] [13] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        arr_5 [i_0] = var_1;
    }
    var_15 = ((/* implicit */long long int) 4294967295U);
    var_16 = ((/* implicit */short) (~(((/* implicit */int) var_5))));
    /* LoopSeq 2 */
    for (unsigned short i_1 = 3; i_1 < 16; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned long long int) var_10);
        var_17 = ((/* implicit */_Bool) 3885925894U);
        var_18 = ((/* implicit */_Bool) ((unsigned short) arr_1 [i_1] [15U]));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (22U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                        arr_19 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(4294967249U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36053))) : (((((/* implicit */_Bool) var_2)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 4294967292U))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        arr_23 [i_2] [i_2] = ((/* implicit */long long int) var_2);
                        var_20 = ((/* implicit */signed char) arr_16 [i_2] [i_3] [i_4] [i_6]);
                    }
                    arr_24 [i_2] [i_3] [i_2] [i_2] = ((((/* implicit */_Bool) 8LL)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (arr_16 [i_2] [i_3] [i_4] [i_2]))) : (((/* implicit */int) (_Bool)1)));
                }
            } 
        } 
        arr_25 [i_2] = ((((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2])) ? (arr_12 [i_2] [i_2] [i_2]) : (((/* implicit */int) arr_9 [i_2])));
        var_21 = ((/* implicit */unsigned int) (_Bool)1);
        arr_26 [i_2] = ((/* implicit */int) var_13);
    }
}
