/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12844
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
    var_20 = ((/* implicit */long long int) ((signed char) 10817868775613706890ULL));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (-(((7628875298095844705ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(short)5] [i_0])))))));
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0] [i_0])) * (max((max((((/* implicit */int) arr_1 [i_0] [i_0])), (287616102))), (((/* implicit */int) ((7628875298095844702ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))))));
        var_23 *= ((/* implicit */unsigned long long int) (_Bool)1);
    }
}
