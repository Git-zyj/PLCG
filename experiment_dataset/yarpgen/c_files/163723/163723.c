/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_1, (((((989406129 ? 1700911286 : 133))) ? var_4 : 255))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 &= ((((!(((var_6 ? var_14 : (arr_0 [0])))))) ? ((((max(14446, -38))) + ((1741762244 ? -989406129 : 137)))) : ((((!var_4) || ((!(arr_7 [4] [i_0] [i_0] [2]))))))));

                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        var_18 = min(169359901656168700, 2);
                        arr_10 [i_0] [i_0] [i_2] [9] = ((10407 || (!0)));
                        var_19 = arr_3 [i_0] [i_1];
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_20 = ((-1 ? (((arr_3 [12] [i_1]) ? var_14 : (arr_0 [i_0]))) : (arr_4 [i_0 - 1] [i_2 - 1] [i_4])));
                        var_21 = (max(var_21, -989406129));

                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_22 = (max(var_22, 6918425825416216265));
                            arr_17 [i_2] [i_0] [i_0] [i_4] [i_5] [i_5] [4] = (((25 ? var_14 : 989406113)));
                            var_23 = (~(arr_0 [0]));
                            var_24 = (arr_11 [i_0 - 1] [i_1] [i_0 - 1] [5] [i_5]);
                            arr_18 [i_0] [i_2] [i_0] = var_9;
                        }
                    }
                    for (int i_6 = 1; i_6 < 14;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            arr_24 [12] [i_0] [9] = ((var_9 && var_0) << (-var_9 + 59243));
                            arr_25 [0] [10] [10] [6] [i_2] [i_6] [10] &= var_13;
                            arr_26 [i_0] [i_0] [i_2] [i_6] [i_7] = var_14;
                            arr_27 [i_0] [i_0] [i_7] [i_6] [i_7] = ((+(((!137) ? ((113 ? 4031430770 : var_11)) : 0))));
                        }
                        var_25 = (max(var_25, ((((arr_21 [i_6 - 1] [i_6] [i_0 + 1] [i_6] [i_2 + 3]) ? ((var_0 ? (arr_4 [i_0] [i_1] [i_6]) : (((var_7 ? var_8 : var_1))))) : (((max(var_1, var_3)))))))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 4; i_8 < 10;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            {
                var_26 = var_7;
                var_27 ^= (((arr_6 [i_8] [i_9] [i_8 - 3]) < var_4));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 10;i_11 += 1)
                    {
                        {
                            var_28 = (0 * 174600093);
                            var_29 = (arr_0 [i_9]);
                            arr_37 [i_9] [i_9] [i_11] [i_10] = var_15;
                            var_30 = 11528318248293335350;
                        }
                    }
                }
                var_31 = (174600091 != 65463);
                var_32 += max(((-474704900 + (21890 < 68862438))), (max(var_2, (arr_16 [i_8] [i_8] [i_8 - 3] [i_8] [i_8] [i_8]))));
            }
        }
    }
    #pragma endscop
}
