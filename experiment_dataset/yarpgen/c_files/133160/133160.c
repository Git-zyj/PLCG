/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += var_4;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_20 |= ((-1 * (arr_5 [i_0 - 3] [12] [4] [1])));
                    var_21 = (((arr_5 [i_0] [i_0] [13] [7]) ? (((((!(arr_1 [i_2] [5])))))) : (min(((min(var_7, 1))), (1830275003 + 1830275003)))));
                }
            }
        }
    }
    var_22 = 4095;
    var_23 += var_1;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 10;i_5 += 1)
            {
                {
                    arr_13 [i_3] [2] [i_3] [4] = 1830275001;
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_24 = var_1;
                                var_25 += (((arr_10 [i_7]) ? (((arr_10 [i_7]) - var_0)) : var_4));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
