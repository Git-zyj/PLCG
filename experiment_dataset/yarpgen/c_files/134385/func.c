/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134385
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
    for (long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                {
                    var_20 += ((/* implicit */unsigned short) var_16);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0 + 2] [11U] [i_1] [i_1] [i_3] [i_3] [i_4] = ((/* implicit */signed char) max((((/* implicit */short) (!(((/* implicit */_Bool) var_16))))), (arr_10 [i_0 + 1] [i_3] [i_0 + 1] [i_3])));
                                arr_14 [i_3] [i_1] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [7U] [i_1] [i_3] [i_3]))) / (min((arr_5 [i_4 - 1] [i_2 - 2] [i_2 - 2]), (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 *= var_8;
}
