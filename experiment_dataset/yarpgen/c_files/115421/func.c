/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115421
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
    var_13 *= ((/* implicit */unsigned int) 2659428493039599027LL);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = var_3;
        var_14 += ((((/* implicit */long long int) arr_2 [i_0])) / (690201353885418100LL));
        arr_4 [i_0] = ((((/* implicit */long long int) ((/* implicit */int) ((var_1) > (((/* implicit */long long int) 1129892842U)))))) / (((long long int) 18014261070528512LL)));
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        var_15 += ((/* implicit */long long int) ((3165074454U) - (5U)));
        var_16 = ((/* implicit */long long int) max((var_16), (var_11)));
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) 562949953421311LL);
    }
}
