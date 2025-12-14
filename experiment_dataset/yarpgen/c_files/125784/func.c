/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125784
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
    var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)27))));
    var_19 = ((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (min((min((((/* implicit */int) var_8)), (716773125))), (min((((/* implicit */int) (signed char)25)), (var_6)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            {
                arr_6 [i_1] = ((/* implicit */signed char) 1960994261U);
                var_20 = ((/* implicit */_Bool) (signed char)0);
                arr_7 [i_1] = ((/* implicit */unsigned int) 716773119);
                var_21 = ((/* implicit */unsigned int) 716773112);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
                                arr_15 [i_2] [i_2] [i_2] [i_3] [i_4] [12U] [19U] = (_Bool)1;
                                arr_16 [i_0] [i_1 + 1] [i_2] [i_0] [2] = ((/* implicit */_Bool) var_15);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
