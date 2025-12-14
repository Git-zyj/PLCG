/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~(((!var_9) << (((max(31, var_5)) - 2029080221))))));
    var_14 = (max(var_14, 8464734318908943168));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 = (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : 152));
        var_16 = (min(var_16, (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_6 [i_1] = (((~0) ? (((~(~30)))) : var_8));
        arr_7 [i_1] = (((var_2 ? (((arr_5 [i_1] [i_1]) << (var_11 - 13089))) : (((min(63371, -2)))))));
        var_17 = (min((min(((((arr_2 [i_1]) ? var_5 : 12815))), (arr_1 [i_1] [i_1]))), 12548592119624238791));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 18;i_3 += 1)
            {
                {
                    var_18 ^= (209985052 / 9982009754800608447);

                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        arr_15 [i_1] [i_1] = arr_12 [i_1] [i_2] [i_3] [i_2] [i_4];
                        var_19 &= ((((((var_12 || (arr_11 [i_1] [i_2] [i_3 - 4]))))) % (((arr_3 [i_2]) ? var_1 : ((~(arr_9 [13] [i_2])))))));
                        var_20 = (max((52721 > 1), var_6));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        var_21 = (max(var_21, 25924));
                        var_22 = (arr_16 [i_1] [i_2] [i_2] [i_3]);

                        for (int i_6 = 3; i_6 < 18;i_6 += 1)
                        {
                            var_23 = (((arr_12 [i_6] [i_5] [i_3 - 4] [i_2] [i_1]) + 15));
                            var_24 = var_1;
                            var_25 = (~-3332580588095974879);
                        }
                        for (int i_7 = 2; i_7 < 17;i_7 += 1)
                        {
                            var_26 = (max(var_26, (arr_20 [i_7] [i_5] [i_5] [i_3 + 1] [i_2] [i_1] [i_1])));
                            var_27 = var_12;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
