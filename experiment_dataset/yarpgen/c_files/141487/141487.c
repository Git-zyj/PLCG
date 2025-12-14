/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_16 = ((!((((arr_0 [i_0]) ? -87 : var_4)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_0] = (max((min((~104), (var_4 - 20416))), (max(((4294967287 ? var_0 : 9)), (arr_6 [i_0] [i_1] [i_2] [i_1])))));
                    var_17 = (min(var_17, ((max(var_13, (arr_4 [i_0] [16] [i_2]))))));
                    var_18 += ((((min(-2188, ((16081 ? 127 : -31271))))) ? (((min(255, 1652674279)) / (arr_6 [i_0 + 1] [i_0 + 2] [i_0 + 4] [i_0 + 2]))) : (((min(31288, (-127 - 1)))))));
                }
            }
        }
        arr_8 [i_0] = (((arr_2 [i_0 + 3] [i_0]) ? -var_5 : ((-27843 ? (arr_2 [i_0] [i_0]) : 9223372036854775807))));
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            {
                arr_15 [i_3] [i_3] [i_4] = (((((948812478 ? (max(127, var_13)) : ((var_15 ? 14 : var_0))))) ? (((-65 / 32767) - var_4)) : (((((max(var_15, var_1))) * (((arr_10 [i_3]) ? 31250 : var_1)))))));
                arr_16 [i_3 + 2] [i_3 + 3] = 3346154817;
                var_19 = 1209809796;
                arr_17 [i_4] = 31270;
            }
        }
    }
    #pragma endscop
}
