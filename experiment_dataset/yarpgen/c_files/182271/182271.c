/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 956353778;

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_11 = min((((var_0 ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0])))), (arr_1 [i_0] [i_0]));
        var_12 = var_5;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_13 = (((arr_6 [i_0] [i_2] [i_2 + 1]) / (((max(var_3, (arr_7 [i_0] [i_0]))) + var_0))));
                    var_14 = (arr_0 [i_2 + 1]);
                    var_15 = (min(3338613520, (max(956353789, 956353778))));
                }
            }
        }
        arr_9 [i_0] = (arr_8 [i_0] [i_0] [i_0]);
        var_16 = (arr_1 [i_0] [i_0]);
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
    {
        var_17 = (min(((((arr_2 [i_3] [i_3] [i_3]) ? (arr_11 [i_3] [i_3]) : (arr_11 [i_3] [i_3])))), var_2));
        var_18 *= ((-((-(!var_4)))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    var_19 = (min(((min(var_4, var_3))), ((max((min((arr_1 [i_5] [i_3]), (arr_5 [i_3] [i_3] [i_5]))), 57)))));
                    var_20 = (((arr_1 [i_3] [i_3]) & ((((arr_16 [i_3] [i_5]) < var_7)))));
                }
            }
        }
    }
    #pragma endscop
}
