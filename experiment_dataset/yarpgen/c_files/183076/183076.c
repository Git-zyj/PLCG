/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_11 [i_2] [i_2] [i_0] [i_0] [i_0] [i_0] = (-((32822 ? -255 : -1318735971446344228)));
                            var_18 &= ((-(~2042098504)));
                            var_19 += (~-429557047);
                        }
                    }
                }
                arr_12 [i_0] [i_0] = var_4;
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_20 += ((+(((arr_14 [i_1] [i_4 - 3] [i_1]) ^ (arr_16 [i_5] [i_5] [i_4 + 3] [i_4 - 4])))));
                            arr_17 [i_0] = ((((((arr_13 [i_0] [i_1] [i_4] [i_5]) ? (((arr_14 [i_0] [i_4] [i_4]) & var_17)) : var_17))) || (((-(arr_13 [i_5] [i_4 - 4] [i_4] [3]))))));
                            var_21 = ((+(min((arr_10 [i_0] [i_4 - 4] [i_5 - 2] [i_5 + 2]), var_3))));
                            var_22 = (max(((max(-1330658045, (arr_14 [i_0] [i_4 - 3] [i_0])))), (((!(arr_15 [i_4 - 2] [i_1] [i_0]))))));
                        }
                    }
                }
            }
        }
    }
    var_23 = (max(0, 13403715921010055217));

    /* vectorizable */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        arr_20 [i_6] [i_6] = 33540;
        var_24 = (32006 + 31990);
        arr_21 [i_6] [i_6] = (((arr_15 [i_6] [i_6] [i_6]) + var_14));
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 9;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 12;i_9 += 1)
                {
                    {
                        var_25 = var_4;
                        arr_28 [i_6] [i_7] [i_8] = ((~(arr_23 [i_7 + 2] [i_8 + 2] [i_9 + 1])));
                    }
                }
            }
        }
        arr_29 [i_6] = ((-(((-32525 > (arr_14 [i_6] [i_6] [i_6]))))));
    }
    var_26 += (min(((-(!2064384))), (((((var_15 ? var_15 : var_15)) > ((max(var_9, 70))))))));
    var_27 = ((((255 ? (!var_6) : var_1)) >> (-368452735 - 3926514541)));
    #pragma endscop
}
