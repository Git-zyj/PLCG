/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158659
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_13))))) >= (var_7)))) >= (((/* implicit */int) ((((/* implicit */_Bool) (short)-4385)) && (((/* implicit */_Bool) (~(var_6)))))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) arr_5 [(signed char)6] [i_1] [(signed char)6]))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (int i_4 = 3; i_4 < 7; i_4 += 2) 
                        {
                            {
                                var_17 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1]))) != (((((/* implicit */_Bool) arr_1 [(unsigned char)4])) ? (arr_0 [i_0 - 1]) : (arr_11 [2LL] [i_3] [i_1] [i_1] [2LL]))))))) * (((((/* implicit */_Bool) arr_11 [i_0] [i_4 + 3] [i_2] [0ULL] [(unsigned char)6])) ? (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) -3423587457098207348LL)) : (8890480502929631304ULL))) : (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 1]))))));
                                var_18 *= ((/* implicit */signed char) ((((/* implicit */int) ((arr_10 [i_0] [i_1] [i_2] [(_Bool)1] [i_4 + 1] [i_4 + 3]) >= (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_1] [(unsigned char)4] [i_1])))))) >> (((min((((((/* implicit */_Bool) arr_11 [i_0] [i_1] [(signed char)8] [i_1] [(signed char)4])) ? (arr_5 [(signed char)8] [(signed char)8] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(short)8]))))), (arr_5 [8U] [i_4 + 3] [i_2]))) - (2767945797U)))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 789498230)) ? (((/* implicit */int) (unsigned char)133)) : (((/* implicit */int) (_Bool)0))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0 + 1] [i_1] [i_2] [i_1] [0ULL] [i_0]))) : (arr_5 [i_0] [7U] [i_2])))))) && (((/* implicit */_Bool) arr_9 [i_2] [i_1] [i_0] [i_0]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (signed char i_6 = 1; i_6 < 15; i_6 += 2) 
        {
            {
                arr_19 [i_5] [i_5] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_17 [i_6] [i_6 - 1] [i_6])) >= (((/* implicit */int) arr_17 [i_5] [i_6 + 2] [i_5]))))) & (((((/* implicit */_Bool) arr_17 [(unsigned char)12] [i_6 + 1] [(unsigned char)12])) ? (((/* implicit */int) arr_17 [i_5] [i_6 - 1] [i_6])) : (((/* implicit */int) arr_17 [i_6] [i_6 + 1] [i_5]))))));
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_17 [i_5] [i_6 + 3] [i_6])) != (((/* implicit */int) arr_17 [5LL] [i_6] [i_5])))) ? (((/* implicit */int) ((arr_16 [i_5]) && (((/* implicit */_Bool) arr_17 [i_5] [i_5] [i_6]))))) : ((+(((/* implicit */int) arr_15 [i_5]))))))) ? (((/* implicit */int) arr_16 [i_5])) : (((/* implicit */int) ((((/* implicit */_Bool) ((arr_16 [i_6]) ? (arr_18 [i_5] [i_5] [i_5]) : (arr_18 [i_5] [i_6 + 2] [i_5])))) && (((((/* implicit */int) arr_17 [i_5] [i_5] [i_5])) == (-2147483647))))))));
                arr_20 [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_18 [i_6 + 3] [i_6 + 2] [i_6 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_16 [(_Bool)1])), (arr_17 [i_6] [i_5] [i_5]))))) : (((((/* implicit */_Bool) arr_17 [i_5] [i_5] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_6]))) : (arr_18 [i_5] [(short)3] [i_6 + 4]))))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_15 [i_6 + 3])) != (((/* implicit */int) arr_15 [i_6 - 1]))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_14);
}
