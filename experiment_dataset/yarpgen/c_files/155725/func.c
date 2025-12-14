/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155725
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
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0 + 1]))))) ? (min((18446744073709551615ULL), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33750))))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)59700)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) / (11449951386163733649ULL))))))));
        var_19 = ((/* implicit */unsigned long long int) (_Bool)1);
        var_20 = ((/* implicit */int) max((var_20), (min((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 1])) != (((/* implicit */int) arr_1 [i_0 + 1]))))), ((-(((/* implicit */int) arr_1 [i_0 + 1]))))))));
        var_21 = ((/* implicit */unsigned short) (unsigned char)131);
    }
    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) var_4))));
    var_23 = var_11;
    var_24 = ((/* implicit */unsigned long long int) max((((unsigned short) var_0)), (((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) 458299088)) ? (6096445727199139402ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
}
