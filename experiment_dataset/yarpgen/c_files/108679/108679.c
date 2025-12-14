/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_11 *= (min((((arr_3 [i_1] [i_0]) + (arr_3 [i_1] [i_0]))), (((arr_3 [15] [i_1]) / (arr_3 [i_0] [i_1])))));
                arr_4 [i_0] [6] [i_1] |= (((((~(((-2147483647 - 1) + (arr_3 [i_0] [i_1])))))) ? (max(var_7, (-2147483647 - 1))) : (((!(((~(arr_3 [i_0] [i_1])))))))));
                var_12 = ((((((arr_1 [i_0] [i_1]) ? (arr_0 [i_1]) : (arr_0 [7])))) ? -276960271 : ((((arr_0 [i_0]) ? (arr_0 [i_1]) : (arr_0 [i_1]))))));
            }
        }
    }
    var_13 = var_3;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    var_14 = (min(var_14, var_1));

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_15 = (min(var_15, ((((arr_16 [i_2] [i_2]) != ((((arr_5 [i_2]) && (arr_9 [i_2] [i_3])))))))));
                        arr_17 [i_5] [i_4] [i_3] [i_2] = (min((((arr_15 [i_2] [i_3]) % (arr_8 [i_2] [i_4]))), (-2147483647 - 1)));
                    }
                    var_16 *= ((((max(2147483647, -17))) ? (arr_6 [i_3] [i_4]) : (((((arr_11 [11] [i_3] [i_4]) >= var_6))))));
                    var_17 = (min(((var_8 ? (arr_5 [i_2]) : var_1)), ((-(arr_5 [i_4])))));
                }
            }
        }
    }
    var_18 = var_6;
    var_19 = var_5;
    #pragma endscop
}
