/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = -11;
                arr_4 [1] [i_0] [13] = (((((0 ? ((var_9 ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0]))) : -26234))) ? (((!(((var_10 ? var_1 : var_3)))))) : (((!(arr_0 [i_0]))))));
                var_15 = ((((var_7 ? (arr_1 [i_0] [i_0]) : ((2255527497 ? 2639134710 : (arr_1 [15] [i_1])))))) ? ((3001635156 & (max(4294967295, 0)))) : (arr_0 [i_0]));
            }
        }
    }
    var_16 = (max((((((var_6 ? var_5 : var_13))) ? (!2255527501) : var_9)), var_7));
    var_17 &= -var_2;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 15;i_4 += 1)
            {
                {
                    var_18 = (max(var_18, var_1));
                    var_19 += (((~-2702) - (arr_7 [i_4 + 2])));
                }
            }
        }
    }
    #pragma endscop
}
