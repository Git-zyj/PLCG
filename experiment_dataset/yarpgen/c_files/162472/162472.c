/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_0, var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((!(arr_0 [i_0] [i_0])));
                var_19 = (min((arr_5 [i_0] [i_0] [i_1]), (--53)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_20 += ((-(((!(~11113))))));
                            var_21 = (max(var_21, ((min((((-((-14933 ? 45887 : 14957))))), -7648816823845330730)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
