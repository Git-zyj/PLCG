/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((max(var_3, var_3)))) ? var_8 : var_4));

    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        var_18 = (max(var_18, ((min(30730, -55)))));
        arr_2 [i_0] [i_0] = (((((arr_1 [i_0 + 3]) ? (((arr_1 [i_0 - 1]) & var_8)) : (((((arr_0 [6]) != (arr_0 [2]))))))) != (arr_0 [i_0 - 4])));
        var_19 = (((((((((((arr_1 [i_0]) + 2147483647)) >> (((arr_1 [i_0]) + 46))))) | (((arr_1 [i_0 - 1]) & (arr_0 [i_0])))))) ? ((((-107 + 2147483647) >> (((-127 - 1) + 153))))) : (((arr_0 [i_0 - 4]) ? (arr_0 [i_0 - 4]) : (arr_0 [i_0 - 4])))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_9 [i_1] [i_1] = ((((min(var_11, (arr_1 [i_2 + 1])))) ? (((arr_1 [i_2 - 2]) / (arr_1 [i_2 - 3]))) : (((arr_1 [i_2 - 1]) ? var_0 : (arr_1 [i_2 - 1])))));
                        var_20 = (max(var_20, ((((arr_7 [i_3]) ? (~var_9) : (((((var_5 * (arr_6 [i_1] [i_2] [6])))) ? ((~(arr_4 [4] [i_1] [4]))) : (((arr_4 [i_1] [i_2] [2]) + 19039)))))))));
                        var_21 &= 0;
                        var_22 = (arr_3 [i_1]);
                    }
                }
            }
        }
        arr_10 [i_0] = (+-127);
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_23 = (max((((((((arr_12 [i_4]) / (arr_11 [i_4])))) ? (arr_12 [i_4]) : (((arr_11 [i_4]) ? (arr_12 [i_4]) : (arr_12 [i_4])))))), ((1458078241 >> (120 - 106)))));
        arr_13 [i_4] [i_4] = min((max(var_4, (arr_12 [i_4]))), ((((arr_12 [i_4]) && (var_13 - var_15)))));
        arr_14 [i_4] [4] = (arr_11 [i_4]);
    }
    #pragma endscop
}
