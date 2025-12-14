/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148856
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((int) arr_1 [i_1]))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)-24735))) ^ (1036505388U)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)28221)) ^ (((/* implicit */int) (short)-2036))));
                                arr_15 [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) : (max((arr_13 [i_4 + 1] [i_2] [i_4 - 2] [i_2] [i_1]), (arr_13 [i_4 - 2] [i_2] [i_4 - 3] [i_2] [i_2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) ^ (var_5)));
    var_15 = ((/* implicit */signed char) max(((~(((/* implicit */int) var_12)))), (((/* implicit */int) var_1))));
    var_16 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)1)) ^ (((/* implicit */int) var_7))));
}
