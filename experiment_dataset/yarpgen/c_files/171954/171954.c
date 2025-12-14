/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] = -6611;
                    var_15 = ((((min(((((arr_4 [i_0] [i_1] [10] [0]) ? var_13 : (arr_1 [15])))), (min(var_7, var_6))))) ? (((((arr_4 [i_2] [i_2] [i_2] [i_2]) > (max(var_0, (arr_0 [i_0]))))))) : (((((~(arr_2 [i_0] [i_1] [15])))) ? (min(var_1, -1)) : (arr_1 [i_0])))));

                    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                    {
                        var_16 = arr_9 [i_0] [i_1] [3] [i_3];
                        var_17 = (((((max((arr_5 [i_1]), var_3)) > ((((!(arr_3 [i_0]))))))) ? ((-(min((arr_3 [i_3]), -3)))) : ((((max(var_10, (arr_6 [i_0] [i_0])))) ? (max((arr_2 [i_0] [11] [i_3]), (arr_5 [i_0]))) : (arr_8 [i_0] [i_0] [i_0])))));
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        var_18 = 0;
                        var_19 = (max(var_19, (((((max(var_14, (arr_9 [i_0] [i_1] [i_2] [i_2])))) ? (max((min(-3, (arr_11 [i_0] [1] [7] [i_4]))), ((((arr_0 [i_2]) ? var_9 : (arr_1 [i_0])))))) : (((((((arr_9 [i_0] [14] [4] [i_4]) ? (arr_2 [i_0] [i_0] [i_0]) : (arr_3 [i_1])))) ? (((3 == (arr_6 [i_1] [i_4])))) : (((arr_0 [i_0]) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (arr_12 [i_0] [i_1] [i_1] [i_2] [i_4])))))))))));
                    }
                    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                    {
                        var_20 = var_7;
                        var_21 *= (((var_5 ? (arr_5 [i_0]) : (-3 <= -1))));
                        var_22 = var_6;
                    }
                    var_23 = (min(var_23, (((~((max((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_10 [i_2] [i_2] [i_2] [i_2] [i_2])))))))));
                }
            }
        }
    }
    var_24 = 13;
    var_25 -= (max(((2 ? -2 : -3)), ((~(min(var_4, var_1))))));
    #pragma endscop
}
