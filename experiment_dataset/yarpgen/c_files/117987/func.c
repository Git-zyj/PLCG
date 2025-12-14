/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117987
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
    var_19 = ((/* implicit */_Bool) ((((max((var_13), (var_13))) - (((/* implicit */unsigned long long int) var_12)))) & (((/* implicit */unsigned long long int) max((var_17), (((/* implicit */long long int) var_3)))))));
    var_20 -= ((/* implicit */unsigned short) max(((-(((/* implicit */int) ((unsigned short) var_16))))), (((/* implicit */int) min((((/* implicit */signed char) var_10)), (var_7))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        var_21 *= ((/* implicit */_Bool) arr_0 [22U]);
        /* LoopSeq 1 */
        for (short i_1 = 3; i_1 < 24; i_1 += 2) 
        {
            var_22 = ((/* implicit */int) arr_3 [i_0] [i_1 - 1]);
            var_23 += ((/* implicit */signed char) arr_2 [i_0] [(short)12]);
            var_24 = ((/* implicit */int) (+(arr_3 [16] [i_0 + 1])));
            var_25 = ((/* implicit */signed char) var_8);
        }
        var_26 = ((/* implicit */unsigned short) ((unsigned int) arr_2 [i_0] [i_0]));
        var_27 = var_3;
    }
    var_28 &= ((/* implicit */unsigned long long int) var_6);
}
