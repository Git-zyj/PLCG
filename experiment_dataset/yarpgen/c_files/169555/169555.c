/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_14 = 18446744073709551584;
        arr_2 [i_0] = 13921;
        var_15 = (arr_0 [9]);
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    {

                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            arr_12 [1] [i_0] [i_0] [i_0] = 2946661089;
                            var_16 = 1348306206;
                            arr_13 [i_0] [i_4 + 4] [i_3] [3] [i_2] [i_1 + 2] [i_0] = (~1);
                            arr_14 [i_0] [i_1 - 1] [i_2] [i_0] [15] = 1355048629313293133;
                        }
                        var_17 = ((((((!(arr_1 [i_1 - 1]))))) == (arr_11 [i_0] [i_3] [i_2] [i_0] [i_1] [i_0 + 3] [i_0])));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        arr_18 [i_5] [i_5] = ((~((((((arr_10 [i_5]) || 1348306206))) << (((!(arr_10 [i_5]))))))));
        var_18 = ((~((((1486595883 + -377701211) || (-377701181 <= 1))))));
        arr_19 [i_5] = 1;
        var_19 = -1842242035;
    }
    for (int i_6 = 1; i_6 < 10;i_6 += 1)
    {
        var_20 = (arr_10 [i_6]);
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 9;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                {
                    arr_29 [i_6] = (arr_26 [i_6] [i_6] [i_6 - 1]);
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 8;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            {
                                arr_35 [i_10] [i_9] [i_9] [i_6] [i_8] [i_7 - 1] [i_6] = (((0 && 4294967295) & (((!(((arr_30 [i_6] [i_7] [i_8] [i_9] [i_9] [i_10]) >= (arr_33 [1] [i_7] [i_7] [i_9] [i_9]))))))));
                                var_21 = (max(var_21, ((((+(((arr_3 [i_8] [i_8]) / (arr_17 [1] [i_7])))))))));
                                arr_36 [i_10] [i_9] [i_6] [i_7] [i_6] = (((~980813550141973439) * (arr_30 [i_6] [i_7] [i_7] [i_8] [i_9] [1])));
                                arr_37 [i_6 - 1] [i_7] [i_7] [i_6] [i_6] [i_7] [i_10] = ((((((((-(arr_10 [i_10])))) || -31748))) << (255 - 249)));
                            }
                        }
                    }
                    arr_38 [i_6] [i_7 + 1] [i_6] = (arr_5 [4] [i_7] [i_6]);
                }
            }
        }
        var_22 -= ((-(((arr_34 [9] [i_6 + 1] [i_6] [i_6 - 1]) / ((65280 * (-127 - 1)))))));
        arr_39 [i_6] = ((-(((!(((arr_17 [i_6 - 1] [i_6]) || 65287)))))));
    }
    var_23 = (var_2 || var_4);
    var_24 += (18446744073709551612 == 255);
    #pragma endscop
}
