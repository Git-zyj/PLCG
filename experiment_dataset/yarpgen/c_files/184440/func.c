/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184440
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_13 [i_4] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_4)), (((unsigned long long int) max(((unsigned char)139), (((/* implicit */unsigned char) (_Bool)1)))))));
                                var_11 = ((((/* implicit */_Bool) min((arr_10 [i_2] [i_1] [i_1] [i_4] [i_4 + 2]), (arr_10 [i_2] [i_2] [11] [i_0] [i_4 - 2])))) ? (((((/* implicit */_Bool) arr_11 [i_3 - 2] [i_3 - 2] [i_3 - 1] [i_3] [i_4 + 1])) ? (((/* implicit */unsigned long long int) var_7)) : (arr_11 [i_3 - 1] [i_4 + 2] [i_4 + 2] [i_4] [i_4 + 2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) / (((/* implicit */int) arr_10 [i_2] [i_1] [i_2] [12U] [i_4 + 3]))))));
                                var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) min((((((/* implicit */_Bool) arr_8 [i_4] [i_4 + 4] [i_4 + 4] [i_4 + 4] [i_4] [18U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_4 + 4] [i_1] [i_4 + 4] [i_4]))) : (arr_11 [i_4] [i_4 + 4] [i_4] [i_4 + 4] [i_4 - 1]))), (((((/* implicit */_Bool) arr_8 [i_4] [i_4 + 4] [i_4] [i_4 + 4] [i_4 + 4] [i_4])) ? (arr_11 [i_4] [i_4 + 4] [i_4] [i_4 + 4] [i_4 + 4]) : (arr_11 [i_4] [i_4 + 4] [i_4 - 1] [i_4 + 4] [1U]))))))));
                                var_13 ^= min((min((9223372036854775807LL), (((/* implicit */long long int) (unsigned char)159)))), (((/* implicit */long long int) var_3)));
                                var_14 = ((/* implicit */long long int) ((min((549754765312ULL), (18446743523954786277ULL))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_3 - 1] [i_4 + 4] [i_4 + 2])) ? (max((var_7), (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)70)))))))))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */signed char) max((((((/* implicit */_Bool) -1596760187372392875LL)) ? (18446743523954786295ULL) : (((/* implicit */unsigned long long int) 9U)))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 13U)) ? (-2147483634) : (((/* implicit */int) var_10)))) * (((/* implicit */int) (_Bool)0)))))));
                var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_1] [(signed char)8] [i_1] [i_0]))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) var_2);
    var_18 |= ((/* implicit */unsigned long long int) max(((+(((((/* implicit */int) var_10)) * (((/* implicit */int) var_3)))))), (((/* implicit */int) var_4))));
    var_19 = ((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))))), (var_1))))));
    var_20 = ((/* implicit */signed char) max((((/* implicit */int) var_8)), (var_0)));
}
