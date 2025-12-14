/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151288
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_3 [0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)96)) % (arr_2 [i_0])));
        arr_4 [i_0] [i_0] = ((arr_1 [i_0] [i_0]) / (arr_1 [i_0] [i_0]));
        var_16 = ((/* implicit */int) ((var_9) ? (-7072095084833649704LL) : (((/* implicit */long long int) 1426662727))));
        arr_5 [i_0] = var_4;
    }
    var_17 = ((/* implicit */long long int) var_2);
    var_18 = ((/* implicit */int) min((var_11), (var_5)));
}
