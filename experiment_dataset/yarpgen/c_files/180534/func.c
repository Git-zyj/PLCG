/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180534
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) var_16)) | (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_2)) ? (0) : (((/* implicit */int) var_15)))) : (((/* implicit */int) ((signed char) var_3)))))));
    var_20 = ((((/* implicit */unsigned long long int) 2147483647)) * (min((var_0), (((((/* implicit */unsigned long long int) var_9)) + (var_14))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            {
                arr_4 [(short)8] |= (unsigned short)27396;
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */short) var_6);
                            var_22 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), (max((arr_6 [i_1 + 1] [i_1 - 1] [i_1 + 2]), (arr_6 [i_1 + 2] [i_1 - 1] [i_1 + 2])))));
                            arr_9 [i_3] [i_1] [i_0] [i_3] [i_0] = ((/* implicit */unsigned short) ((arr_1 [i_0] [i_0]) >= (max((arr_1 [(short)9] [i_0]), (arr_1 [i_3] [i_0])))));
                            arr_10 [i_3] [i_0] [i_0] [i_0] = arr_0 [7] [6ULL];
                            arr_11 [i_0] [i_2] [i_1 - 1] [i_0] = ((/* implicit */unsigned short) var_3);
                        }
                    } 
                } 
            }
        } 
    } 
}
