/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_16 = (max(var_16, (((((var_2 ? 4106664843868112273 : (((max(-21, 34887)))))) ^ ((2325425704266161954 ? (((arr_0 [i_0] [i_0 - 2]) ? var_15 : 2719889810510686091)) : (54647 * 10403149990136451787))))))));
        var_17 *= (max((((min(var_3, 30620)) << (((arr_0 [i_0] [i_0 - 1]) - 5272)))), 4106664843868112249));
        var_18 = (((((var_7 ^ 48) ^ ((-37 ? var_15 : 205346250565884231)))) >= ((var_5 ? 18402996013040247242 : (arr_1 [i_0 - 2])))));
    }
    var_19 = var_12;
    var_20 = var_6;

    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_21 = (arr_0 [3] [i_1]);
        var_22 = (arr_3 [i_1]);
        var_23 = arr_2 [i_1];
        var_24 = (((arr_0 [12] [i_1]) ? (arr_3 [i_1]) : ((((3649423136910595505 && (arr_0 [i_1] [i_1])))))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_25 = (((max(4106664843868112251, (arr_4 [i_2] [i_2]))) << (((((arr_1 [i_2]) ? ((var_6 ? 5438573466572093975 : -32)) : ((((arr_1 [i_2]) & (arr_0 [i_2] [i_2])))))) - 5438573466572093952))));
        var_26 = ((((((max(var_4, var_13)))) / ((-41 ? (arr_5 [i_2] [6]) : (arr_4 [i_2] [i_2]))))));
        var_27 = (-(((22 << (var_5 - 14)))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    arr_13 [i_2] [i_3] [i_3] [i_2] = max((min((arr_8 [i_2]), (arr_12 [i_2]))), ((((arr_5 [i_2] [i_3]) == 87))));
                    var_28 = (max(var_28, (((-(arr_4 [i_4] [i_3]))))));
                }
            }
        }
        var_29 = (((((-(arr_11 [i_2])))) ? (((18327448180358215237 && -127) ? (arr_11 [i_2]) : (min((arr_5 [i_2] [i_2]), var_4)))) : ((((max(var_15, var_1))) ? (~var_2) : (arr_4 [5] [5])))));
    }
    #pragma endscop
}
