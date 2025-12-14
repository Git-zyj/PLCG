/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113219
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
    var_17 = ((/* implicit */unsigned int) var_0);
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        var_18 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((0ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_0])))))))) ? (((/* implicit */int) ((unsigned char) 18446744073709551591ULL))) : (arr_1 [i_0])));
        arr_4 [(short)0] = ((/* implicit */short) ((signed char) arr_1 [i_0]));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (((~(((/* implicit */int) var_9)))) < (min((arr_0 [i_0 - 1] [i_0 - 2]), (arr_0 [i_0 - 1] [i_0 - 1]))))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_5 [i_0] [i_0] [i_0 - 2]) % (arr_5 [i_0] [i_0] [i_0 - 2])))) ? (((/* implicit */int) ((signed char) (signed char)-28))) : (((/* implicit */int) arr_3 [i_1])))))));
            var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (short)9168)), (arr_0 [i_0] [i_0])))) ? (arr_0 [i_0] [i_0]) : (min((arr_1 [(short)7]), (((/* implicit */int) var_14))))))) ? (max((arr_1 [i_0 + 1]), (((((/* implicit */int) var_4)) + (((/* implicit */int) var_3)))))) : (((int) 41124889U))));
            var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_6 [i_0 + 1])) || (((/* implicit */_Bool) arr_6 [i_0 + 2])))) || (((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_1 [i_0 - 2])))) && (((/* implicit */_Bool) var_16))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_11 [i_2] = ((/* implicit */unsigned char) (+(arr_5 [i_0 + 1] [i_2] [i_0 - 1])));
            arr_12 [i_2] [i_2] = ((/* implicit */unsigned short) -4LL);
        }
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_23 = ((/* implicit */unsigned short) 18446744073709551615ULL);
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 0ULL)) ? (4253842406U) : (844224451U))))));
        var_25 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) arr_5 [i_3] [(_Bool)1] [i_3])))) ? (((((/* implicit */_Bool) -9)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) ((short) (signed char)37)))))) : (((/* implicit */long long int) ((((/* implicit */int) var_11)) - (arr_0 [i_3] [i_3]))))));
    }
}
