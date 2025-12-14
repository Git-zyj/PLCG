/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188314
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
    var_17 = ((/* implicit */short) ((((/* implicit */int) ((signed char) ((signed char) var_8)))) + (var_10)));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_18 = ((/* implicit */long long int) ((_Bool) ((min((9223372036854775807LL), (9223372036854775796LL))) + (max((var_11), (var_11))))));
        arr_3 [i_0] = arr_0 [i_0] [i_0];
        var_19 = (~(((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) (_Bool)0)) : (905961744))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) var_9);
        arr_8 [i_1] = ((/* implicit */_Bool) arr_5 [(short)6]);
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((max((((/* implicit */long long int) (short)-4858)), (-6843722892387896966LL))), (((/* implicit */long long int) min((((/* implicit */short) (_Bool)1)), (arr_6 [i_1]))))))) ? (min((((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775796LL))))), (var_8))) : (-905961718)));
    }
}
