/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    var_14 = ((var_12 >= ((((min(1094805767, 1)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (arr_4 [4] [i_1])));
                var_16 = (max(var_16, -1094805754));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    arr_7 [9] [i_1] [i_2] = (((arr_4 [i_1] [i_1]) ? (((arr_4 [i_1] [i_1]) / (arr_4 [i_1] [i_1]))) : ((min(4, 1)))));
                    arr_8 [i_2] [1] [i_1] [i_1] = (((((1 ? (arr_6 [i_1 - 1] [i_1 - 3]) : (arr_4 [i_1] [i_1])))) ? (4 / var_9) : ((1 / ((min((arr_0 [i_0]), 419)))))));
                    var_17 *= ((!(((-(((!(arr_6 [i_1] [i_2])))))))));
                    var_18 &= ((((-(~-124))) >= (~-21)));
                    var_19 ^= 63;
                }
            }
        }
    }
    #pragma endscop
}
