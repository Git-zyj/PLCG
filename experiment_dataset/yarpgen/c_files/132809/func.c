/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132809
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((int) arr_0 [7LL] [i_1 + 1])) == (((max((((/* implicit */int) arr_1 [6ULL] [i_1])), (arr_2 [i_1]))) - (((/* implicit */int) ((unsigned short) arr_3 [i_0]))))))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)41687))))), (((arr_9 [i_1 + 2] [i_1 + 3] [i_1 + 3] [i_1 - 1]) % (arr_9 [i_1 + 2] [i_1] [i_1 + 3] [i_1 - 1])))));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) 7))) ? ((-(((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [(unsigned short)6] [i_2]))) - (arr_12 [i_0] [i_0] [(signed char)8] [7LL] [(signed char)8]))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (+(2575369506U))))))));
                            }
                        } 
                    } 
                } 
                var_20 = min(((+(((/* implicit */int) ((arr_9 [6ULL] [i_1 + 2] [6ULL] [i_0]) != (((/* implicit */unsigned int) arr_2 [i_0]))))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1] [i_1 - 1] [(short)1] [10LL]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_14);
    var_22 ^= ((/* implicit */unsigned int) var_4);
}
