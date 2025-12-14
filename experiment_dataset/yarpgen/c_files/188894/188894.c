/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~((-((131 ? var_5 : var_15))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 7;i_2 += 1)
            {
                {
                    var_17 -= (((((-var_3 < (arr_3 [i_0] [i_1] [i_2])))) | (((3401031189 << var_1) ? (arr_6 [i_0]) : (((var_13 && (arr_6 [i_0]))))))));
                    var_18 = 263233546;
                    arr_7 [i_0] [1] [i_1] [0] = (arr_3 [i_0] [i_0] [i_0]);
                    arr_8 [i_2 - 1] = (~-76);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {
                {
                    var_19 = (max(var_7, ((var_2 ? 23 : var_4))));
                    var_20 = (arr_10 [i_0]);
                    var_21 = (min(4, 7368003409707437114));
                }
            }
        }
        var_22 = min(((((((arr_10 [i_0]) - (arr_14 [i_0] [i_0])))) ? var_8 : ((min((arr_12 [i_0] [i_0] [i_0]), 110744566))))), (((((var_6 ? var_7 : -1898480621))) ? var_4 : (~var_8))));
    }
    var_23 -= var_11;
    var_24 -= (max(var_1, (((var_0 ? 25343482 : var_15)))));
    #pragma endscop
}
