/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174383
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
    var_15 = ((/* implicit */unsigned short) var_4);
    var_16 = ((/* implicit */long long int) (+(((/* implicit */int) ((max((((/* implicit */long long int) (short)-31961)), (var_11))) < (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) ((4236516118U) >= (((/* implicit */unsigned int) (-(((/* implicit */int) var_4)))))));
        arr_2 [(_Bool)1] = var_2;
    }
}
