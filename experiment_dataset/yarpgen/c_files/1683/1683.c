/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = max((((((arr_3 [i_1] [i_1]) ? var_12 : (arr_2 [i_0] [i_0]))) / (((arr_3 [i_0] [i_1]) ? (arr_0 [i_1]) : var_1)))), ((1969084100 ? (arr_4 [i_0] [i_1]) : ((((arr_1 [i_0]) ? (arr_5 [i_0]) : var_3))))));
                var_21 += min((-127 - 1), (arr_5 [i_1]));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_22 = (((((((min(var_16, (arr_4 [i_0] [i_2])))) ? (arr_6 [i_0]) : (arr_3 [i_0] [i_0])))) * (min(((min((arr_3 [i_1] [i_0]), var_14))), (min(43155, 18446744073709551615))))));
                    arr_8 [i_0] [i_1] [i_0] [i_0] = (arr_3 [i_0] [i_1]);
                    var_23 = ((~(arr_5 [i_1])));
                }

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_24 += 65508;
                    var_25 += arr_7 [i_3] [i_1] [i_1] [i_0];
                    var_26 = ((~(min((arr_12 [i_3] [i_3] [i_3] [i_3]), (min((arr_3 [i_0] [i_0]), var_4))))));
                    var_27 = (max(var_27, (arr_10 [i_0] [i_1] [i_3])));
                }
                var_28 = ((var_14 ? (min(7240463444358327613, 11199365048325384916)) : (arr_1 [i_1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 12;i_5 += 1)
        {
            {

                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    var_29 = (max(var_29, (arr_5 [i_4 - 3])));
                    arr_19 [i_4] [i_4 - 1] [i_5] [i_4] = var_3;
                    var_30 = (min(var_30, ((((arr_6 [i_6]) ^ ((6 ? 2376522911 : 65519)))))));
                    var_31 = (((arr_6 [i_6]) ? (arr_17 [i_6] [i_5 + 1] [i_5 - 2] [i_4]) : (arr_2 [i_5 - 1] [i_4 - 2])));
                }

                for (int i_7 = 1; i_7 < 12;i_7 += 1)
                {
                    var_32 = (max(var_32, (((47008 ? ((((min(6574774177038637157, (arr_0 [i_4])))) ? -1152 : (min(2987899214, 0)))) : (!4294967295))))));
                    var_33 -= ((((max((arr_21 [i_4] [i_7 + 1] [i_7] [i_7 + 1]), (((arr_6 [i_7]) | (arr_13 [i_7 - 1])))))) ? (arr_2 [i_5 + 1] [i_5 - 2]) : ((((min((arr_4 [i_7 + 1] [i_5 + 1]), (arr_6 [i_4 - 1])))) ? (((6705241731761771763 ? var_18 : var_0))) : (((arr_7 [i_4 - 2] [i_5 - 2] [i_5 - 2] [i_7 - 1]) ^ 7247379025384166676))))));
                }
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    arr_25 [i_5] [i_5] [i_5] = (max((((arr_17 [i_4] [i_4] [i_4 - 1] [i_5 - 2]) | (arr_7 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_5 - 2]))), (((8760783051476478535 ? 1 : 9630)))));
                    var_34 += (max(4294967295, -1));
                    var_35 = arr_4 [i_4 + 1] [i_4 - 3];
                }
                arr_26 [i_4 + 1] [i_5] [i_4] = ((-8200216319560542059 ? (max((arr_0 [i_4]), ((86 ? -1 : 11199365048325384929)))) : (((((4173706975 ? 30704 : 253)) << (9620574092945578617 - 9620574092945578610))))));
                arr_27 [i_5] [i_5 - 1] [i_5] = (((arr_18 [i_5]) - 4));
            }
        }
    }
    #pragma endscop
}
