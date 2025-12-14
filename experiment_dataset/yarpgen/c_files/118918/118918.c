/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    var_14 = (((((1 ? 1 : var_12))) % (arr_3 [i_1] [i_1])));
                    var_15 = (arr_1 [i_2]);
                }
                for (int i_3 = 2; i_3 < 17;i_3 += 1)
                {

                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 15;i_4 += 1)
                    {
                        var_16 = var_3;
                        arr_13 [i_1] [i_1] [i_1] [i_3] = (((((1812265081 ? (arr_12 [i_0] [i_1] [i_3] [i_1]) : var_9))) || (((1 ? 1 : 1)))));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_17 = ((-((247 ? 11776 : 1))));
                        var_18 = (((((((arr_12 [i_0] [i_1 + 2] [i_3] [i_1]) ? 11764 : -1605185802))) ? (((arr_11 [i_5] [i_1] [i_3] [i_5] [i_3] [i_5]) | (arr_6 [i_0] [i_0] [i_1]))) : (min(var_10, 1)))));
                        arr_17 [i_5] [i_1] [i_1] [i_0] = (((~var_9) / (min(1, -145730661))));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        var_19 = (min((((var_2 < ((var_11 ? 11781 : var_0))))), (((((-429868788 ? -6325563640870646567 : (arr_4 [i_0] [i_1] [i_1])))) ? -1504996069324210157 : (((((arr_0 [i_0]) < var_12))))))));
                        var_20 = var_5;
                    }
                    arr_21 [i_0] [i_1] [i_0] = (6 * 53775);
                    arr_22 [i_0] [i_1] [i_3] [i_1] = ((((((72057589742960640 ? (arr_20 [i_1]) : -7911)))) ? ((((min(12396687085301143389, 1))) ? ((1 ? 5826289572012578305 : (arr_6 [i_0] [i_0] [i_1]))) : (arr_4 [i_0] [i_1] [i_3 - 2]))) : ((max(1, ((var_9 ? (arr_20 [i_1]) : -1199053480)))))));
                }
                /* vectorizable */
                for (int i_7 = 2; i_7 < 18;i_7 += 1) /* same iter space */
                {
                    var_21 = (arr_10 [i_0] [i_0] [i_1 + 2] [i_1]);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            {
                                arr_31 [i_0] [i_1] [i_7] [i_8] [i_1] = (((arr_29 [i_1 + 2] [i_1] [i_9] [i_9] [i_9] [i_9]) ? ((-6892 ? 11754 : 35747322042253312)) : 1));
                                arr_32 [i_7] [i_1] = ((!(((1 ? 55896277913283242 : 3132451559599842733)))));
                                arr_33 [i_0] [i_0] [i_7 + 1] [i_8] [i_1] = (((11779 ^ -84) ? (arr_3 [i_7 - 2] [i_1 + 2]) : ((var_3 ? (arr_4 [i_0] [i_1] [i_0]) : var_3))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_10 = 2; i_10 < 18;i_10 += 1) /* same iter space */
                {
                    var_22 = (((arr_0 [i_0]) ? ((var_4 ? 32174 : 1)) : 1));
                    var_23 = ((5276398351200176682 ? ((60 + (arr_20 [i_1]))) : ((var_7 ? 53771 : (arr_9 [i_1])))));
                }

                /* vectorizable */
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    var_24 = (((((var_7 ? 54255 : var_3))) ? -var_9 : (arr_34 [i_1] [i_0] [i_1 - 2])));
                    arr_39 [i_0] [i_0] [i_1] [i_0] = ((~(arr_38 [i_0] [i_11] [i_1 + 1] [i_0])));
                }
                var_25 = (min((((arr_9 [i_1]) ? var_3 : 2)), (min(1820853153, 1))));
            }
        }
    }
    #pragma endscop
}
