/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_1] [i_2] = ((((-(!71))) & var_0));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_13 [i_3] [i_2] [i_2] [i_0] = (max((((!(((8162 ? 1 : 1)))))), (max((arr_3 [i_1 - 3] [i_1 - 3]), (!var_8)))));
                        arr_14 [i_1] [i_2 + 1] [i_2] = -1;
                    }
                    arr_15 [i_0] [i_1 - 3] [i_2] = (min(var_4, ((244 ? (arr_6 [i_1 - 2]) : var_12))));
                    var_19 = (!(32767 * -10));
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_20 = -32755;
        var_21 = (max(var_2, (arr_0 [i_4])));
    }
    #pragma endscop
}
