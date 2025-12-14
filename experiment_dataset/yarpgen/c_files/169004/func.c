/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169004
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
    for (int i_0 = 3; i_0 < 11; i_0 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */int) ((((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) | (var_2)))) / (arr_0 [i_0 + 2]))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_2 [i_0 - 1] [i_0 + 1]))))));
        var_20 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 + 2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_16)))))))) : ((((((_Bool)1) || (((/* implicit */_Bool) arr_3 [i_0])))) ? (((/* implicit */int) arr_1 [12])) : ((-(((/* implicit */int) arr_3 [i_0]))))))));
        var_21 = ((/* implicit */int) (signed char)-1);
    }
    for (int i_1 = 3; i_1 < 11; i_1 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1 + 2])) ? (((((/* implicit */_Bool) arr_1 [i_1 + 2])) ? (((/* implicit */int) arr_1 [i_1 + 2])) : (-1040339745))) : ((~(((/* implicit */int) arr_1 [i_1 + 2])))))))));
        var_23 = ((/* implicit */signed char) var_12);
    }
    var_24 &= ((/* implicit */long long int) ((_Bool) -6533229644066936001LL));
}
