/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134238
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
    for (int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_14 [i_3] [i_3] [i_2] = ((/* implicit */signed char) ((min((((/* implicit */long long int) arr_11 [i_0 - 3] [i_1] [i_2] [i_3] [i_4])), (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 2]))) / (arr_10 [i_0] [i_3] [i_0] [i_0] [i_0]))))) & (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) (signed char)83)) >= (((/* implicit */int) (_Bool)1))))), (arr_12 [i_0] [i_3] [i_0] [i_0 - 1] [i_0 - 3]))))));
                                arr_15 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_0])) > (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)70))))));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) ((long long int) ((long long int) min((arr_13 [i_0] [i_1] [i_3] [i_3]), (arr_13 [i_1] [i_1] [i_3] [i_1])))));
                                arr_17 [i_2] [i_3] [i_3] [i_2] = arr_0 [i_2];
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_0] |= ((/* implicit */signed char) max((min((((/* implicit */int) arr_4 [i_2])), (((arr_12 [i_0 - 2] [i_2] [(unsigned short)6] [i_0 - 2] [i_0]) << (((((((/* implicit */int) arr_0 [i_0])) + (84))) - (22))))))), (((/* implicit */int) ((short) ((short) arr_10 [i_0] [i_2] [i_0 - 3] [i_0] [i_0 - 3]))))));
                    arr_19 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) 1805914937))) << (((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) + (max((((/* implicit */long long int) arr_11 [i_0] [i_0 - 2] [i_0 - 1] [i_2] [i_0 - 3])), (arr_10 [i_0] [i_2] [i_0 + 1] [i_0 - 1] [i_0]))))) - (16849LL)))));
                }
            } 
        } 
    } 
    var_14 = var_0;
}
