/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174740
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned short) (+(min((((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_13)))))))));
                var_15 |= ((/* implicit */signed char) ((max((((unsigned int) (unsigned short)65535)), (((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))))) > (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_4 [i_1]))));
                var_17 |= ((/* implicit */unsigned long long int) arr_3 [i_0]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 4) 
    {
        for (unsigned short i_3 = 3; i_3 < 12; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 3) 
            {
                {
                    var_18 = arr_12 [i_4] [i_4 + 1] [(short)8] [i_2];
                    var_19 = ((/* implicit */unsigned long long int) ((arr_5 [i_3]) + (max((((/* implicit */unsigned int) var_2)), (arr_5 [i_3])))));
                }
            } 
        } 
    } 
}
