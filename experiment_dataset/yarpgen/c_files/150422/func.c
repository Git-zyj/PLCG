/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150422
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
    var_11 = ((/* implicit */int) -8516347621704337157LL);
    var_12 = -8516347621704337157LL;
    var_13 = ((/* implicit */signed char) -8516347621704337147LL);
    var_14 = 8516347621704337156LL;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        arr_3 [0U] [i_0] = ((/* implicit */signed char) (_Bool)0);
        var_15 &= (~((~(((/* implicit */int) (unsigned char)10)))));
    }
}
