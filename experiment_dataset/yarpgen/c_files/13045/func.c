/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13045
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
    var_16 = ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */int) arr_0 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [14U] [1] [i_1] = ((/* implicit */long long int) arr_10 [i_1] [i_1]);
                            var_18 = ((/* implicit */long long int) arr_5 [i_1] [i_1] [i_0]);
                            arr_12 [i_1] [i_1] [(unsigned short)2] [i_3] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1 - 1] [i_0] [i_3]))) * (arr_5 [i_0] [i_1] [i_2]))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2])))));
                            arr_13 [i_1] [i_0] [i_1] [6] [i_2] [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_4 [i_2])) >= (arr_3 [(signed char)7]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
