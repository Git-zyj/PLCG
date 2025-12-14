/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 = (min(var_11, ((((341355601 != var_4) <= ((1767394183 ? 65535 : 7981414971508281723)))))));
        var_12 = (max(var_12, (((!((max((((arr_1 [i_0]) ? 759718193 : (arr_1 [i_0]))), (arr_3 [i_0] [i_0])))))))));
        var_13 = (min((var_3 != var_3), (min(var_7, var_9))));
        var_14 = ((var_9 ? var_7 : (max(var_3, (arr_1 [i_0])))));
        arr_4 [i_0] [i_0] = (max(((min(var_2, (arr_2 [i_0] [i_0])))), (max(40537056, 2048))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_8 [i_1] = var_10;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        arr_19 [i_4] [i_3] [i_1] = ((~((0 ? 341355601 : 1998844535))));
                        var_15 = (arr_7 [i_4]);

                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            var_16 ^= ((max((~var_6), var_1)));
                            var_17 = var_7;
                            arr_23 [i_1] [i_2] [6] [i_4] [6] = (((var_10 <= var_4) % (max((!25874), (~var_4)))));
                        }
                        for (int i_6 = 2; i_6 < 11;i_6 += 1)
                        {
                            var_18 = ((((min(var_8, var_8))) ? (((arr_14 [9] [i_3 + 1] [i_3 - 1]) ? (arr_5 [i_1] [i_3 + 1]) : (((var_5 ? var_10 : 25874))))) : (((((min(var_2, var_10))) ? (((arr_3 [i_1] [i_1]) + 341355601)) : var_9)))));
                            var_19 -= var_0;
                            var_20 = var_0;
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            var_21 = (min(var_21, ((((max(169, (arr_3 [i_3 - 1] [i_2]))))))));
                            var_22 ^= (((((~((max((arr_22 [i_1] [i_2] [5] [i_4] [i_7]), var_0)))))) ? (755316739 >= 12) : (((!var_3) ? var_6 : (arr_28 [i_1] [i_1] [7] [0])))));
                            var_23 = (min(var_23, ((min((arr_13 [1] [1] [i_3 + 1]), (((var_0 && (arr_13 [i_3 + 1] [i_3] [i_3 - 1])))))))));
                            var_24 = (arr_26 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_2] [i_2] [6]);
                        }
                    }
                }
            }
        }
    }
    var_25 = var_7;
    var_26 = -var_5;
    #pragma endscop
}
