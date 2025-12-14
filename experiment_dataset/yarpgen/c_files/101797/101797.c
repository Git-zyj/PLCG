/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((((var_19 ? 4416471839763956666 : var_7)) & ((var_12 ? 15002157415914039670 : 2147483631))))) ? (max(var_11, (min(2147483631, var_17)))) : (~98304)));
    var_21 |= (((((var_18 ? -65535 : var_3))) ? var_15 : (min(((var_19 ? var_17 : var_15)), var_18))));
    var_22 = 143;
    var_23 |= ((((min(var_19, ((2199023253504 ? var_17 : var_10))))) ? 81 : (((((66 ? 2199023253504 : 123))) ? var_2 : (max(var_16, var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_10 [i_1] [i_1] = var_1;
                        var_24 = var_8;
                    }
                    var_25 &= -2199023253513;
                }
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    var_26 = (max(var_26, ((max((arr_5 [i_1] [i_1 - 2] [i_1 - 1]), (((-1163552506 ? var_2 : 8796093018112))))))));
                    var_27 = ((-1163552523 ? -999917892 : (((arr_6 [i_4] [10] [i_0] [i_0]) ? 60 : ((1 ? 255 : 101))))));
                    arr_13 [i_1] [i_1] [i_1] = (((((1 << (((arr_1 [i_1 + 1]) - 1303558275))))) - (max(((max(80, 2199023253508))), (arr_9 [i_1 + 2] [i_1] [i_1] [i_1])))));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_28 *= ((((max((((arr_1 [i_0]) - var_18)), ((max((arr_3 [2] [2]), (arr_3 [8] [8]))))))) ? (((var_1 + 9223372036854775807) << (((arr_15 [10] [4] [i_1 - 1] [10]) - 12)))) : (((var_12 ? 1 : ((0 | (arr_15 [0] [2] [i_0] [0]))))))));
                    var_29 -= (max(((min((arr_6 [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_1]), (arr_3 [2] [2])))), (((arr_11 [0] [i_1 - 1] [0]) ? (arr_11 [10] [i_1 + 2] [10]) : (arr_6 [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1])))));
                }
                arr_17 [i_1] [i_1] = ((+(((arr_3 [i_1] [i_1]) ? (arr_3 [i_1] [i_1]) : (arr_9 [i_1 + 1] [i_1 - 2] [i_1] [i_1 + 1])))));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 8;i_7 += 1)
                    {
                        {
                            arr_23 [i_1] = ((1 ? 890327665 : 252));
                            var_30 = (~55);
                            var_31 = (arr_9 [3] [i_6] [1] [i_0]);
                            var_32 = (((((var_4 ? (arr_0 [i_1 + 2]) : (arr_0 [i_1 + 1])))) ? 23697 : ((max(var_6, (arr_16 [i_7 - 3]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
