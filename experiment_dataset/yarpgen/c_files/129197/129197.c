/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = (min(((min((arr_0 [i_0]), 100))), ((var_5 / (arr_0 [i_0])))));
        arr_5 [7] = ((((min((-32744 && var_1), (min(var_3, 0))))) <= var_7));
        arr_6 [i_0] [i_0] = -1;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = (((arr_2 [i_1] [i_1]) ? (~var_2) : (((arr_2 [i_1] [i_1]) ? (arr_2 [i_1] [6]) : 1))));
        arr_10 [1] = (((((var_4 - (arr_1 [i_1])) * var_8))));

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 8;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        var_18 += var_8;
                        var_19 = ((arr_8 [i_3 - 3]) ? ((1 - (arr_8 [i_3 + 2]))) : ((var_1 ? (arr_8 [i_3 - 2]) : (arr_0 [i_3 + 2]))));
                    }
                }
            }
            arr_21 [i_1] [i_2] = ((((((min(1, (arr_11 [i_1]))) == ((((!(arr_19 [i_2] [i_1] [i_2] [i_2] [i_2] [i_2])))))))) >> ((((~(arr_8 [i_1]))) + 186))));
        }
        var_20 = (!-235);
        var_21 = -1059064147;
    }
    #pragma endscop
}
