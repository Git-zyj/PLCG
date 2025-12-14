/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_14 - ((((var_13 ? var_10 : var_7))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 18;i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_0] [i_0] [i_0 + 3] [i_0] = ((var_1 ? (var_4 + -2539602321868168044) : (arr_4 [i_0] [i_3 - 1])));
                        arr_12 [i_0] [i_0] [i_1 - 1] [i_0] [i_3 + 1] [i_3] = 8367889351338682965;
                        arr_13 [i_0] [2] [i_2 - 2] [i_2] [i_1 - 1] [i_0] = ((((((arr_5 [i_3] [i_2 - 2] [i_1 - 1] [i_0 + 3]) || 10078854722370868654)))) * (((arr_2 [i_0 + 2]) ? var_0 : (arr_2 [i_1 - 1]))));
                    }
                    for (int i_4 = 1; i_4 < 18;i_4 += 1) /* same iter space */
                    {
                        var_19 = 10078854722370868651;
                        var_20 *= (arr_9 [i_4 + 2] [i_1 - 1] [i_1 - 1] [i_0 - 1] [6]);
                    }
                    var_21 -= ((((!(arr_9 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])))) * (((arr_9 [15] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1]) * var_9)));
                    var_22 = (min(var_22, ((((((((-(arr_10 [4] [i_1 - 1] [11])))) > ((var_13 ? 8367889351338682965 : var_7)))) && var_10)))));
                }
            }
        }
    }
    #pragma endscop
}
