/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= ((-84 ? -2649565763763167900 : -2649565763763167900));
    var_13 *= ((735879017096813311 ? 118 : var_9));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = (max(126, 12332441074112487170));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_15 = ((-((var_9 ? 0 : (arr_1 [i_0] [i_1])))));
                            var_16 = -39;
                            var_17 = (min(var_17, (((!(((arr_3 [i_0 - 1] [i_2 + 1]) < 1)))))));
                        }
                    }
                }
            }
        }
    }
    var_18 = (((((!(var_3 > var_10)))) | var_6));
    #pragma endscop
}
