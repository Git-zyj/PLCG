/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((~(-12530 & var_7))) << (12530 < 9868)));
    var_19 = (max(25, -12530));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_1] = (((255 ? var_8 : (arr_3 [i_1 - 1]))));
                var_20 = (((arr_1 [i_0] [i_1]) ? (((((var_15 ? var_8 : -32289))) ? 1770455713 : ((var_0 ? 5931 : var_17)))) : (((var_4 >= 7) & var_1))));

                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    arr_9 [i_2] [i_2] [i_2] = 194;
                    var_21 = ((32767 >> (126 - 98)));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_12 [i_0] [i_0] [i_0] = min((arr_3 [i_0]), (max(((max(1, -2))), 11155166528549180097)));
                    var_22 = (((arr_7 [17] [i_1] [i_0]) ? var_10 : (+-14004917793765871550)));
                }
                arr_13 [i_0] [i_1 + 2] [i_0] = var_9;
            }
        }
    }
    #pragma endscop
}
