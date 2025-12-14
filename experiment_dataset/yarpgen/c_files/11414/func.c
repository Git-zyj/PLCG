/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11414
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
    var_20 = max((var_19), (((/* implicit */long long int) min((((/* implicit */unsigned int) (short)16384)), (((((/* implicit */_Bool) var_3)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
    var_21 -= ((/* implicit */long long int) var_1);
    var_22 = ((/* implicit */int) var_0);
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50786)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) (short)0))))) : (((/* implicit */int) (unsigned char)219))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_0] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? ((~(arr_1 [1ULL] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) 3682212680U))) ? (((/* implicit */int) min((((612754615U) == (arr_2 [i_2] [i_4]))), (((arr_2 [0LL] [i_3]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4] [i_0] [i_3] [i_2] [i_1] [i_0] [i_0])))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 - 2] [i_0] [(short)9])))))));
                            }
                        } 
                    } 
                    arr_12 [i_0] = ((/* implicit */unsigned short) ((unsigned char) min((((/* implicit */unsigned int) arr_3 [i_0] [i_1 - 1] [i_0])), (((arr_5 [i_2] [i_0] [i_0]) - (((/* implicit */unsigned int) var_13)))))));
                    arr_13 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_10 [i_1] [i_1 + 1] [i_1] [i_1] [i_1 - 2])) ? (arr_10 [5ULL] [i_1 + 1] [i_1] [i_1] [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) == (((((/* implicit */_Bool) arr_10 [13] [i_1 - 2] [i_1] [i_1] [i_1 + 1])) ? (arr_10 [i_0] [i_1 + 1] [i_1] [5U] [i_1 - 2]) : (arr_10 [i_0] [i_1 - 1] [i_1] [i_1] [i_1 + 1])))));
                }
            } 
        } 
    } 
}
