/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16250
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) max((var_18), (max((((/* implicit */long long int) max((min((var_6), (((/* implicit */unsigned short) arr_0 [i_0 - 1])))), (min((((/* implicit */unsigned short) arr_0 [i_0])), ((unsigned short)57820)))))), (max((arr_2 [i_0 - 2]), (arr_2 [i_0 - 2])))))));
        var_19 = (-((~(((/* implicit */int) var_14)))));
    }
    for (unsigned short i_1 = 2; i_1 < 16; i_1 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) ((var_12) < (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
        var_21 = ((/* implicit */unsigned short) arr_5 [13U]);
        arr_6 [i_1] = (unsigned short)57820;
        var_22 = ((/* implicit */unsigned short) ((var_15) + (((/* implicit */long long int) (+((-(((/* implicit */int) var_11)))))))));
        arr_7 [i_1] = var_16;
    }
    for (unsigned short i_2 = 2; i_2 < 16; i_2 += 3) /* same iter space */
    {
        var_23 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) arr_9 [i_2 - 1]))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-90)), (3252810092520837070LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2 - 2]))) : (max((((/* implicit */unsigned int) var_8)), (23165134U))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2])))));
        var_24 -= ((/* implicit */unsigned int) arr_8 [i_2]);
    }
    var_25 = ((/* implicit */int) max(((+(4271802153U))), (((/* implicit */unsigned int) (signed char)-122))));
    /* LoopSeq 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned char) max((((unsigned int) (signed char)124)), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3]))) : (1391883673U)))));
        /* LoopSeq 1 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            var_27 = ((/* implicit */unsigned int) min((var_27), (min((((((/* implicit */_Bool) arr_4 [i_4 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_4 [i_4 - 1]))), (((/* implicit */unsigned int) (((((~(((/* implicit */int) var_8)))) + (2147483647))) >> (((((/* implicit */_Bool) 4271802161U)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : ((-9223372036854775807LL - 1LL)))))))))));
            var_28 -= ((/* implicit */long long int) ((int) arr_5 [i_3]));
            var_29 = ((((/* implicit */_Bool) max((23165138U), (min((1391883673U), (23165156U)))))) ? (((arr_11 [i_4] [3U]) - (((((/* implicit */long long int) 4294967281U)) + (-3252810092520837071LL))))) : (arr_2 [i_3]));
        }
        arr_15 [i_3] &= ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)38083)) == (((/* implicit */int) var_5))))), (((unsigned int) arr_9 [i_3]))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        arr_18 [i_5] = min((max((4271802159U), (3927916871U))), (((/* implicit */unsigned int) ((int) arr_9 [i_5]))));
        var_30 &= ((/* implicit */int) ((23165155U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)34)))));
        var_31 = (+(3927916871U));
    }
}
