/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -4876;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((var_17 >> (arr_0 [i_0]))));
        var_20 = ((((((((arr_1 [i_0] [i_0]) ? 23 : 3495))) * var_7)) >> (((((arr_1 [i_0] [i_0]) - (17755 <= var_3))) - 10032044744614419483))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_21 -= (((((arr_4 [i_1]) * (arr_0 [i_1])))) ? 1 : ((((((arr_1 [i_1] [i_1]) > (arr_3 [i_1])))) << (((arr_4 [i_1]) ? (arr_0 [i_1]) : var_6)))));
        arr_5 [i_1] [i_1] = (((((1 ? 15392438592428141325 : (((((arr_3 [i_1]) != var_14))))))) ? ((-(arr_1 [i_1] [i_1]))) : 0));
    }
    for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = ((((((arr_1 [i_2 + 1] [1]) - 3026678333247042418))) ? (((4879 ? 1120182391 : 1))) : ((12033954389549242845 & (arr_1 [i_2 + 1] [i_2 + 1])))));
        var_22 = var_12;
        arr_9 [i_2] [i_2] = (max(((0 || (arr_7 [i_2 + 1]))), (((arr_1 [i_2 + 1] [i_2 + 1]) || (arr_7 [i_2 + 1])))));
    }
    for (int i_3 = 0; i_3 < 0;i_3 += 1) /* same iter space */
    {
        var_23 = (((((arr_1 [i_3 + 1] [i_3 + 1]) ? (arr_1 [i_3 + 1] [i_3 + 1]) : var_17)) >> ((((~(arr_11 [i_3 + 1]))) + 57))));
        var_24 += (((arr_0 [i_3 + 1]) >= (((((arr_1 [1] [i_3]) == var_2)) ? (~var_16) : (arr_0 [i_3])))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    {
                        var_25 = (((arr_1 [i_6 - 1] [i_6]) << (((((arr_1 [i_6 - 1] [i_6]) & (arr_12 [i_3 + 1]))) - 10032044744614417363))));
                        var_26 -= ((19421 >> (859260302 - 859260302)));
                        var_27 ^= ((((((arr_12 [i_6 - 1]) != (arr_7 [i_3 + 1])))) >= ((var_8 ? var_12 : (arr_12 [i_3])))));
                        var_28 += (min(((var_3 >> (33 - 14))), -34));

                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            var_29 -= 1139760826;
                            var_30 = 44246;
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    arr_31 [i_8] [i_3] = 28311;
                    var_31 = var_15;
                    var_32 += 58530;
                }
            }
        }
    }
    var_33 = 6444878478882246795;
    #pragma endscop
}
