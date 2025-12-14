/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    var_12 = ((-(((((var_6 ? 41014 : var_9)) > (0 + 1))))));

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_13 = -24922;
            arr_5 [i_0] [i_0] [i_1] = var_10;
            var_14 = (((((0 ? (max((arr_3 [i_0 + 1] [i_0] [7]), 7333359740947253393)) : (arr_1 [i_0 + 1])))) ? 747855475169815837 : (((((max(158, (arr_1 [i_0 + 1])))) ? 728380574 : 6)))));
        }
        var_15 = ((-3304 % (-32751 & 793680880)));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_16 = (arr_6 [i_0 - 1]);
            arr_8 [6] [6] [6] = 25;
        }
        var_17 = ((((((((1 | (arr_7 [i_0] [i_0])))) ? ((var_8 ? (arr_3 [24] [i_0] [24]) : var_3)) : ((((arr_6 [i_0 + 1]) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_3 [i_0] [i_0] [i_0]))))))) || (((((max(1, var_2))) ? (arr_2 [i_0 - 2] [i_0 - 2]) : (arr_2 [i_0 - 2] [i_0 - 2]))))));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_18 = (min((max((max(728380574, 12439)), 0)), ((((~(arr_11 [i_3]))) / (arr_7 [9] [i_3])))));
        arr_12 [i_3] = ((((((((arr_11 [i_3]) < var_9)) ? -var_0 : ((min(var_10, (arr_2 [i_3] [17]))))))) ? ((((((var_7 ? var_4 : var_10)) != ((620037202 ? var_7 : (arr_1 [i_3]))))))) : (var_0 + var_4)));
        var_19 = ((~(arr_0 [10])));
        arr_13 [i_3] [i_3] = (arr_4 [i_3] [10] [10]);
        var_20 = (((arr_10 [i_3] [i_3]) ? ((~((min((arr_2 [14] [14]), var_5))))) : (arr_10 [10] [i_3])));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            {
                arr_19 [i_4] = (arr_15 [i_4] [i_5 - 1]);
                var_21 = (arr_1 [i_5]);
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 15;i_7 += 1)
                    {
                        {
                            arr_25 [1] [8] [i_4] [i_7] [7] = (min((min(0, ((var_3 ? (arr_17 [i_7] [i_5]) : var_10)))), (~var_4)));
                            arr_26 [i_4] [10] [i_6] [i_6] |= var_6;
                        }
                    }
                }
            }
        }
    }
    var_22 = -1476492333004283972;
    #pragma endscop
}
