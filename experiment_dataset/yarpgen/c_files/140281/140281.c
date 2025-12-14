/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_11 = (!var_9);
        arr_3 [i_0] = (((arr_2 [i_0] [7]) || ((min((arr_2 [i_0] [i_0 - 2]), ((5 ? var_8 : var_4)))))));
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_12 = (((-7 || (arr_0 [i_1 - 2]))));
        var_13 = (((arr_4 [i_1 + 1]) || (!var_5)));
        arr_6 [i_1 - 1] = (((min((~var_9), 246))) || (min((((arr_1 [i_1] [i_1]) || -2)), 1)));
    }
    for (int i_2 = 2; i_2 < 17;i_2 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
        {
            var_14 = 161;
            var_15 *= ((~((46 ? 7 : -1307441722))));
            var_16 = var_5;
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
        {
            var_17 = (max((((-(arr_2 [i_2] [i_2])))), var_2));
            var_18 = (min(var_18, ((min(var_8, (((max((arr_7 [i_4]), (arr_0 [i_2]))))))))));
        }
        var_19 = 7766706569806638268;

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_18 [i_2 - 2] [i_5] = (arr_17 [i_5]);
            var_20 = (((arr_10 [i_5]) || ((min(var_7, ((min(8738113690630264706, var_10))))))));
            arr_19 [i_5] [i_5] [i_5] = (min((20 || var_8), 46));
            var_21 = (((arr_4 [i_2 + 1]) || (25 || -9807)));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            var_22 = ((var_5 ? (((arr_21 [i_2] [5] [4]) ? 9 : -3097746729713982131)) : (!var_6)));
            var_23 = (arr_8 [i_6]);
            arr_22 [i_2 - 2] = ((144115050636902400 ? var_2 : 18446744073709551613));
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        arr_26 [8] &= 4793918113823648375;
        var_24 = (arr_24 [i_7]);
        var_25 = -10;
        var_26 = (arr_24 [i_7]);
    }
    var_27 &= (min((min(var_3, var_10)), (!var_10)));
    var_28 = (max(var_28, var_10));
    var_29 = ((((((0 ? var_5 : var_6))) || var_9)));
    var_30 = (min(var_30, ((max(var_1, (((!(0 || var_4)))))))));
    #pragma endscop
}
