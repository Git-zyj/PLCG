/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126022
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) arr_1 [i_1 - 3] [i_1 + 2]);
                    arr_8 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) (signed char)-96);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        for (int i_4 = 2; i_4 < 18; i_4 += 3) 
        {
            {
                arr_15 [i_3] [i_3] [(unsigned short)19] = ((/* implicit */long long int) (signed char)64);
                var_19 = ((/* implicit */signed char) max((var_19), (min((((/* implicit */signed char) var_12)), ((signed char)122)))));
                var_20 = ((/* implicit */long long int) ((unsigned long long int) (signed char)95));
                arr_16 [i_3] [i_4 + 2] = ((/* implicit */short) arr_11 [i_3 + 1]);
                var_21 = ((/* implicit */unsigned int) var_0);
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) var_4)) - (((0) + (((/* implicit */int) (unsigned short)15)))))) : (((/* implicit */int) var_12))));
    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_6))));
}
