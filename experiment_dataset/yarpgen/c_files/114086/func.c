/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114086
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
    var_18 = ((/* implicit */long long int) var_16);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [i_0] [(unsigned char)7])) + (((/* implicit */int) max((var_15), (((/* implicit */unsigned char) var_16))))))))));
                    var_20 |= ((/* implicit */unsigned short) var_8);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            {
                var_21 = arr_12 [i_3];
                arr_14 [i_4] [i_3] [i_3] |= ((/* implicit */unsigned char) max((((((var_9) - (((/* implicit */long long int) var_12)))) / (((var_14) / (arr_11 [(_Bool)1] [(_Bool)1]))))), (((/* implicit */long long int) var_1))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) ((var_13) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) > (var_14))))));
}
