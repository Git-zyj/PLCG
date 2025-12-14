/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((!((min(0, (min(1, 1873001259)))))));
                arr_5 [i_0] [i_0] = (((18446744073709551588 != 1742907183) ? (arr_2 [i_0] [1]) : ((var_9 ? (arr_2 [i_0] [i_1]) : (arr_2 [i_1] [i_0])))));
                arr_6 [1] = (((((((var_0 ? (arr_3 [i_0] [i_0] [i_0]) : var_7))) ? var_3 : (arr_1 [18] [i_0]))) ^ (((var_4 ? (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_3 [i_0] [i_0] [i_0]))) : ((max(var_6, var_12))))))));
            }
        }
    }
    var_13 = (max(var_11, (min((min(0, 469197871)), ((min(0, 53)))))));
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 10;i_4 += 1)
            {
                {
                    var_14 = (max(((-((min(13320, (arr_8 [i_4])))))), ((((min((arr_10 [i_2] [3] [i_2]), var_4)) != ((((arr_7 [i_2] [i_4]) * var_12))))))));
                    var_15 = ((-(((var_7 != ((((arr_3 [i_4] [i_2] [i_2]) ? (arr_8 [i_4]) : (arr_2 [i_2] [1])))))))));
                    var_16 = (min(var_16, (arr_7 [8] [i_2 + 1])));
                }
            }
        }
    }
    #pragma endscop
}
