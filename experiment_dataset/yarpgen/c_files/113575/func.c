/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113575
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
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) max(((-(1880592113))), (((/* implicit */int) var_4))));
        var_18 = ((/* implicit */long long int) (+(max((0), (((/* implicit */int) (unsigned short)25533))))));
        var_19 &= ((/* implicit */signed char) ((min((((/* implicit */int) ((unsigned char) (unsigned short)39985))), (0))) + (((((((/* implicit */_Bool) (unsigned short)25533)) ? (((/* implicit */int) arr_0 [4])) : (7))) % ((~(((/* implicit */int) (short)6276))))))));
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [(unsigned short)9] [i_0 - 1])) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)29)) + (((/* implicit */int) (unsigned char)94))))) : (((((/* implicit */_Bool) (-(arr_3 [i_0] [5])))) ? (((var_16) % (var_8))) : (((/* implicit */long long int) min((((/* implicit */int) var_13)), (var_15))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 11; i_1 += 3) /* same iter space */
    {
        var_21 &= ((/* implicit */unsigned int) arr_3 [i_1 - 1] [i_1 - 1]);
        var_22 |= ((/* implicit */unsigned short) ((((/* implicit */int) (short)15212)) * (((/* implicit */int) var_9))));
        arr_6 [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)32764))));
        arr_7 [i_1] [9ULL] = ((/* implicit */unsigned char) ((arr_5 [i_1 - 1]) >> (((arr_5 [i_1 - 1]) - (4811981575335991151LL)))));
    }
    var_23 ^= ((/* implicit */unsigned short) var_15);
    var_24 = max((((((/* implicit */unsigned int) ((/* implicit */int) ((var_14) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) / (max((var_7), (((/* implicit */unsigned int) (short)15230)))))), (((/* implicit */unsigned int) (((-(((/* implicit */int) var_13)))) - (((((/* implicit */_Bool) (unsigned char)227)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)25667))))))));
    var_25 = ((/* implicit */unsigned short) min((((((/* implicit */long long int) (+(((/* implicit */int) (short)6270))))) * (max((((/* implicit */long long int) var_2)), (var_16))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_13)) << (((var_15) + (1750422565)))))) > (((((/* implicit */unsigned int) var_15)) + (var_1))))))));
}
