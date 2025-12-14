/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;
    var_20 ^= var_1;

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_21 += (max(((((arr_2 [i_0] [i_0]) << (50161 - 50155)))), (1040790021 + 1040790021)));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            var_22 = -1040790003;
            arr_7 [i_0] = (~1);
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            arr_16 [i_0] [i_0] [i_0] [12] [i_0] [i_0] = var_9;
                            var_23 = 1040790021;
                            arr_17 [i_4 - 2] [i_0] [i_1] [i_0] [i_1] [i_0] [i_0] = (~3877885794523253391);
                            var_24 += 12007878183376818843;
                        }
                        var_25 = 60228;

                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            arr_22 [i_0] [1] [i_2] [i_3] [i_2] = 5877798601290432664;
                            var_26 = ((16869610945429169849 ? (arr_9 [i_1 - 1] [i_2 - 2] [i_3]) : (!var_14)));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_27 = (((arr_9 [i_1] [i_3] [i_6]) ? 12007878183376818850 : (((((arr_12 [i_0] [i_1] [i_2] [i_3] [i_6]) < 1))))));
                            var_28 = 7243118288546630520;
                        }
                        for (int i_7 = 3; i_7 < 16;i_7 += 1)
                        {
                            var_29 = -1586311781;
                            var_30 = (max(var_30, (((((var_2 ? 12449146345718683255 : 17179)) == 8449013423518993424)))));
                            arr_28 [i_0] [i_1] [i_1] [5] [i_3] [i_7] = ((6438865890332732762 ? 157 : 135));
                        }
                    }
                }
            }
            var_31 = (min(var_31, (((var_10 ? var_2 : (~0))))));
            var_32 = (!1040789995);
        }
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            var_33 |= ((((min(-110, (arr_31 [i_8] [i_0] [i_0])))) ? (min(3254177281, (arr_31 [i_8] [i_8] [i_0]))) : ((((!(arr_31 [i_8] [i_0] [i_0])))))));
            var_34 = (((max(292564815, var_8))) & ((((((arr_9 [i_0] [i_0] [i_8]) ? var_16 : var_10))) ? 3254177257 : var_2)));
        }
        var_35 = ((+(max((arr_19 [i_0] [i_0] [i_0] [i_0]), (arr_19 [i_0] [i_0] [i_0] [i_0])))));
        var_36 = arr_24 [13] [13] [i_0] [i_0] [i_0];
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
    {
        var_37 *= (((arr_18 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) != -1994782491));
        var_38 = (max(var_38, (arr_25 [i_9] [2] [i_9] [i_9])));
        var_39 -= var_4;
        arr_34 [i_9] = ((1070384440 ? 11235909215065713680 : (arr_24 [i_9] [i_9] [i_9] [i_9] [i_9])));
    }
    var_40 = var_1;
    #pragma endscop
}
