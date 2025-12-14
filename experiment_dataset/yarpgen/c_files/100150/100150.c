/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, (((((max(var_11, (((arr_3 [i_0] [i_0] [i_0]) & var_14))))) ? 0 : (min((arr_7 [i_0] [i_1] [i_1] [i_2]), (arr_6 [i_0] [i_2] [i_2]))))))));
                    arr_11 [i_0] |= (((arr_5 [i_0] [i_1]) | (((arr_5 [i_0] [i_1]) ? (arr_5 [4] [14]) : (arr_5 [i_0] [i_1])))));

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        var_17 = ((min(1639754842, -19783)));
                        arr_15 [i_1] [i_1] = (((min((arr_14 [i_1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 1]), (arr_14 [i_1] [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 + 1])))) ? (~var_15) : (((max((!var_14), (((arr_7 [i_3] [i_1] [i_1] [i_0]) != var_8)))))));
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        arr_20 [i_1] [i_1] [i_2] [i_1] = (min(var_0, (arr_19 [i_0] [i_0] [i_0] [i_0])));
                        var_18 = (max(var_18, var_7));
                    }

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_24 [i_1] [i_1] [i_1] [5] = (+(((((arr_7 [i_5] [i_2] [i_1] [i_0]) + 2147483647)) >> (((arr_7 [i_2] [0] [i_2] [i_2]) + 2429)))));
                        var_19 ^= ((~32767) | ((((var_10 > (arr_4 [10]))))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 3; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            arr_36 [i_9] [i_6] [i_6 + 2] [14] [i_6 + 2] |= (((((var_6 ? (arr_25 [i_0] [i_0]) : (arr_22 [i_0] [i_6])))) ? (((arr_25 [i_9] [i_9]) >> (((arr_25 [i_9] [i_9]) - 17122)))) : ((((arr_22 [i_9] [i_6 + 2]) >= 32767)))));
                            var_20 = (min(((((min(var_8, 1048958540))) ? (~var_10) : (arr_19 [i_7] [6] [i_7] [i_9]))), var_1));
                        }
                        var_21 = (((min((min(var_15, (arr_32 [i_6] [i_6]))), var_1)) | ((((((arr_10 [i_0] [i_8]) - (arr_18 [i_8] [10] [i_6] [i_0]))))))));
                        var_22 *= (min((((arr_18 [i_6] [i_6 + 1] [i_6 + 1] [7]) >= 4294934522)), ((var_10 != (arr_18 [i_6] [i_6 + 1] [i_6 + 1] [i_6])))));
                    }
                }
            }
        }
    }
    var_23 += var_14;

    for (int i_10 = 2; i_10 < 13;i_10 += 1)
    {
        var_24 = (((((min((arr_7 [i_10 - 2] [i_10] [i_10 + 1] [8]), (arr_7 [i_10] [i_10] [i_10] [i_10]))))) > var_12));
        arr_40 [i_10 + 1] [i_10] = (var_6 | var_4);
        var_25 *= (max((min((((4294967290 ? (arr_28 [0] [i_10]) : var_10))), (arr_12 [0]))), ((((10107757960219131181 ? 32762 : -27457)) | var_6))));
        var_26 = var_3;
    }
    #pragma endscop
}
