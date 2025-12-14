/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121600
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_8 [i_0 + 1] [i_0 - 1] [3ULL] [1] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [(signed char)0])) - (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((var_2) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))) + (((unsigned long long int) arr_0 [i_0 + 1])));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 8; i_3 += 4) 
                    {
                        for (long long int i_4 = 1; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_14 [i_3] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((var_2) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_1 + 1] [i_1 + 1] [i_3 + 3] [i_4 + 1] [i_2] [4]))))) >= (max((((/* implicit */unsigned long long int) var_10)), (arr_9 [i_2] [i_2] [i_2] [i_3 - 2] [i_4] [i_2]))))))) ^ (((((/* implicit */_Bool) arr_9 [i_4 - 1] [i_4] [i_4 - 1] [i_3 + 1] [i_1 + 1] [i_1])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                                var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_4), (((((/* implicit */_Bool) var_5)) ? (arr_1 [i_3 + 2]) : (var_5)))))) ? (max((arr_1 [i_4 - 1]), (arr_1 [i_4 - 1]))) : (((/* implicit */unsigned long long int) max((arr_11 [i_0] [i_3] [i_1 - 1]), (arr_2 [i_3 - 3]))))));
                                var_13 ^= ((/* implicit */unsigned short) max(((~(var_8))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 + 1] [i_1 + 1])))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */_Bool) ((min((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_11 [i_0] [i_2] [i_0])))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_6 [i_0] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((unsigned int) var_0)) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [(signed char)9])) + (((/* implicit */int) arr_4 [i_0 - 1] [i_0]))))))))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 11; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) arr_2 [i_5 - 1])), (arr_0 [i_5 + 1]))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 - 1] [i_5 + 1] [i_5 - 1]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(signed char)3] [(signed char)3]))) + (arr_2 [10U])))))))))));
                                var_16 = ((/* implicit */short) max((((/* implicit */int) min((((short) var_3)), (((/* implicit */short) ((signed char) var_10)))))), (var_0)));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0 + 1] [(short)4] [i_2] [i_2] [i_2]))) ^ (arr_11 [i_0] [i_2] [i_2])))) ? (max((((/* implicit */unsigned long long int) arr_18 [4U] [i_2] [(unsigned char)6] [(unsigned short)4] [10ULL] [i_2] [i_2])), (var_4))) : (max((arr_16 [i_2]), (((/* implicit */unsigned long long int) var_11)))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) var_3);
}
