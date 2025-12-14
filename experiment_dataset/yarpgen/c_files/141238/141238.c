/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((!(((4282667137547007553 ? ((4282667137547007551 ? 14164076936162544063 : 1)) : (((1 ? 32767 : (arr_2 [1])))))))));
                var_20 = (max(((14164076936162544062 ? 8535740210296217792 : 19517)), (((((!(arr_4 [i_1] [17] [i_1]))) ? (arr_4 [i_1 - 2] [i_1 - 2] [i_1 - 2]) : (max((arr_2 [i_0]), (arr_4 [i_1] [i_0] [i_0]))))))));
                arr_7 [10] &= (max((((!(arr_0 [i_1 + 2])))), (min((arr_0 [i_1 + 2]), (arr_0 [i_1 + 2])))));
                var_21 += (((arr_2 [i_0 - 2]) ? (min((arr_5 [0]), (((arr_4 [i_1] [i_0 + 1] [i_0]) ? (arr_2 [i_1]) : (arr_3 [0]))))) : (((-(arr_5 [4]))))));
            }
        }
    }
    var_22 |= var_2;
    var_23 = (min(var_18, (!var_5)));
    var_24 = ((var_15 ? ((18446744073709551615 ? var_13 : 4282667137547007549)) : ((max(((var_1 ? var_2 : var_9)), var_17)))));
    #pragma endscop
}
