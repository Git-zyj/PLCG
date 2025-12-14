/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122698
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
    var_11 = ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */short) arr_4 [i_1 - 1] [i_1 + 2])), (var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_3)))) : (((4078806139U) | (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                    var_12 = (unsigned short)37231;
                    var_13 = ((/* implicit */_Bool) arr_0 [i_2]);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_7 [i_0] [i_3] [7LL] [i_1])) ? (((/* implicit */int) ((_Bool) var_3))) : (((/* implicit */int) var_3))))));
                                var_15 = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), (((((/* implicit */int) var_4)) + (((((/* implicit */int) var_1)) + (((/* implicit */int) (unsigned char)143))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
