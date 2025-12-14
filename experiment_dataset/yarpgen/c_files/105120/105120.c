/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_17;

    for (int i_0 = 3; i_0 < 16;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        var_21 = (-((8 ? -2570819176867775999 : 3840644728)));
                        var_22 = (min(-1632178386, 14515040587189253964));
                        var_23 = (min(var_23, (((((max(27, 0))) + ((-((1028111609 ? 9007199252643840 : 2413690833)))))))));
                    }
                    var_24 *= ((((11 ? 12967411631259213931 : 15179982701074788894)) == (((var_17 ? -30565 : (arr_8 [i_0 + 1] [i_2] [i_2] [i_0 + 1]))))));
                    arr_9 [i_0] [8] [7] [i_2] = -82;
                }
            }
        }

        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_25 = var_18;
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    {
                        arr_16 [i_0] [i_4] [i_0] [i_6] [i_6] = (~var_17);

                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            arr_20 [i_0] [i_6] [i_5] [i_4] [i_6] [i_0] |= ((-(max(1251632157, 19))));
                            var_26 = (max(var_26, var_19));
                            arr_21 [i_0] = ((+(((((arr_4 [i_5] [i_5]) > (arr_10 [10]))) ? ((((arr_18 [i_0] [i_4] [i_4] [i_6] [i_7]) & (arr_6 [i_4] [i_4] [5] [i_0])))) : -var_5))));
                        }
                        var_27 ^= (min(1251632157, 6888043127990161421));
                        arr_22 [2] [i_0] [i_5] [i_0] [i_0 + 1] = (arr_1 [i_4]);
                    }
                }
            }
            var_28 = (max((var_12 / var_7), (arr_10 [i_0 - 2])));
        }
        arr_23 [i_0] = -30908;
    }
    for (int i_8 = 3; i_8 < 16;i_8 += 1) /* same iter space */
    {
        arr_26 [i_8] = ((~((-82 & ((1886731737 ? var_9 : 2147483647))))));
        arr_27 [i_8] = (((((var_11 + 2147483647) << (((((arr_6 [i_8 - 3] [i_8] [i_8] [2]) + (arr_2 [2]))) - 5900)))) / -904994271));
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 1; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 4; i_12 < 12;i_12 += 1)
                {
                    {
                        var_29 *= (((-1 ? (arr_18 [16] [9] [i_11] [16] [i_12]) : ((-8 ? var_15 : (arr_10 [i_12]))))));
                        arr_36 [i_12] [i_12] |= -82;
                        var_30 = (max(var_30, (((-(((((5940570029831826099 ? 82 : var_4))) ? (max((arr_17 [i_9] [i_12] [i_9] [i_9] [i_9]), var_0)) : 44)))))));
                        arr_37 [i_12] [i_10] [6] [i_12] [i_12] [1] &= (min(-2097151, (((-1099243192320 ? (max(var_2, (arr_30 [i_11]))) : var_12)))));
                    }
                }
            }
        }

        for (int i_13 = 1; i_13 < 14;i_13 += 1)
        {
            arr_40 [i_9] [i_13 - 1] = 6776;
            var_31 = 240;
        }
        arr_41 [i_9] = var_17;
    }
    var_32 = var_2;
    #pragma endscop
}
