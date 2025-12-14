/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177135
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)0)), (4198397960U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 582765870U)))) : (var_15))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 8619101978029132924LL)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)0)))) * (((/* implicit */int) var_1)))))));
    var_18 = ((/* implicit */unsigned int) ((((long long int) (~(8935141660703064064LL)))) != (((/* implicit */long long int) var_12))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_19 ^= max((min((((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_2]))) : (arr_1 [i_3 + 2]))), (((/* implicit */unsigned int) var_8)))), (max((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) / (arr_2 [i_2] [i_3])))), (((unsigned int) arr_13 [i_2] [i_1 + 2] [i_1] [i_1 - 1])))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [15LL] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_10), ((-(((/* implicit */int) (signed char)0))))))) ? (min((arr_2 [i_0] [i_3 + 2]), (arr_2 [i_0] [i_3 + 2]))) : (((((/* implicit */_Bool) -170306078)) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) (short)-30571))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 23; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0]);
                                arr_23 [i_0] [i_6] [i_0] = min((((/* implicit */long long int) ((((/* implicit */int) ((signed char) -923856428166641335LL))) + (((/* implicit */int) var_0))))), (-7264377228947450045LL));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
