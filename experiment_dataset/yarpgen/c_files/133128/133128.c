/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= var_3;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = var_6;
        var_12 -= (((64 || 76) ? 76 : (~var_3)));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_13 = ((((-((-64 ? 1 : 1))))) ? ((var_4 ? (-3135121419260275319 - var_2) : (arr_3 [i_4 - 2] [i_2 + 1] [i_1]))) : -0);
                            var_14 += var_3;
                        }
                    }
                }
            }
            arr_13 [i_0] [i_0] = ((((max((arr_5 [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_1] [i_1])))) ? ((-65 ? (arr_5 [i_0] [i_0] [i_1]) : var_7)) : (((min(1, 1023))))));
            arr_14 [i_1] [i_0] = ((-(((!(arr_1 [i_0]))))));
        }
        for (int i_5 = 1; i_5 < 18;i_5 += 1)
        {
            arr_17 [i_0] = ((max(215, ((2752059851 ? var_0 : var_9)))));
            arr_18 [i_0] [i_5] = (min((((var_1 / (arr_12 [i_0])))), (((3927233828 > (min(64, 1081517276403857994)))))));
            var_15 ^= (max((((-1 ? -21116 : (arr_7 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1])))), ((11881 ? (arr_0 [4] [i_5 + 1]) : -3135121419260275319))));
            var_16 = (max(var_16, ((min((max((arr_8 [i_0] [i_5] [i_5 + 1] [i_0]), var_9)), 9223372036854775807)))));
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    {
                        var_17 ^= (((((-35 ? 1 : 65535))) ? ((~(((arr_16 [i_0] [i_6] [i_6]) / var_8)))) : (29849 | -66)));

                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            var_18 = ((((var_7 ? (-127 - 1) : -3135121419260275319)) <= ((((!(arr_27 [i_7 + 1] [i_7 + 1] [i_7] [i_7 + 1] [i_7 + 1] [i_0])))))));
                            var_19 -= 18446744073709551615;
                        }
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            var_20 *= -92;
                            var_21 = (((54717 + var_5) || var_5));
                        }
                        var_22 += max(var_5, var_9);
                    }
                }
            }
        }
    }
    #pragma endscop
}
