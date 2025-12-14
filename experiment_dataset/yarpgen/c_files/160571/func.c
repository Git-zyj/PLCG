/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160571
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 14; i_2 += 2) 
            {
                {
                    var_17 -= ((/* implicit */unsigned long long int) arr_0 [4ULL]);
                    var_18 = ((((/* implicit */int) var_12)) == (((/* implicit */int) var_2)));
                }
            } 
        } 
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [(short)6])) ? (arr_4 [i_0] [i_0] [(short)8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        arr_12 [i_3] [(signed char)4] &= ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-19302)))));
        var_20 = ((/* implicit */long long int) var_1);
    }
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) var_16))));
    var_22 = ((/* implicit */unsigned int) min(((short)-19302), ((short)-19309)));
    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) (!((_Bool)1)))) < (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5))))))))))));
}
