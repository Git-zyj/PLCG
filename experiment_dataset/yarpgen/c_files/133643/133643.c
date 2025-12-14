/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_12));
    var_14 = (854183975 < 4294967295);
    var_15 = (((!var_0) ? ((((1 ? 10207174591225750403 : 4294967295)) / (((3440783299 ? var_8 : var_4))))) : (((((var_4 ? var_10 : var_11))) ? ((max(var_4, var_8))) : (min(var_9, -4))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_1] = 3440783291;
                var_16 = (((arr_3 [i_1] [i_0] [i_0]) || (((-(854184005 && var_7))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [i_1] [i_3] [i_3] = (((arr_4 [i_1]) ? var_0 : (((((289160765 ? 16650 : 4005806531))) ? (((arr_10 [i_3] [i_1] [i_1] [17] [i_1] [i_0]) ? (arr_2 [i_2] [i_3]) : (arr_4 [i_1]))) : (arr_9 [i_0] [i_0] [i_0] [3])))));
                            var_17 = (arr_2 [i_3] [i_2]);
                            var_18 = (max(var_18, 854183997));
                            var_19 = (((((arr_9 [i_0] [i_1] [i_2] [i_3]) ^ 73)) >= (arr_1 [i_0])));
                        }
                    }
                }
                arr_12 [i_1] = 4005806542;
            }
        }
    }
    #pragma endscop
}
