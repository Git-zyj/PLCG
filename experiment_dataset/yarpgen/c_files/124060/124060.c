/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += (17179869183 <= 65535);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_7 [1] [i_0] [i_1] = (((min((arr_0 [i_0]), (arr_3 [i_0] [i_1])))) ? (!var_4) : ((((min((arr_3 [i_0] [i_0]), 8299339933979640407))) ? var_2 : (arr_2 [i_0 + 1]))));
                arr_8 [7] [10] [i_1] = ((((!(arr_0 [i_0 - 1]))) ? var_9 : (max(var_4, (((arr_3 [i_0 + 1] [i_0 + 1]) ? (arr_4 [i_0 - 1] [i_0 - 1] [i_0]) : var_0))))));
                var_15 = (((var_7 & (arr_3 [i_0 - 1] [i_1 - 1]))) >> (((((var_6 > var_12) ? (max((arr_1 [i_0 + 1] [i_1]), var_5)) : (arr_6 [i_1 - 1] [i_1 + 1]))) + 2422182506438505964)));
                var_16 &= (arr_2 [i_0 + 1]);
                var_17 = (max(var_17, (((31369 ? (((((-8299339933979640407 ? 8299339933979640407 : -8299339933979640407))) ? -14325 : 18446744073709551615)) : 8299339933979640407)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                arr_15 [i_3] [i_2] = (((((-(var_3 >= 14332)))) ? (min(-2033565046, var_3)) : var_13));
                arr_16 [i_3] [i_3] [i_2] = -1207294587;
                arr_17 [i_3] [5] [i_2] = (((((arr_10 [7] [13]) ? (arr_10 [i_2] [i_3]) : var_4)) * ((max((arr_10 [i_3] [i_2]), var_7)))));
            }
        }
    }
    #pragma endscop
}
