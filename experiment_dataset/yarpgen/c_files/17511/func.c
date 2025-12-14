/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17511
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
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [(signed char)5] = ((/* implicit */short) max(((~(((/* implicit */int) arr_0 [i_0 + 1])))), (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 + 2])) <= (((/* implicit */int) arr_0 [i_0 - 1])))))));
        var_10 = ((/* implicit */short) arr_0 [(signed char)14]);
    }
    for (unsigned char i_1 = 1; i_1 < 16; i_1 += 3) /* same iter space */
    {
        var_11 *= ((/* implicit */unsigned short) ((int) var_2));
        var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1616459739658969441LL))));
        var_13 &= ((/* implicit */signed char) (-(((((/* implicit */int) (short)16150)) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
    }
    var_14 = ((/* implicit */unsigned int) var_6);
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) min((var_2), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 12308316619371389199ULL))))))))));
}
