/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 = ((115 ? (268435455 < var_4) : (((((31344 ? 48 : (arr_0 [i_0] [i_0])))) ? ((var_0 ? 9216 : var_2)) : 30))));
        arr_2 [21] = (max((arr_0 [i_0] [i_0]), (((var_9 || var_11) ? ((var_9 ? -1 : var_9)) : var_11))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_18 = ((((!(arr_5 [i_1]))) ? ((24444 >> (var_1 - 6801))) : (max(var_7, 0))));

        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            var_19 = var_9;
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_20 = (max((((~13) ? ((var_0 ? (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1]) : var_1)) : var_13)), ((var_13 ? var_6 : 255))));
                            var_21 ^= var_2;
                            arr_18 [i_1] [i_2] [i_2] = 139;
                        }
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            var_22 = ((var_13 ? 524272 : 24914));
            arr_23 [i_1] = ((((((43 >> (var_13 - 37075))))) ? (((arr_13 [i_1] [i_6] [i_6]) ? ((110 ? var_0 : var_5)) : (max(-1, (arr_15 [i_1] [i_1] [i_1] [i_6] [i_6]))))) : ((var_10 ? var_11 : (((arr_21 [i_1] [i_1] [i_1]) - var_1))))));
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 17;i_9 += 1)
                {
                    {
                        arr_31 [i_1] [i_7] [4] [i_9] = (max((((((var_15 ? var_8 : var_13))) ? 32736 : (max(var_12, (arr_15 [i_7] [i_1] [i_1] [i_7] [7]))))), (((((32761 ? 32736 : 123875844))) ? ((5856 ? -28846 : 230492701)) : (arr_11 [i_1] [i_8] [i_9])))));
                        arr_32 [i_1] [i_7] [i_8] [i_7] = (954215837 ? ((var_12 ? (((var_2 ? var_3 : 178))) : ((4026 ? var_5 : 3699637469)))) : (((max(43, var_15)))));
                    }
                }
            }
        }
        var_23 += max((max(4294443023, ((max(32768, var_7))))), var_3);
    }
    for (int i_10 = 0; i_10 < 10;i_10 += 1)
    {
        var_24 = ((-24802 ? var_0 : ((max(var_8, (max(43, 46849)))))));

        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            var_25 ^= ((213 - ((((max(1, var_1))) ? 31 : var_0))));
            var_26 += (((((~-28276) <= var_1)) || (arr_15 [i_11] [i_11] [i_11] [10] [i_11])));
        }
    }
    var_27 = (max((max((((32767 ? var_5 : 46593))), 2083822183)), var_6));
    var_28 = max(105, (max(((2488451334 ? var_6 : var_1)), 171)));
    #pragma endscop
}
