/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166868
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
    var_11 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */long long int) var_3);
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_10 [i_4] [i_4 + 2] [i_4] [i_4] [i_4 - 1] [i_4])))) || (((/* implicit */_Bool) ((6668247774304330774ULL) * (6668247774304330776ULL))))));
                                arr_14 [i_1] = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_1] [i_3] [(unsigned char)16]))))) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))) <= (arr_4 [i_2] [i_3]))))))), (((arr_3 [i_4] [i_1] [i_4 - 1]) / (arr_3 [i_4 - 1] [i_1] [i_4 + 2])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_12 = min((-12LL), (((/* implicit */long long int) max((((((/* implicit */int) var_10)) - (((/* implicit */int) var_0)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))))))));
}
