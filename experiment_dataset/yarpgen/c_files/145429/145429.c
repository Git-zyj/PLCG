/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [10] [i_0] = (arr_2 [i_0]);
        var_20 = (((((18446744073709551598 && 7960) + var_1))) ? 27 : ((((min(var_9, (arr_2 [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_21 = (((3442087668 ? ((max(32767, 7960)) : 7978))));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_3] = var_3;
                        var_22 = (max(var_22, (((~(((!(!var_16)))))))));
                        var_23 = (arr_8 [i_0] [i_1] [21] [i_3]);
                    }
                    var_24 ^= ((var_12 ? (var_13 * 134217664) : ((max((-7955 % 8191), (arr_10 [i_2] [i_0]))))));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        arr_14 [i_2] [i_4] = 1039841070;
                        arr_15 [i_0] [i_1] [i_1] [i_2] [i_4] = var_15;
                        var_25 |= -1039841057;
                        arr_16 [i_0] [i_1] [i_1] [i_4] = ((~(arr_1 [i_4])));
                    }
                    arr_17 [i_0] [i_1] [i_0] = ((var_15 ? (arr_0 [18] [i_2]) : (var_10 < var_17)));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            var_26 &= ((((1039841070 ? -8192 : 8198)) / (arr_18 [1])));
            var_27 = arr_5 [i_5];
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 14;i_8 += 1)
                {
                    {
                        arr_30 [i_5] [13] [13] [i_5] [i_5] = ((!((min(18446744073709551570, -3169)))));
                        var_28 = (((((arr_20 [i_5]) | var_0)) + -118));
                        arr_31 [i_5] [1] [1] [11] = ((-((var_19 ? ((var_5 >> (((arr_22 [i_5] [i_5]) - 9673420094022593234)))) : 9703))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 13;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    {
                        var_29 = var_18;
                        arr_41 [i_5] [i_5] [i_5] = ((((var_9 << (((arr_1 [i_9]) - 52724))))) ? (((arr_8 [i_10 + 2] [i_11] [i_11] [i_10 + 2]) ? -8207 : (arr_8 [i_10 + 1] [i_10] [i_10 + 1] [i_10]))) : (!var_19));
                        arr_42 [i_5] [i_10] [i_5] [i_5] = (((((-3806039694471534043 ? var_7 : (-4123785431221194160 < -512)))) | var_13));
                        var_30 = ((~((2250700302057472 ? -32008 : 10930103219593555670))));
                    }
                }
            }
        }
    }
    var_31 = var_19;
    var_32 &= (((min((!var_11), var_11))) ? var_13 : var_1);
    #pragma endscop
}
