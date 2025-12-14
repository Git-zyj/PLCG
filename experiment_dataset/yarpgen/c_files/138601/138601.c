/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_12 = ((~((184 ? (var_4 & -34) : ((var_3 ? -1 : 32703))))));
                var_13 &= 511;
                var_14 = 65025;
                var_15 = (((65025 - var_10) ? (((max(128, var_9)))) : ((((0 ? 143 : 35033))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_16 = ((((-1131559918 ? -103 : 0))) != ((113 ? 1316469351171087527 : 2594013000453714755)));

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_17 = (max(((28358 ? 4177920 : 1131559917)), 2008717199));
            arr_10 [1] [1] = var_11;
            var_18 += var_10;
            var_19 = (max(var_19, (((((var_4 ^ (min(262080, var_10)))) & (((((var_0 ? 65012 : var_5))))))))));
            arr_11 [i_2] [i_3] = var_3;
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            var_20 -= (((max(var_9, 1131559918))));

            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                var_21 = (min(((var_10 ? 31 : -673526356)), 484101371));
                arr_17 [13] [i_5] [i_5] = ((((~var_3) ? ((-484101372 ? var_5 : var_10)) : var_4)));
                var_22 = 18767;
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    var_23 = (min(var_23, var_8));
                    arr_23 [16] [i_4] [i_6] [6] [i_7] = (((!var_6) << (((min((((var_8 ? var_3 : 2994463026))), 7892580429489974881)) - 29691))));
                    var_24 |= var_10;
                    var_25 = (!2147483647);
                    var_26 &= (min(64, var_4));
                }
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    var_27 = (max(10554163644219576738, (0 + 13)));
                    var_28 = (((-var_9 ? var_9 : ((-1 ? 46783 : 611609541)))));
                    var_29 = (max(var_29, ((max((min(-542101177096990328, var_9)), var_10)))));
                }
                arr_26 [i_2] [13] |= ((max((4387 || 1316469351171087531), ((-570191694 ? var_1 : var_3)))));
                var_30 = var_9;
                arr_27 [15] [5] [i_6] = (max((var_10 / var_8), (((((min(var_9, 198))) / ((var_11 ? 18782 : -64)))))));
                var_31 |= ((-((var_4 ^ (var_6 & 3552953483)))));
            }
            arr_28 [1] [4] = (((!13948444974332812288) == (65009 - 37177)));
            arr_29 [3] [7] = (((((var_11 ^ (((((-2147483647 - 1) == var_1))))))) ? (min(3584752985, 0)) : 13439843626929479876));
        }
        var_32 = (max(var_32, (((((-(var_10 | 37157))) / 53218)))));
    }
    var_33 = var_11;
    #pragma endscop
}
