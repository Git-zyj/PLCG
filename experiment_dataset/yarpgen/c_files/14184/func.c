/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14184
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
    var_19 *= ((/* implicit */_Bool) (+(var_14)));
    var_20 = ((/* implicit */unsigned short) ((long long int) 2147483647));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_1 - 2] = ((/* implicit */long long int) var_15);
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49152))) < (6166180706746775947ULL)))) + (((/* implicit */int) ((signed char) (unsigned short)49152)))))) ? (((/* implicit */long long int) ((((/* implicit */int) ((2147483647) == (-2147483647)))) << (((18446744073709551615ULL) - (18446744073709551591ULL)))))) : (((((arr_0 [i_0]) + (9223372036854775807LL))) << (((var_18) - (3506608996000219462ULL))))))))));
                    var_22 = ((((/* implicit */_Bool) min((9223372036854775807LL), (6308456851220164846LL)))) ? (var_10) : (((/* implicit */long long int) -2147483647)));
                }
                for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
                {
                    var_23 &= ((/* implicit */int) 12280563366962775667ULL);
                    /* LoopNest 2 */
                    for (long long int i_4 = 1; i_4 < 8; i_4 += 3) 
                    {
                        for (long long int i_5 = 3; i_5 < 8; i_5 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) min((var_24), (var_10)));
                                arr_19 [i_0] [5ULL] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_14 [i_5 + 1] [i_1 + 1] [i_3] [i_1 - 1] [i_4 + 1]))) ? (((((/* implicit */_Bool) 835221234387878205ULL)) ? (arr_14 [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_1 - 1] [i_4 - 1]) : (var_0))) : (((/* implicit */unsigned long long int) ((long long int) arr_14 [i_5 - 1] [i_1 - 2] [i_3] [i_1 - 1] [i_4 + 2])))));
                            }
                        } 
                    } 
                }
                var_25 = min((((((/* implicit */_Bool) ((var_18) << (((var_18) - (3506608996000219460ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_10)))))) : (var_4))), (max((747438679825376706LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_17 [5LL] [9LL] [i_0]))))))));
                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1])) ? (((long long int) ((((/* implicit */unsigned long long int) var_12)) - (var_17)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)45)) ? (((/* implicit */unsigned long long int) -5LL)) : (2689549827345011632ULL)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) arr_15 [i_0] [i_0] [i_1] [i_0] [i_1])) : ((-9223372036854775807LL - 1LL)))) : (max((var_12), (arr_16 [i_1 - 1] [i_0] [i_1 - 1] [(signed char)9] [(_Bool)1] [i_0])))))));
                var_27 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((var_17) >= (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 462719603)), (-375387284377905123LL))))))), (min((((14964946696702090514ULL) ^ (((/* implicit */unsigned long long int) arr_11 [i_0] [i_1 - 2])))), (((((/* implicit */_Bool) (signed char)-28)) ? (var_14) : (((/* implicit */unsigned long long int) var_3))))))));
            }
        } 
    } 
}
