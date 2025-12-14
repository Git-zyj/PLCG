/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= (((var_3 == var_5) >= var_13));
    var_19 = var_14;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((var_9 != var_3) ? (!var_9) : var_5));
        arr_5 [i_0] = ((-719762853039703429 ^ (46 / -1233)));
        arr_6 [i_0] [i_0] = ((((((arr_1 [i_0]) >= -var_2))) * ((~(!1164790325289513488)))));
        arr_7 [i_0] [i_0] = (-127 - 1);
        var_20 = ((var_3 ? ((((var_1 >= (!var_12))))) : (((arr_2 [i_0]) / (arr_2 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_21 = var_2;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    arr_15 [i_1] [i_2] [i_3] [i_2] = (((arr_13 [i_1] [i_2] [i_2]) >> 0));
                    var_22 = ((var_9 ? (!var_16) : var_9));
                }
            }
        }
        var_23 = ((-(var_14 + 9)));

        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_24 = 247;
            arr_18 [i_1] [i_4] = (var_9 || var_17);
            var_25 = (var_4 * var_4);
        }
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_26 = (((arr_13 [i_1] [i_5] [0]) > (!1033268369)));
            var_27 = (((var_3 / 32) <= ((var_2 ? var_17 : -1164790325289513488))));
            arr_21 [i_1] [i_1] [22] = 9;
        }
    }
    #pragma endscop
}
