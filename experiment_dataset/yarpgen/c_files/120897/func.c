/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120897
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_20 = max((((/* implicit */long long int) ((_Bool) 8962173323910647918LL))), (var_11));
                    arr_11 [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) var_12)) << ((((~(((/* implicit */int) ((signed char) var_13))))) - (67)))));
                    arr_12 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_5), (arr_10 [i_0] [i_2] [i_2])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_0])) && (((/* implicit */_Bool) arr_10 [i_0] [i_2] [14]))))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_10 [i_0] [i_2] [i_2])) : (((/* implicit */int) (short)6909))))));
                    arr_13 [i_2] [i_2] [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_1] [i_2]);
                }
            } 
        } 
        var_21 &= ((/* implicit */signed char) (_Bool)1);
        var_22 ^= ((/* implicit */unsigned short) arr_7 [i_0]);
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((unsigned int) arr_4 [i_0]))) | (((((/* implicit */_Bool) ((long long int) var_0))) ? ((+(-3860570582322668275LL))) : (((/* implicit */long long int) arr_3 [i_0] [i_0]))))));
    }
    var_24 = ((/* implicit */signed char) -3860570582322668275LL);
    var_25 = ((/* implicit */unsigned int) var_9);
}
