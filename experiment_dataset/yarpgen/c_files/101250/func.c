/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101250
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
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) 17147187917229214868ULL))) ? (((((/* implicit */_Bool) (+(17147187917229214868ULL)))) ? (var_8) : (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_11 [(short)11] [i_1] [(unsigned short)12] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 1299556156480336749ULL)) ? (arr_3 [i_0 - 1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))) ? ((((~(arr_6 [i_1]))) << (((arr_4 [i_0] [i_1]) + (786273472))))) : (((((/* implicit */_Bool) min((arr_8 [i_2] [i_1] [i_0] [i_0]), (17147187917229214879ULL)))) ? (((var_9) << (((1357967557U) - (1357967530U))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 3199912231U))))))));
                    arr_12 [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) >= (max((arr_8 [i_0] [i_1] [1ULL] [1ULL]), (((/* implicit */unsigned long long int) (short)-2869)))))))));
                    arr_13 [(unsigned short)11] [i_1] [i_2] = ((/* implicit */signed char) max((((/* implicit */short) (signed char)111)), (min((((short) arr_7 [i_0 - 1] [i_0 - 1])), (var_12)))));
                }
            } 
        } 
        arr_14 [10] [i_0] |= ((/* implicit */short) var_4);
        arr_15 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) (signed char)-108)), (arr_3 [i_0] [(unsigned short)14] [i_0])))))) ? (min((((/* implicit */int) var_10)), (arr_4 [i_0 - 1] [i_0 + 2]))) : (((/* implicit */int) ((short) var_13)))));
        arr_16 [i_0 + 3] = ((/* implicit */short) arr_8 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0]);
    }
    for (short i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_4 = 1; i_4 < 13; i_4 += 4) /* same iter space */
        {
            arr_21 [i_3] [i_4 + 2] [i_4 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_10 [i_4] [i_3]))))) ? (arr_4 [i_4 + 2] [i_4 - 1]) : ((~(((/* implicit */int) var_4))))));
            var_14 |= ((/* implicit */signed char) arr_3 [i_3] [i_3] [(unsigned short)6]);
        }
        /* vectorizable */
        for (short i_5 = 1; i_5 < 13; i_5 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */short) var_11);
            var_16 -= ((/* implicit */short) ((arr_3 [i_5 + 1] [i_5 + 1] [i_5 + 2]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)(-32767 - 1))) || (((/* implicit */_Bool) var_8))))))));
            var_17 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2717))) : (arr_22 [i_5 + 2]))))));
            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (((!(((/* implicit */_Bool) (short)-11706)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-5406)) && (((/* implicit */_Bool) var_10))))) : (((/* implicit */int) (short)7946)))))));
            var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_5 + 2] [i_5 + 2]))));
        }
        arr_25 [i_3] = ((/* implicit */unsigned int) min((((/* implicit */signed char) ((((/* implicit */_Bool) min((var_1), (((/* implicit */short) arr_0 [i_3]))))) || (((/* implicit */_Bool) arr_6 [i_3]))))), (var_0)));
    }
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_11), (1095055081U)))) ? (var_11) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) max(((short)-7820), (var_6)))))))));
    var_21 = ((/* implicit */unsigned int) var_0);
}
