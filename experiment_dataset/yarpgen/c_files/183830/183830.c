/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_10 ? var_2 : var_11));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_13 = 288225978105200640;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [17] [i_2] = ((var_5 >> (((arr_1 [i_2 + 2] [i_2]) + 87))));
                    var_14 = (max(var_14, ((((arr_0 [i_0]) >= (arr_0 [i_0]))))));
                    var_15 += (((arr_5 [i_0] [i_0] [i_1] [i_2 - 1]) ? ((var_10 & (arr_2 [i_0] [i_1] [i_1]))) : (arr_2 [i_2 + 1] [i_1] [i_2])));
                    var_16 = (1463848573 + 188);
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
    {
        arr_11 [21] = (((((-var_11 + (arr_6 [i_3] [i_3] [i_3])))) < ((~(arr_7 [i_3] [i_3] [i_3] [i_3])))));
        var_17 -= (max(((((arr_5 [19] [i_3] [7] [i_3]) ? (arr_0 [i_3]) : (arr_3 [i_3] [i_3] [i_3])))), (arr_5 [i_3] [3] [3] [i_3])));
        arr_12 [1] [i_3] = ((var_2 <= (((var_8 && (arr_0 [1]))))));
        var_18 = ((-(min((arr_6 [i_3] [16] [i_3]), (arr_3 [i_3] [i_3] [i_3])))));
        arr_13 [i_3] = (((arr_4 [i_3]) ? (arr_4 [0]) : var_5));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
    {
        var_19 = ((((((var_5 - var_0) / ((((arr_6 [14] [i_4] [i_4]) + (arr_6 [i_4] [2] [i_4]))))))) ? (((((arr_5 [i_4] [i_4] [i_4] [i_4]) - var_3)) / ((max(16, 835943366))))) : (arr_2 [i_4] [12] [12])));
        var_20 = (min(var_20, (max(-80, -11469))));
        var_21 = ((((min((arr_4 [i_4]), (arr_2 [i_4] [i_4] [i_4])))) <= (((arr_16 [i_4]) ? (arr_10 [i_4]) : (arr_6 [0] [12] [i_4])))));
        arr_18 [i_4] [i_4] = (max((((arr_5 [i_4] [i_4] [i_4] [i_4]) ? (arr_16 [i_4]) : (arr_5 [i_4] [i_4] [i_4] [i_4]))), (var_0 && var_4)));
    }
    var_22 = (min((((var_8 * ((788486477 ? var_3 : var_11))))), ((((max(var_7, var_5))) ? (var_5 / var_5) : (var_2 * var_7)))));

    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        arr_22 [i_5] [1] = ((((17690 & 54) / ((65 ? 504 : var_10)))));
        arr_23 [10] = ((!(arr_2 [i_5] [i_5] [i_5])));
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 2; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    {
                        arr_34 [i_6] [i_7] [1] [i_8] [12] = ((((max(80, var_3))) ? 65012 : 46416));
                        arr_35 [i_9] [i_8] [i_7] [i_6] [i_6] = (max(3269, ((((max(65504, -913728817))) ? -81 : 562949953421311))));
                        arr_36 [i_6] [i_8] [i_6] [i_7 - 2] = ((((max(var_5, (max((arr_0 [i_7]), (arr_15 [i_9])))))) ? -var_9 : (max(((min(var_3, var_10))), (max((arr_7 [22] [i_8] [i_8] [i_9]), (arr_1 [i_6] [i_6])))))));
                    }
                }
            }
        }
        arr_37 [i_6] = (min(((-27768 ? 3584 : 81)), ((((arr_30 [i_6] [i_6] [i_6]) || (arr_30 [i_6] [i_6] [i_6]))))));
    }
    var_23 = (((max(128, 50))) | ((((9223372036854775807 < 5746) != ((var_0 ? var_4 : var_0))))));
    #pragma endscop
}
