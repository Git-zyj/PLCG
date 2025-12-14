/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-(var_6 / var_14)));
    var_17 = (max(var_17, ((((min(var_2, var_5))) ? var_4 : ((-(31 == 1037936437)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = arr_1 [9] [i_1];
                arr_5 [i_0] [i_0] [i_0] = (((((var_8 ? 794925241 : -1044453795)))) - 4497);
                var_19 = var_12;
                var_20 = (min(var_20, 1044453795));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        var_21 &= (arr_6 [0] [0]);
        arr_8 [7] [i_2] = 65535;
        arr_9 [i_2] = (var_8 + 480);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_22 = (arr_12 [i_4]);

            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                arr_17 [i_3] [i_4] [i_5] |= var_14;
                var_23 = (min(var_23, -1044453819));
            }
            var_24 = 794925234;
            arr_18 [i_3] = (-1 ? -794925218 : 1658433287);
            arr_19 [i_4] [i_3] [i_3] = ((arr_10 [i_3] [i_3]) ? var_7 : var_11);
        }
        for (int i_6 = 1; i_6 < 15;i_6 += 1)
        {
            arr_23 [i_6] = -16;
            var_25 = (15 * (arr_16 [i_6 + 2] [i_6 - 1] [i_6 + 4] [i_6 + 4]));
            arr_24 [i_3] [i_3] [i_6] = ((!(65060 || var_3)));
        }
        for (int i_7 = 3; i_7 < 17;i_7 += 1)
        {
            arr_27 [i_3] = (var_7 ? (-1044453812 - 65535) : var_13);
            var_26 = (((arr_15 [i_3] [i_3] [i_3] [i_3]) != 863244946));
        }
        var_27 = (min(var_27, (((var_8 ? 1044453814 : (arr_16 [i_3] [i_3] [i_3] [i_3]))))));
    }
    #pragma endscop
}
