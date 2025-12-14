/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= var_0;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = (min(var_13, ((max((arr_1 [i_0]), (((!(arr_1 [i_0])))))))));
        var_14 = (arr_0 [i_0] [i_0]);
        var_15 = (arr_1 [i_0]);
        var_16 += ((!((min((((!(arr_0 [i_0] [i_0])))), (arr_0 [i_0] [i_0]))))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 17;i_4 += 1)
                    {
                        {
                            arr_12 [i_3] [i_3] = (((arr_11 [i_0] [i_0]) ? ((((max(4611685949707911168, (arr_9 [i_1])))) ? 131941395333120 : (arr_7 [i_1] [i_1] [i_1] [i_1]))) : ((((!(arr_5 [i_3 - 3])))))));
                            var_17 = (max(var_17, ((((min(((-94 ? 63 : 63)), 63)) != (arr_7 [i_4] [i_3 - 3] [i_0] [i_0]))))));
                            arr_13 [i_0] [i_1] [i_1] = ((((arr_0 [i_1] [i_0]) ? (arr_8 [i_2] [i_2] [i_4 + 2] [i_1] [i_4] [i_3]) : (((!(arr_5 [i_4])))))));
                            var_18 = (max(95, (980940997678127653 + -102)));
                            var_19 = ((!(arr_5 [i_4 + 1])));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = max((((arr_7 [i_6 - 3] [i_6] [i_6 - 3] [i_6 - 3]) / (arr_18 [i_6 - 1] [i_6 - 1]))), (arr_1 [i_7]));
                            var_20 = ((min((max((arr_8 [i_0] [i_0] [i_0] [i_6 - 3] [i_6] [i_6 - 3]), (arr_14 [i_0] [i_0] [i_0] [i_5]))), (arr_8 [i_0] [i_0] [i_5] [i_6 - 2] [i_7] [i_0]))));
                        }
                    }
                }
            }
            var_21 = (arr_19 [i_1] [i_0]);
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                var_22 ^= 41834;
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 18;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        {
                            arr_31 [i_0] [i_9] [i_0] [i_0] [i_11] |= (arr_6 [i_0] [i_11]);
                            var_23 = (arr_19 [i_8] [i_9]);
                            var_24 = (arr_28 [i_8] [i_9] [i_9]);
                            arr_32 [i_0] [i_0] [i_10] [i_0] [i_11] [i_10] = ((((((arr_6 [i_10] [i_11]) ? (arr_28 [i_10] [i_0] [i_0]) : -88))) ? ((var_5 / (arr_26 [i_0] [i_8] [i_0] [i_10] [i_8] [i_10]))) : (arr_20 [i_10] [i_10 - 1] [i_10] [i_10] [i_8] [i_10 + 1] [i_8])));
                            var_25 = (arr_17 [i_0] [i_0]);
                        }
                    }
                }
                var_26 -= (((arr_11 [i_8] [i_9]) + 980940997678127653));
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 18;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {
                        {
                            var_27 = ((((103 >= (arr_29 [i_0])))));
                            arr_40 [i_0] [i_0] [i_0] [i_12] [i_13] = 18013848753668096;
                            arr_41 [i_0] [i_8] [i_0] [i_0] [i_13] = arr_3 [i_0] [i_0] [i_0];
                        }
                    }
                }
                arr_42 [i_0] [i_0] [i_9] = 30058;
            }
            arr_43 [i_0] [i_0] [i_8] = (((arr_9 [i_8]) / 2067536228));
        }
    }
    #pragma endscop
}
