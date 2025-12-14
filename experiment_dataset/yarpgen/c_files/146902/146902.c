/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        var_16 += (((max((((arr_0 [i_0]) ? var_7 : var_12)), (arr_1 [7]))) + (((((var_10 | -13336) >= var_3))))));
        arr_2 [i_0] [i_0] = ((~((61774 ? 1141 : 0))));
        arr_3 [i_0] [i_0] = (var_2 <= 64381);
        arr_4 [i_0] [i_0] = var_7;
    }
    for (int i_1 = 4; i_1 < 7;i_1 += 1)
    {
        var_17 = (arr_7 [i_1]);
        var_18 += ((max(var_5, -35)));
        var_19 = (arr_8 [i_1]);
        var_20 = (-74 >= var_10);
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        var_21 = (arr_9 [i_2 - 2]);
        arr_12 [i_2] = var_10;
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 19;i_4 += 1)
            {
                {
                    arr_19 [i_2] [i_3] [i_2] [i_3 + 3] = 2543888897673694281;
                    arr_20 [i_2] [i_3 - 2] [i_2] = ((34024 ? 4096 : 1124));
                }
            }
        }
        arr_21 [i_2] = ((var_12 ? (arr_13 [i_2 - 1]) : (arr_13 [i_2 - 1])));
    }
    var_22 = ((var_8 == (21270 / -1657272143428969430)));
    var_23 = (max((65535 * 7127105229251713836), (((((1141 ? 880736886 : 1783743118)) >= 9682)))));
    var_24 = var_10;
    #pragma endscop
}
