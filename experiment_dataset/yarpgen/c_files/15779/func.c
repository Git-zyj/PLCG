/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15779
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */int) arr_1 [i_0] [i_0]);
        var_20 = ((/* implicit */unsigned short) (-(1868085304)));
        var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) (-((-(((/* implicit */int) arr_6 [i_1] [(unsigned short)6]))))));
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1] [i_1])) & (var_3)))) ? (((((/* implicit */_Bool) -1868085298)) ? (arr_4 [i_1]) : (var_11))) : (arr_1 [16ULL] [(_Bool)1])));
        arr_8 [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_6 [17ULL] [i_1]))));
    }
    var_23 = ((((/* implicit */_Bool) ((var_11) + (max((((/* implicit */unsigned long long int) (_Bool)1)), (10158125974751364677ULL)))))) ? (max((((/* implicit */int) var_15)), ((~(((/* implicit */int) (unsigned short)23561)))))) : ((~(((var_9) & (((/* implicit */int) (_Bool)1)))))));
}
