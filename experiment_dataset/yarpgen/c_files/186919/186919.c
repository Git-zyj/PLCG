/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= ((var_1 ? ((63 ? 13668073014503372732 : 1)) : var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_13 = (arr_5 [i_0] [i_1] [i_1]);
                arr_6 [i_1] = (((!9899738591259278343) | ((((max((arr_3 [i_1]), var_1))) ? ((max((arr_5 [i_1] [i_0] [i_0]), (arr_0 [i_0])))) : 1))));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_14 -= (min((((arr_8 [i_0] [i_2 - 1] [i_2 - 2]) ? (arr_9 [i_1] [i_2 - 4] [i_2 - 4]) : var_9)), (((29 && (arr_8 [i_0] [i_2 - 3] [i_2 - 4]))))));
                            arr_12 [i_0] = min((((((min(var_5, var_4))) || (((2068 >> (((arr_8 [i_3] [i_2 - 3] [i_1]) - 455918531)))))))), (min((arr_2 [i_0]), (arr_2 [i_0]))));
                        }
                    }
                }
            }
        }
    }
    var_15 = (-6 / 61);
    #pragma endscop
}
