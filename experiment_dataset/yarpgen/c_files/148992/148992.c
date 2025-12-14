/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;
    var_19 = (max(((max(var_1, 2147221504))), var_5));
    var_20 = ((((min(1430, var_5) ^ var_17))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_21 = ((171 ? 27 : 1));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_22 += (max((arr_0 [i_0] [i_1 + 1]), ((min(-735750511, 1)))));
                    var_23 += (arr_3 [i_2] [i_2]);
                    var_24 -= (max((4899459380158047719 % 4899459380158047707), (((46539 ? 1 : 53)))));
                    arr_7 [i_2 - 1] [i_0] [i_0] = ((((((85 ? -1809249065455278200 : 1))) ? ((1023 ? (arr_4 [i_0] [i_1 + 4]) : 1)) : 29219)));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_25 *= (4899459380158047728 & 0);
                        var_26 = (max(var_26, ((((((arr_6 [i_2]) >= (arr_1 [i_0]))) ? (((arr_2 [i_2]) ? var_9 : 4899459380158047708)) : -4899459380158047726)))));
                    }
                }
            }
        }
        var_27 = (1 * 177);
        var_28 -= ((24 ? (arr_6 [8]) : (arr_0 [i_0] [i_0])));
    }
    for (int i_4 = 3; i_4 < 8;i_4 += 1)
    {
        var_29 = (max(var_29, 1));
        var_30 *= ((((((arr_6 [8]) ? (arr_6 [6]) : var_12))) ? (arr_6 [0]) : (arr_6 [1])));
    }
    #pragma endscop
}
