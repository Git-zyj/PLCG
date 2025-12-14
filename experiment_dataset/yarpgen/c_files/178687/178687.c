/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_11 = (arr_4 [i_0] [i_0] [i_0]);
                        var_12 = ((2147483647 ? (((-(arr_5 [i_2])))) : (-53 - 12013819032900197848)));
                        var_13 = (((max(((var_3 | (arr_3 [i_2]))), ((-(arr_4 [i_0] [i_0] [i_3]))))) >= (max((arr_4 [i_0] [i_0] [i_2 - 2]), (((arr_6 [i_0] [i_1] [i_2 + 3] [i_3]) % (arr_4 [i_0] [i_0] [19])))))));
                        arr_12 [i_0] = ((((!((max(-6817686084603665375, 1))))) ? ((((!(arr_5 [0]))))) : ((((arr_4 [i_0] [i_0] [23]) >= (((arr_0 [24]) / (arr_4 [i_1] [i_0] [i_3]))))))));
                    }
                }
            }
        }
        var_14 = (max(var_14, (((+((((var_7 < var_5) || ((min((arr_9 [i_0] [i_0] [11]), (arr_11 [i_0] [i_0] [i_0] [9]))))))))))));
        arr_13 [i_0] = ((((!((max((arr_8 [2] [i_0] [i_0]), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) || ((((max(var_4, (arr_2 [23] [i_0]))) & (((-(arr_1 [i_0])))))))));
    }

    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_15 &= var_1;
        arr_16 [i_4] = (max(((((arr_3 [i_4]) & (((arr_3 [i_4]) ? (arr_3 [i_4]) : (arr_2 [i_4] [i_4])))))), (((((var_8 | (arr_4 [20] [6] [20])))) ? (((arr_10 [i_4] [i_4] [i_4] [i_4] [i_4] [6]) * (arr_7 [i_4] [i_4] [i_4]))) : (arr_3 [i_4])))));
    }
    var_16 &= var_8;
    #pragma endscop
}
