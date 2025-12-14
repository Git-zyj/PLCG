/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(255, -5400500019162465133));
    var_16 = var_9;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 = var_13;
        arr_4 [i_0] = ((((-(arr_0 [i_0])))));
        arr_5 [i_0] = (arr_0 [i_0]);
        arr_6 [i_0] = (min(((((!-2636866275734963778) != (max(236, -1565078729))))), (max(var_6, ((var_9 ? var_3 : (arr_0 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_18 = (((((255 / (arr_8 [i_1])))) ? (arr_8 [i_1]) : (((arr_10 [6]) ? 1 : var_0))));
        arr_11 [i_1] [i_1] = (arr_8 [i_1]);
        arr_12 [i_1] [i_1] |= (((min(-2636866275734963753, 197))) ? ((min(7, (((1969395975 | (arr_8 [i_1]))))))) : (min(var_0, (arr_10 [i_1]))));
        var_19 = (((max((((arr_8 [i_1]) / -17)), (((!(arr_10 [i_1])))))) - ((((arr_7 [i_1]) < 1295277473)))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {

            for (int i_4 = 2; i_4 < 15;i_4 += 1)
            {
                var_20 = ((197 ? 2582 : -1));
                var_21 = (max(var_21, var_4));
            }
            var_22 = (max((min((arr_19 [i_2] [i_3] [i_3]), (arr_13 [i_2]))), ((((arr_13 [i_2]) && (arr_14 [i_2]))))));
        }
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            var_23 = min((((21445 < (!1)))), (((arr_14 [i_5]) ? var_8 : (((arr_19 [i_2] [i_5 - 1] [6]) ^ (arr_23 [i_5]))))));
            arr_24 [i_2] [i_5] = (((arr_15 [i_5 - 1]) ? ((((var_3 >> (var_12 - 6286941500737332385))) / (-1 * var_0))) : ((((!((max(255, var_7)))))))));
        }
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            var_24 ^= (!((min(((((arr_14 [i_2]) || -2045009737))), (var_12 / var_10)))));
            var_25 = (max(-var_0, (((!((max(var_13, -21008))))))));
            var_26 = ((-(((max(var_13, 1))))));
        }
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            var_27 -= var_14;
            arr_32 [i_2] [i_7] = arr_25 [i_2] [i_7];
            var_28 = (2582 >> (((~var_12) + 9450)));
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 15;i_9 += 1)
            {
                {
                    var_29 = (max(((((!var_4) || (-12967 >= -1192175863)))), (((arr_29 [i_9 + 3] [i_9 + 3] [i_9 + 3]) ? -var_3 : (arr_34 [i_2])))));
                    arr_38 [i_2] [i_8] [i_9] = (((((10718675509104077873 ? -569440488 : 4294967293))) || ((!(arr_16 [i_9] [i_9 + 1] [i_9])))));
                }
            }
        }
        arr_39 [4] [4] = ((((((arr_25 [i_2] [i_2]) ? (arr_25 [i_2] [13]) : var_5))) ? (((arr_25 [i_2] [i_2]) ? (arr_25 [i_2] [i_2]) : (arr_25 [i_2] [i_2]))) : (((arr_25 [i_2] [i_2]) / (arr_25 [i_2] [i_2])))));
    }
    for (int i_10 = 0; i_10 < 18;i_10 += 1)
    {
        arr_43 [i_10] = ((((((arr_26 [i_10] [i_10]) > 2636866275734963753)) ? (max(var_0, -2636866275734963778)) : (-21004 != 255))));
        var_30 = (min(var_30, ((max(((max((arr_40 [i_10]), ((((arr_33 [i_10] [9] [i_10]) >= var_11)))))), (max((arr_18 [i_10] [i_10]), (((arr_31 [i_10] [i_10]) ? (arr_16 [i_10] [i_10] [i_10]) : (arr_21 [i_10] [i_10]))))))))));
        var_31 = (min(((((arr_29 [8] [i_10] [i_10]) == (arr_29 [i_10] [i_10] [i_10])))), (arr_29 [i_10] [i_10] [i_10])));
    }
    #pragma endscop
}
