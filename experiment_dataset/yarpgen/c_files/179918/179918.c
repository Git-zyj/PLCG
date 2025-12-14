/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 = (((((((((arr_0 [i_0] [i_0]) ? var_6 : 1118512849060370141))) & ((var_8 ? var_4 : 16411482774130967368))))) ? ((((!(arr_1 [i_0] [i_0]))) ? (((-(arr_0 [i_0] [i_0])))) : (((arr_0 [i_0] [i_0]) ? 1118512849060370124 : var_8)))) : (1297324973 / -1297324974)));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_4 [i_0] [i_0] [i_0] = ((!((((arr_3 [i_0] [i_0]) | (0 ^ 1297324974))))));
            arr_5 [i_0] [i_0] [i_0] = ((((((!15132978819511018853) | ((63370 ? (arr_2 [i_0] [i_0] [i_0]) : var_9))))) ? (arr_0 [i_0] [13]) : (((!(arr_0 [i_1] [i_0]))))));
            var_15 = (max(var_15, (arr_0 [i_1] [i_1])));
            var_16 = (max(var_16, ((min(0, 33870)))));

            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                var_17 = (max(var_17, ((((max((arr_6 [8] [i_2 - 1] [i_2 - 2] [i_2 - 1]), (arr_2 [i_0] [i_2 + 1] [i_2]))) << (((arr_2 [i_2] [i_2 + 1] [i_2 + 1]) % (arr_2 [i_1] [i_2 - 1] [i_2]))))))));
                arr_8 [i_2] [i_2] [i_2 + 1] [i_2] = (((((0 ? ((var_7 ? var_6 : (-2147483647 - 1))) : (3677661356563238154 - var_6)))) ? ((((((arr_6 [i_0] [i_1] [0] [i_2]) ? 7964166145985062260 : (arr_3 [i_2] [i_2]))) > (~var_13)))) : 1297324973));
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        {
                            var_18 -= var_10;
                            var_19 = (min(var_19, var_10));
                        }
                    }
                }
            }
        }
        var_20 = (min(var_20, (min((((var_11 == (arr_1 [i_0] [i_0])))), ((~(arr_1 [i_0] [i_0])))))));
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        arr_15 [i_5] = min((max(((-2147483622 ? 1118512849060370138 : var_9)), -var_5)), (((((min(var_6, (arr_13 [i_5] [i_5])))) ? -5347047104573455015 : ((var_9 ? (arr_13 [i_5] [i_5]) : (arr_13 [i_5] [i_5])))))));
        arr_16 [i_5] [i_5] = 2035261299578584249;
    }
    for (int i_6 = 1; i_6 < 13;i_6 += 1)
    {
        var_21 = arr_11 [i_6 - 1] [2] [i_6] [i_6];
        arr_19 [i_6 + 1] [i_6] = ((~(max(var_0, var_13))));
        arr_20 [i_6 + 1] = ((((((arr_6 [i_6 - 1] [i_6] [i_6] [i_6]) - -var_12))) ? (min((arr_9 [i_6 + 1] [10] [i_6 - 1]), (63 + 15883486303611942263))) : (((-(arr_13 [i_6 + 1] [i_6 - 1]))))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        var_22 = (max(var_22, ((((arr_13 [i_7] [i_7]) ? var_4 : 18446744073709551608)))));
        var_23 = (min(var_23, var_0));
        arr_24 [i_7] = (-(arr_0 [i_7] [i_7]));
    }
    var_24 = (16411482774130967367 >= -2093228897);
    #pragma endscop
}
