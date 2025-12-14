/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188292
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */long long int) min((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1166903144U)) ? (-991221893) : (((/* implicit */int) var_12))))), (arr_2 [i_0] [i_1]))), (((/* implicit */unsigned int) var_13))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_19 = ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned short)45766)) : (((/* implicit */int) (unsigned short)19770)));
                            var_20 = max(((~(arr_11 [i_0] [i_1 - 1] [i_1 + 2] [i_3] [i_1] [i_3]))), (((/* implicit */int) (unsigned short)58138)));
                            var_21 = var_11;
                            var_22 = arr_7 [i_0] [i_0] [i_1];
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned int) max((((/* implicit */signed char) ((arr_2 [i_1 - 1] [i_1]) < (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_1]))) : (var_4)))))), ((signed char)127)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
    {
        for (short i_5 = 1; i_5 < 10; i_5 += 2) 
        {
            {
                var_24 *= ((/* implicit */unsigned long long int) arr_4 [i_4] [i_4] [i_5]);
                var_25 = ((/* implicit */short) min((arr_15 [i_5] [i_5 + 1]), (((/* implicit */unsigned long long int) (unsigned char)126))));
            }
        } 
    } 
}
