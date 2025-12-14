/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156741
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
    var_15 = var_4;
    var_16 = ((/* implicit */unsigned int) var_10);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) max(((+(((((/* implicit */int) (signed char)0)) << (6U))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))));
        arr_4 [i_0] [(signed char)4] = ((/* implicit */signed char) max((((((/* implicit */_Bool) 826226509U)) ? (2407392180U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-95))) : (arr_0 [i_0] [i_0])))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)105)) * (max((((/* implicit */int) (signed char)-87)), ((-(((/* implicit */int) (signed char)-19))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 12; i_1 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8)))) + (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32))) < (514990656U))))));
        arr_8 [i_1] = ((/* implicit */signed char) (~(3861452961U)));
    }
    var_20 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) <= (max((4294967295U), (var_7)))))) - (((/* implicit */int) var_11))));
}
