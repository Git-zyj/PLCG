/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_11 = (arr_2 [i_0] [i_1] [i_1]);
                var_12 = (min(((max((arr_3 [i_1]), (12992 != 5)))), -567288868));

                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    var_13 = -9939;
                    var_14 = (min(var_6, 12));
                    var_15 = (min((min(9927, (arr_4 [i_0] [i_1] [i_0]))), var_8));
                    var_16 = ((~((((((var_6 ? (arr_5 [i_0] [21] [21]) : var_5))) || (!9939))))));
                }
            }
        }
    }
    var_17 = (min((!var_4), 8));
    var_18 = var_1;
    #pragma endscop
}
