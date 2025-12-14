/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166603
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
    var_12 += ((/* implicit */int) ((_Bool) min((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))))));
    var_13 = ((/* implicit */int) var_4);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))));
        arr_2 [i_0 - 1] = ((/* implicit */_Bool) 1017066559);
        arr_3 [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((1ULL), (18446744073709551615ULL))), (min((((/* implicit */unsigned long long int) var_5)), (18446744073709551615ULL)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 1537493791)) ? (arr_0 [i_0 + 2] [i_0 + 1]) : ((-(arr_1 [i_0 + 2]))))))));
        arr_4 [i_0 + 1] = min((((((arr_1 [i_0 + 2]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)120))))) <= (arr_1 [i_0 + 1]))), (((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)-17372)), (arr_1 [i_0 + 2])))) == (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (18446744073709551615ULL))))));
    }
    for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */signed char) arr_5 [i_1]);
        arr_8 [i_1] = ((/* implicit */unsigned char) arr_5 [i_1]);
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) 2673639188U);
        var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((((/* implicit */_Bool) -1475351875)) || (((/* implicit */_Bool) (signed char)79)))) && ((!(((/* implicit */_Bool) arr_9 [i_2 + 1])))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_3 = 3; i_3 < 15; i_3 += 4) 
        {
            var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_13 [i_2 + 1] [i_2 + 1] [i_3 - 2])) : (((/* implicit */int) arr_9 [i_2 + 1]))))) >= (18446744073709551605ULL)));
            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) 934004122U))));
        }
    }
    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
    {
        arr_19 [i_4] &= ((/* implicit */unsigned short) ((((min((((/* implicit */long long int) (-(((/* implicit */int) var_4))))), (((arr_12 [i_4]) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))))) + (9223372036854775807LL))) >> (min((((/* implicit */unsigned int) (short)0)), (arr_17 [i_4])))));
        var_19 -= (!(min((arr_16 [i_4] [i_4]), (arr_16 [i_4] [i_4]))));
    }
}
