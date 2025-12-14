/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109155
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
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_7 [i_1] [i_0] [i_0 - 1] = ((/* implicit */int) ((arr_0 [i_0 + 1] [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7)))));
                arr_8 [i_0] = var_3;
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_15 [i_3] [4LL] = ((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [i_0] [i_2] [i_3] [(signed char)1]);
                            arr_16 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) arr_12 [(short)5] [i_1] [i_1] [i_3])) / (((/* implicit */int) arr_12 [i_0 - 1] [i_1] [i_2] [i_0 - 1])))));
                        }
                    } 
                } 
                arr_17 [i_0 + 3] [i_1] = ((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) arr_11 [i_0 + 2] [i_0 - 1])), (arr_10 [i_0 + 1] [i_0 - 1] [i_0 + 2])))));
            }
        } 
    } 
    var_11 = ((/* implicit */signed char) (+(max((((long long int) var_4)), (((/* implicit */long long int) var_2))))));
}
