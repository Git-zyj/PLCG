/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132579
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_2)) : (min((((((/* implicit */_Bool) (short)32619)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (-10LL))), (min((((/* implicit */long long int) var_11)), (-10LL)))))));
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_14 *= ((/* implicit */unsigned int) arr_2 [i_1]);
                var_15 = ((/* implicit */unsigned char) min((0U), (4294967292U)));
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [(unsigned short)9])) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) : (1283876054U)));
            }
        } 
    } 
}
