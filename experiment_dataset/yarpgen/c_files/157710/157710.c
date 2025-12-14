/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (var_10 <= var_10);
    var_12 |= var_2;
    var_13 = (max(var_13, var_7));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_14 = (max(var_14, (((((((474 && 30620) ? 1945403147 : 1))) && 0)))));
                    var_15 = (min(var_15, (((arr_4 [i_0] [5] [i_0 - 2]) / (max(var_7, (arr_9 [i_0] [i_1] [i_0 - 2])))))));
                }
                for (int i_3 = 2; i_3 < 14;i_3 += 1) /* same iter space */
                {
                    var_16 -= (arr_3 [i_1]);
                    arr_12 [i_3 - 2] [i_0] [i_0] = var_6;
                    var_17 = ((((((arr_6 [i_3 - 2]) ? (arr_6 [i_3 - 2]) : 65531))) ? ((((arr_5 [i_0 - 2] [i_3 - 2]) ? -2013764065 : 0))) : var_5));
                }
                for (int i_4 = 2; i_4 < 14;i_4 += 1) /* same iter space */
                {
                    var_18 -= (((min(var_2, (((arr_3 [i_1]) ? (arr_5 [i_0 - 1] [i_1]) : (arr_11 [i_0 - 2])))))) ? (-2043580463 > 21499) : (((var_0 - var_3) ? var_5 : 444441946)));
                    arr_16 [i_0] [i_0] [i_0] = ((((arr_4 [i_0 + 1] [i_0] [i_4 - 2]) ? (arr_4 [i_0 - 2] [i_1] [i_4 + 1]) : (arr_4 [i_0 + 1] [i_0 + 1] [i_4 + 1]))));
                }
                var_19 = var_10;
                var_20 -= (((min((arr_0 [i_0 + 1]), (arr_9 [i_0 + 1] [i_0 - 1] [i_0 + 1]))) < (((((arr_10 [i_1] [i_1] [i_1]) <= var_10)) ? var_1 : var_7))));
            }
        }
    }
    #pragma endscop
}
