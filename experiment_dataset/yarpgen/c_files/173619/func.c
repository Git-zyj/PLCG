/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173619
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
    for (int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_2 [i_0]))) ? (((arr_2 [i_0]) / (arr_0 [i_0 + 4]))) : (arr_2 [i_0 - 1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -846739989867423233LL)) ? (((/* implicit */int) (signed char)100)) : (((/* implicit */int) (signed char)71))))) : (arr_0 [i_0 + 4])));
        arr_3 [i_0] = ((/* implicit */long long int) arr_1 [i_0 + 3] [i_0 - 1]);
        var_17 |= ((/* implicit */signed char) arr_2 [i_0]);
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (((!(((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), (arr_2 [i_0])))))) ? (((/* implicit */int) ((signed char) min((arr_0 [i_0]), (((/* implicit */long long int) (unsigned short)58804)))))) : (((/* implicit */int) (unsigned short)65535)))))));
        arr_4 [i_0 - 1] [i_0] = ((/* implicit */signed char) ((int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) < (arr_2 [i_0 + 3]))));
    }
    for (int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        arr_8 [i_1] [i_1] = 5811203526365302058LL;
        var_19 = ((/* implicit */int) min((var_19), (min((((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (min((arr_6 [i_1]), (((/* implicit */int) var_12)))) : (min((((/* implicit */int) (signed char)88)), (arr_7 [i_1] [i_1]))))), (arr_7 [i_1] [i_1])))));
        arr_9 [i_1] |= max((((/* implicit */long long int) ((max((2097151), (((/* implicit */int) var_15)))) + (((((/* implicit */_Bool) 657862240773182893LL)) ? (var_14) : (((/* implicit */int) var_12))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_1] [i_1]))))) ? (((/* implicit */long long int) arr_7 [i_1] [i_1])) : (((var_10) + (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))))))));
    }
    /* LoopNest 2 */
    for (long long int i_2 = 1; i_2 < 21; i_2 += 1) 
    {
        for (unsigned short i_3 = 1; i_3 < 22; i_3 += 4) 
        {
            {
                arr_15 [(signed char)9] [i_3] = ((/* implicit */long long int) 2097129);
                /* LoopSeq 2 */
                for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    arr_19 [i_2] = ((/* implicit */int) ((long long int) min((arr_0 [i_3 + 2]), (arr_0 [i_3 - 1]))));
                    var_20 |= ((/* implicit */int) ((unsigned short) max((18014398509481983LL), (((/* implicit */long long int) arr_18 [i_2 + 1] [i_2 + 1] [(signed char)12])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_10 [i_2 + 2] [i_3])), (arr_0 [i_2 - 1])));
                                var_22 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) 18014398509481983LL))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-1)) ? (2612391606975160344LL) : (18014398509481972LL))) > (((((/* implicit */_Bool) arr_23 [i_2] [i_3] [i_4])) ? (arr_17 [i_2 - 1] [i_3] [(signed char)6] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)118)))))))) : (((/* implicit */int) ((unsigned short) -2097151)))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (long long int i_7 = 0; i_7 < 24; i_7 += 4) 
                {
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((unsigned short) (signed char)-5)))));
                    var_24 = ((/* implicit */int) arr_18 [i_2 + 2] [i_3] [i_2]);
                }
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_13)) ? (max((((/* implicit */int) (unsigned short)65530)), ((-2147483647 - 1)))) : (((/* implicit */int) ((unsigned short) -2097152))))));
}
