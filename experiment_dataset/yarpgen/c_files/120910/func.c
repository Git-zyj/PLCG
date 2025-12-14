/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120910
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) != (((((/* implicit */int) var_6)) / (((/* implicit */int) ((((/* implicit */_Bool) (signed char)7)) || (((/* implicit */_Bool) var_7)))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 10677176462991989390ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))))))))));
        arr_2 [i_0] = ((/* implicit */short) var_11);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_4 [i_1]))));
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_1])) < (((/* implicit */int) ((_Bool) var_9)))));
        var_16 = ((/* implicit */unsigned int) (signed char)68);
        var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_1]))));
    }
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) 9223372036854775803LL))));
}
