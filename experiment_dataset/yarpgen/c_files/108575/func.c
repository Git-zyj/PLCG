/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108575
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_11 = max((((/* implicit */long long int) arr_0 [i_0])), (max((((/* implicit */long long int) (short)-1)), ((-(-8615543764742616635LL))))));
        var_12 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)8191)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) % (((long long int) arr_0 [i_0]))));
    }
    /* LoopNest 2 */
    for (long long int i_1 = 2; i_1 < 20; i_1 += 2) 
    {
        for (short i_2 = 2; i_2 < 19; i_2 += 3) 
        {
            {
                var_13 = ((/* implicit */_Bool) min((((/* implicit */int) arr_2 [i_1 + 1])), ((+(((/* implicit */int) arr_2 [11LL]))))));
                var_14 = ((/* implicit */_Bool) min((1658035126554552560LL), (((/* implicit */long long int) (_Bool)1))));
                arr_7 [(_Bool)1] [9LL] &= ((/* implicit */_Bool) var_4);
            }
        } 
    } 
    var_15 = ((/* implicit */short) (_Bool)1);
}
