/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 = ((-(arr_3 [10] [i_1] [i_0])));
                    var_18 = (max((((6004435185691686203 ? var_11 : 1))), (((((((arr_2 [i_2]) ? var_9 : 70))) ? ((1 ? var_11 : 59103)) : ((min(var_12, var_12))))))));
                    var_19 = ((-(min(var_15, var_4))));
                }
            }
        }
    }
    var_20 = ((1 << (81 - 74)));
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 21;i_5 += 1)
            {
                {
                    var_21 = (((((~(arr_12 [i_3] [i_5 + 1])))) ? (max(6433, 2585235550140272030)) : var_0));
                    var_22 = (((max((10813 < 4294967295), ((!(-127 - 1))))) || ((min(43, 52262)))));
                    var_23 = (((((1 ? 1 : 59102))) ? (arr_12 [i_3] [i_4]) : (1 * 6426)));
                }
            }
        }
    }
    #pragma endscop
}
