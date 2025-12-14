/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(39, var_8));
    var_19 = var_5;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = -1661014229;
        arr_4 [i_0] = -1661014230;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_20 -= -39;
                    arr_11 [i_0] [i_1] [i_2] = ((arr_2 [i_0] [i_2]) || ((min(1661014215, -1661014219))));
                }
            }
        }
        arr_12 [i_0] [i_0] = ((-((7 | ((4380056371321004961 ? 2554523901 : 15724244958770566091))))));
        var_21 += ((min((~-1661014213), ((0 ? -39 : -30448)))) >= ((1 ? 159 : ((min(var_3, var_15))))));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        arr_17 [1] = (~1442529285821040054);
        arr_18 [18] [i_3] = ((~((max(1, 1)))));
    }
    #pragma endscop
}
