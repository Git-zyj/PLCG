/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143356
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
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) || (((/* implicit */_Bool) var_7))))))));
    var_18 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 9; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [i_2] = ((((/* implicit */unsigned int) max((-830692080), (var_6)))) ^ ((((+(arr_5 [i_0] [i_0] [3U]))) << (((arr_1 [i_1] [i_2 + 1]) - (3877016628U))))));
                    var_19 = ((-347925476) / (((((/* implicit */_Bool) 4294967286U)) ? (830692070) : (1892072077))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((int) ((int) ((int) 1461785268U)))))));
                                arr_15 [i_2] [i_3] [i_2] [i_2] [i_2] = ((/* implicit */int) (-((((+(var_0))) ^ (((/* implicit */unsigned int) (~(var_10))))))));
                                var_21 = (+((+(((/* implicit */int) ((4294967280U) == (var_8)))))));
                                var_22 = (~((+(-830692070))));
                            }
                        } 
                    } 
                    arr_16 [i_2] = (~((+(((/* implicit */int) ((var_6) < (var_2)))))));
                    var_23 = ((/* implicit */int) min((((/* implicit */unsigned int) var_9)), ((-(1259774445U)))));
                }
            } 
        } 
    } 
}
