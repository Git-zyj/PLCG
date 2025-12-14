/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117908
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
    var_18 = ((/* implicit */unsigned short) max(((-(((/* implicit */int) (short)-17141)))), (((/* implicit */int) (_Bool)1))));
    var_19 = ((/* implicit */unsigned short) -1700518331371144249LL);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) 562949949227008LL);
        arr_4 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_5)), ((-(min((((/* implicit */long long int) var_10)), (var_2)))))));
        var_20 = ((/* implicit */long long int) ((unsigned short) min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_2 [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) -9223372036854775797LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_15))))))));
    }
    for (unsigned short i_1 = 2; i_1 < 9; i_1 += 1) /* same iter space */
    {
        var_21 = (i_1 % 2 == zero) ? (((/* implicit */unsigned long long int) ((min((-9223372036854775787LL), (((/* implicit */long long int) arr_5 [i_1])))) % (((((-9223372036854775787LL) + (9223372036854775807LL))) << (((arr_5 [i_1]) + (2115495855)))))))) : (((/* implicit */unsigned long long int) ((min((-9223372036854775787LL), (((/* implicit */long long int) arr_5 [i_1])))) % (((((-9223372036854775787LL) + (9223372036854775807LL))) << (((((arr_5 [i_1]) - (2115495855))) + (461417129))))))));
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) ? (562949949227010LL) : (max((((/* implicit */long long int) (+(1138280985)))), (((-562949949227007LL) % (562949949227006LL)))))));
        arr_7 [i_1] = arr_1 [i_1 + 1] [i_1];
        arr_8 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) < (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)141)), ((unsigned short)49558)))) : (((-1511992593) + (((/* implicit */int) (short)11921))))))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1 + 1] [i_1])) % (((/* implicit */int) (short)16479))))) ? (min((((/* implicit */long long int) ((unsigned char) (short)22232))), (((((/* implicit */_Bool) 8703858227631976053LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) (short)16226)))));
    }
    var_23 = ((/* implicit */short) max((((long long int) (unsigned char)44)), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)217)) - (((/* implicit */int) (unsigned short)15977))))) ? (((long long int) var_4)) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
    var_24 &= ((/* implicit */_Bool) var_7);
}
