/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151176
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_0))))))) % (((/* implicit */int) var_15))));
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 18LL)))))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 2) /* same iter space */
    {
        var_20 *= ((/* implicit */unsigned short) (((+(var_7))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) || (((/* implicit */_Bool) var_2))))))));
        var_21 = ((/* implicit */long long int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)13315))) % (arr_1 [i_0]))))))), (((signed char) arr_0 [i_0 - 1] [i_0 + 1]))));
    }
    for (signed char i_1 = 1; i_1 < 16; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [(unsigned short)15]))) : (var_2))))) ? (((((arr_1 [i_1]) << (((-1LL) + (54LL))))) | (((/* implicit */unsigned long long int) 4LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21444)))));
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) ((var_2) << (((((/* implicit */int) arr_0 [i_1] [i_1])) + (14624))))))) - (((/* implicit */int) arr_3 [i_1] [i_1]))));
        arr_7 [i_1] = ((/* implicit */signed char) var_17);
    }
    var_23 |= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_13)), ((~(18446744073709551615ULL)))));
    var_24 = ((/* implicit */int) var_15);
}
