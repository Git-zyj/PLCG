/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112703
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
    var_13 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_0))))));
    var_14 = ((/* implicit */signed char) var_11);
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_15 &= ((/* implicit */int) (!((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0])))))))));
        var_16 -= ((/* implicit */signed char) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_0]))));
    }
    for (signed char i_1 = 1; i_1 < 18; i_1 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */signed char) (!((!((!(((/* implicit */_Bool) arr_1 [(short)4] [(short)4]))))))));
        var_18 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_4 [i_1]))))));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) arr_5 [i_1]))));
        var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_1]))));
    }
    /* vectorizable */
    for (signed char i_2 = 2; i_2 < 9; i_2 += 4) 
    {
        var_21 = ((/* implicit */signed char) (+(((/* implicit */int) arr_9 [i_2]))));
        var_22 = ((/* implicit */int) arr_1 [i_2] [i_2]);
    }
    var_23 = ((/* implicit */unsigned char) max((var_23), (var_2)));
}
