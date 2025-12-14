/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    var_13 = var_2;

    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        arr_2 [12] [i_0] = -66;
        arr_3 [i_0] = var_5;
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_14 = ((((!1) > ((min(175, 149))))));
            var_15 = (max((max(var_5, (arr_5 [i_1 + 1]))), 21997));
        }
        var_16 += (min(((1 ? var_3 : var_9)), ((min(((58457 ? 1 : 2040)), 2686088233)))));
        arr_8 [i_1] [i_1 - 1] = min(((min(63506, ((min(1, 1)))))), 6347516852248171540);
    }
    var_17 = (((-var_7 ? var_4 : var_8)));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    arr_19 [i_3] [i_4] [i_3] [i_3] = ((!(((-1 / (((arr_13 [i_3] [i_4]) ? var_6 : var_1)))))));
                    var_18 = ((6940 <= (min(var_4, 2077887820))));
                    var_19 = (max(var_19, ((min(((min((((arr_12 [4]) ? var_10 : 1)), (!var_6)))), (((228 != 15433) ? var_5 : 10)))))));
                }
            }
        }
    }
    #pragma endscop
}
