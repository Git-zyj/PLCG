/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119294
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
    for (int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_1] [i_0] [i_1] = (~(arr_3 [i_2] [i_0] [i_0]));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */int) min((var_14), (arr_1 [i_2])));
                                var_15 = ((/* implicit */int) (!((!((!(((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_3] [i_3]))))))));
                                var_16 = (~((+(arr_5 [i_1]))));
                            }
                        } 
                    } 
                    var_17 = arr_3 [i_0 - 1] [i_1] [i_0 - 1];
                }
            } 
        } 
    } 
    var_18 &= var_5;
    var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) -2094342881))));
}
