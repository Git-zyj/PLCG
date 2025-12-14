/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188042
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
    var_12 *= (unsigned char)4;
    var_13 &= ((/* implicit */short) ((var_7) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)0)))))));
    var_14 += ((/* implicit */unsigned long long int) var_1);
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) (+((((+(((/* implicit */int) (unsigned char)255)))) - ((+(((/* implicit */int) (unsigned char)192))))))));
        var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (281474976710655ULL)))) ? (((((/* implicit */int) var_0)) % (((/* implicit */int) arr_1 [i_0 - 1])))) : (((/* implicit */int) min(((unsigned char)3), (var_1)))))) & ((-(((/* implicit */int) arr_1 [i_0]))))));
        var_17 = ((/* implicit */unsigned long long int) ((short) max((((/* implicit */unsigned long long int) var_1)), (max((281474976710655ULL), (36020000925941760ULL))))));
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 18; i_1 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */short) ((((/* implicit */int) ((short) var_0))) ^ ((~(((/* implicit */int) arr_2 [i_1] [i_1]))))));
        var_19 &= ((/* implicit */unsigned char) arr_0 [i_1] [i_1 - 1]);
    }
}
