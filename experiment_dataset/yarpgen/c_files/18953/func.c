/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18953
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
        var_17 -= ((/* implicit */signed char) (!(((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_10)), (arr_1 [i_0 + 1] [(signed char)5])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 8307733360925465292ULL)) ? (((/* implicit */int) (unsigned short)8028)) : (((/* implicit */int) arr_0 [i_0 + 2])))))))));
        var_18 = ((/* implicit */unsigned long long int) arr_0 [(unsigned short)3]);
        var_19 = ((/* implicit */unsigned short) min((var_19), (arr_1 [i_0 + 1] [i_0 + 1])));
    }
    for (short i_1 = 2; i_1 < 18; i_1 += 4) 
    {
        var_20 = (-(((((/* implicit */_Bool) arr_4 [i_1 + 2])) ? (var_5) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))))))));
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (~(((/* implicit */int) var_9)))))));
        var_22 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) var_1)))))) & (var_5)))) ? (var_6) : (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (signed char)64)))))))));
    }
    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((signed char) (signed char)53)))));
}
