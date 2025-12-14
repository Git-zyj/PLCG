/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_20 = (min(var_20, ((((((var_15 * (arr_1 [i_0])))) ? (((~1) + var_19)) : ((var_7 ? -28096 : var_5)))))));
        arr_2 [i_0] = (max(((((~var_5) ? var_14 : 28100))), ((((max(var_9, 28096))) ? 16540537838557648357 : -178))));
    }
    var_21 = (((min(18446744073709551615, var_10)) > ((((min(256998562, 19))) + (12287404066459254905 | var_9)))));

    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_6 [i_1] [12] = (arr_5 [i_1]);
        var_22 = 5021598954129070429;
        arr_7 [i_1] [i_1] = ((63504 + 52) ? (max(11, var_7)) : ((min(993617810, 4294967288))));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_10 [i_2] = 94;
        arr_11 [i_2] &= (min((arr_8 [i_2]), (((arr_3 [i_2]) * (508569186 & 5583517191441525007)))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 11;i_5 += 1)
                {
                    {
                        var_23 = (!-7019040007615814395);
                        arr_20 [i_3] = 7;
                        arr_21 [i_3] [i_4] [7] = ((min((max(-6373747257136512584, 1)), (((237 || (arr_4 [i_2])))))) & 107);
                    }
                }
            }
        }
        arr_22 [2] = ((((min(var_9, (arr_17 [i_2] [i_2] [i_2] [i_2] [i_2])))) ? (31 / var_14) : ((2 ? (max(3795748311, 48052)) : (~var_19)))));
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        var_24 = (min(var_24, var_6));
        var_25 = (min(var_25, (((max(32, var_3)) & (((~(((arr_1 [i_6]) ? 223 : (arr_1 [3]))))))))));
        arr_26 [i_6] = (max(0, 15));
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        var_26 = (((min((arr_3 [i_7]), (arr_4 [i_7]))) ^ ((((max(var_14, var_9)) ? (arr_28 [i_7]) : (((min(245, 230)))))))));
        var_27 = (max(var_27, (arr_4 [i_7])));
    }
    #pragma endscop
}
