/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178541
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
    var_19 = ((/* implicit */long long int) min((var_19), (var_18)));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_14 [i_1] [14LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_9 [i_1 + 2] [i_3 + 1] [i_3] [i_4]) ^ (arr_9 [i_1 + 2] [i_3 + 1] [i_3] [i_4])))) ? (((/* implicit */int) ((arr_9 [i_1 - 1] [i_3 + 1] [15LL] [i_3 + 1]) == (arr_9 [i_1 + 1] [i_3 - 1] [i_3] [i_3])))) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) 1461780828967372288LL)))))));
                                var_20 += ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) 9223372036854773760LL))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_5 = 2; i_5 < 21; i_5 += 3) 
                {
                    for (long long int i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        for (long long int i_7 = 2; i_7 < 18; i_7 += 2) 
                        {
                            {
                                arr_24 [i_1] = (((!(((/* implicit */_Bool) arr_5 [i_5] [i_1 + 2] [i_1] [5LL])))) ? (arr_4 [i_1] [i_1]) : (((long long int) arr_7 [i_7 - 2] [i_7 - 2] [i_5 + 1] [i_1 - 1])));
                                arr_25 [i_1] [i_1] = 3605063803365241280LL;
                                arr_26 [i_1] [i_1 + 1] [i_5] [i_6] [i_6] [i_6] [i_7] = ((/* implicit */long long int) (!(((-1LL) == (var_13)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_8 = 4; i_8 < 9; i_8 += 3) 
    {
        for (long long int i_9 = 0; i_9 < 11; i_9 += 2) 
        {
            for (long long int i_10 = 2; i_10 < 8; i_10 += 2) 
            {
                {
                    arr_38 [i_8] [7LL] [1LL] [i_10 + 1] = max((((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854773760LL)))))))), (max((((arr_5 [i_8] [i_9] [i_9] [i_10 + 1]) | (-36028797018963968LL))), (((long long int) 0LL)))));
                    arr_39 [3LL] = max((((long long int) var_4)), ((-(-3605063803365241280LL))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_11 = 2; i_11 < 7; i_11 += 3) 
    {
        for (long long int i_12 = 0; i_12 < 10; i_12 += 2) 
        {
            {
                arr_44 [i_11] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) -3605063803365241288LL)) && (((/* implicit */_Bool) 1461780828967372288LL)))))));
                var_21 = max((7976189900793949604LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((-7967722959880754768LL), (arr_28 [i_11]))))))));
                /* LoopNest 2 */
                for (long long int i_13 = 1; i_13 < 9; i_13 += 2) 
                {
                    for (long long int i_14 = 0; i_14 < 10; i_14 += 1) 
                    {
                        {
                            var_22 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_31 [i_11]))));
                            var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_32 [i_11 - 1] [i_11 + 2] [i_13 + 1]) % (arr_32 [i_11 + 3] [i_11 + 3] [i_13 + 1]))))));
                            arr_49 [9LL] [i_13 + 1] [i_13] = (+(((long long int) var_12)));
                            arr_50 [i_11] [i_13] [i_14] = arr_1 [i_11 - 2] [i_12];
                        }
                    } 
                } 
                arr_51 [i_11] [i_12] = ((long long int) ((((/* implicit */_Bool) arr_10 [i_12] [i_11 - 1] [i_11 + 1] [i_11 + 3] [i_11 - 2] [i_12])) ? (arr_10 [i_12] [i_11 - 2] [i_11 - 1] [i_11 + 3] [i_11 + 3] [i_12]) : (750405967161530353LL)));
            }
        } 
    } 
    var_24 = min((((7137096540046853346LL) >> (((-4325027402467704538LL) + (4325027402467704569LL))))), (var_5));
}
