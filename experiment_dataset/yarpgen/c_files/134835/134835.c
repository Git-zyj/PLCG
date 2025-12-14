/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_6 || ((min(((5503928889652343844 ? -1179623587 : 1)), 15406112660163968091)))));
    var_15 = -1179623587;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 = (((((~(arr_1 [i_0] [i_0])))) ? var_0 : (arr_2 [i_0])));
        arr_3 [i_0] [i_0] = ((~((var_12 ? (arr_0 [i_0] [i_0]) : (arr_2 [i_0])))));
        var_17 = ((((5503928889652343844 << (((arr_2 [i_0]) + 2064886386)))) != -1179623587));
        var_18 = (~-1);
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_1] [i_1] [i_1] = ((((1883458012 ? (arr_1 [i_0] [i_0]) : 15406112660163968091))) ? var_0 : (arr_7 [i_1]));
                        arr_14 [i_1] [i_2] [i_1] = (arr_4 [i_1] [i_1]);
                    }
                }
            }
        }
    }
    var_19 = ((var_12 - (((5503928889652343862 << 43) ? var_9 : var_0))));
    #pragma endscop
}
