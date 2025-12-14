/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13468
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */int) var_2)) + (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 1767075103)) ? (((/* implicit */int) var_1)) : (var_7)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [18] [i_1] [15LL] = ((/* implicit */unsigned short) (_Bool)1);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_16 [i_1] [i_1] [i_0] [i_0] [i_3] = (+(((unsigned int) min((((/* implicit */long long int) var_8)), (arr_4 [i_0] [(unsigned short)13] [i_0])))));
                                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((min((((/* implicit */long long int) arr_11 [i_2 + 2] [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 1])), (min((((/* implicit */long long int) var_10)), (var_11))))) - (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1] [i_1] [0] [0] [i_2 + 2]))))))));
                                arr_17 [10ULL] [i_3] [17U] = max((((((/* implicit */_Bool) min((arr_9 [i_3] [i_3] [i_0] [i_3]), (((/* implicit */signed char) arr_5 [i_0] [i_2]))))) ? (((((/* implicit */int) arr_14 [i_4 + 1] [(signed char)0] [i_3] [(signed char)0] [(short)16] [(short)16] [i_0])) & (((/* implicit */int) arr_10 [i_0] [i_3] [i_0] [i_2] [i_3] [i_4 + 1])))) : ((~(((/* implicit */int) arr_5 [i_0] [i_0])))))), (max((((/* implicit */int) (signed char)-1)), (((((/* implicit */_Bool) 743696528U)) ? (((/* implicit */int) var_9)) : (-1767075118))))));
                            }
                        } 
                    } 
                    var_14 = var_11;
                    var_15 = ((/* implicit */unsigned char) arr_3 [i_1] [i_2 - 1]);
                }
            } 
        } 
    } 
}
