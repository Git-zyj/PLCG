/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17980
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    {
                        arr_10 [19ULL] [i_1] [3ULL] [i_3] [(unsigned char)23] [i_3] = ((/* implicit */unsigned char) var_7);
                        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) ((long long int) 4294967294U)))) ? (((unsigned int) var_12)) : (((3096772847U) << (((((((/* implicit */_Bool) var_10)) ? (var_3) : (var_10))) - (6200701965786203121ULL))))))))));
                    }
                } 
            } 
        } 
        var_15 = ((((/* implicit */_Bool) max((9223372036854775807LL), (((/* implicit */long long int) (signed char)5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 482614095503506107LL)))))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0 - 1] [i_0])) ? (((/* implicit */unsigned long long int) 1170669549651331410LL)) : (arr_6 [i_0 - 1] [18U] [6U]))));
        var_16 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 8847197962595480313ULL)) ? (-4774905269330240856LL) : (((/* implicit */long long int) var_8))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0] [i_0] [i_0 + 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)250))))) : (((((/* implicit */_Bool) 3957477206U)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))) * (((18446744073709551611ULL) | (15118847223595704569ULL)))));
    }
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((long long int) var_12)), (((/* implicit */long long int) var_6))))) ? ((-(((/* implicit */int) ((unsigned short) (signed char)-8))))) : (((/* implicit */int) ((unsigned short) var_12))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 4) 
    {
        for (unsigned int i_5 = 1; i_5 < 11; i_5 += 4) 
        {
            {
                arr_17 [i_4 - 1] = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))))), (min((((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */unsigned long long int) 337490079U)) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) -527045766)))));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    for (unsigned long long int i_7 = 1; i_7 < 8; i_7 += 4) 
                    {
                        {
                            arr_23 [i_7] [i_6] [i_5 - 1] [11ULL] [i_6] [i_4] = ((/* implicit */unsigned int) ((((((unsigned long long int) arr_18 [i_5] [2ULL] [i_6])) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2440))))) ? (((/* implicit */unsigned long long int) (~(max((((/* implicit */unsigned int) var_2)), (arr_15 [0ULL])))))) : (((unsigned long long int) ((((/* implicit */unsigned long long int) 4294967295U)) <= (arr_21 [9LL] [0ULL]))))));
                            arr_24 [i_4 - 1] [i_5 - 1] [i_6] [9ULL] = arr_1 [i_7] [17ULL];
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_8 = 1; i_8 < 9; i_8 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 2; i_9 < 10; i_9 += 3) 
                    {
                        for (signed char i_10 = 0; i_10 < 12; i_10 += 4) 
                        {
                            {
                                arr_32 [(unsigned short)3] [i_8] [(unsigned short)3] [9ULL] [i_8] [(unsigned short)3] = ((/* implicit */unsigned char) arr_9 [i_4 - 2] [i_9 + 1] [i_8] [i_8]);
                                var_18 = ((/* implicit */long long int) -24);
                            }
                        } 
                    } 
                    arr_33 [i_8] [9ULL] [i_8] [i_8] = ((/* implicit */signed char) ((4228047074U) >> (((168061393U) - (168061386U)))));
                }
                var_19 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)107))))) ? (((long long int) var_9)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_16 [i_4] [i_4 + 2] [i_4 + 3])) : (((/* implicit */int) var_12)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) max((((((unsigned int) var_11)) + (((/* implicit */unsigned int) ((/* implicit */int) var_12))))), (var_9))))));
}
