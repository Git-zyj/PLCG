/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    var_17 = (min(var_13, 1));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 = (arr_1 [i_0]);

        for (int i_1 = 2; i_1 < 11;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [8] |= var_6;
            arr_6 [i_0] = (max(13520657344605621582, 1));
        }
        for (int i_2 = 2; i_2 < 11;i_2 += 1) /* same iter space */
        {
            arr_9 [i_0] [i_0] [6] = ((((min(((var_6 ? var_0 : -4312)), (var_15 != 1850029618326276353)))) ? ((-(~var_1))) : ((((arr_3 [i_2 - 1] [i_2 - 1] [i_0]) && var_2)))));
            var_19 *= (!14995412541864076490);
            arr_10 [i_0] [i_0] = (min((arr_7 [i_0] [i_2 + 1]), (min(((max(-4286, var_1))), ((520604168611592756 ? var_11 : 1))))));
            arr_11 [i_2] [i_0] [i_0] = (var_2 | var_6);
            arr_12 [1] [i_2] = var_10;
        }
        for (int i_3 = 2; i_3 < 11;i_3 += 1) /* same iter space */
        {
            var_20 ^= (-4310 != -32768);
            arr_15 [i_0] [9] [i_3] = (3186334205 ^ 1);
        }
        var_21 = var_9;
        arr_16 [i_0] [i_0] = ((!(arr_14 [4] [i_0] [i_0])));
    }

    for (int i_4 = 2; i_4 < 13;i_4 += 1)
    {
        var_22 = ((((~((var_7 ? var_8 : -30145))))) ? (arr_17 [i_4]) : 16400528668259717588);
        arr_19 [i_4] [i_4] = var_5;

        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            arr_22 [i_5] [i_4] [i_4] = var_3;
            arr_23 [i_5] [3] [i_4] = (max((((((max(70, -25553))) ? 4313 : var_5))), 1108633091));
            var_23 ^= 64;
            var_24 = ((var_6 <= (((!(arr_20 [i_4] [i_4] [i_5]))))));
            var_25 = var_10;
        }
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            var_26 = (max(var_26, ((((min((var_8 - var_12), ((var_11 ? 463197595792135245 : 7575965239537060458))))) ? 12949689705551280042 : 12062424254073798770))));
            arr_26 [i_4] [i_6] [i_4] = (((var_13 < var_15) ? ((((4285 << 1) < 17945187811734832929))) : (((288230376151711743 && 7473608554475626041) % (var_2 + var_9)))));
            arr_27 [i_4] [2] [i_4] = 1;
        }
    }
    for (int i_7 = 1; i_7 < 16;i_7 += 1)
    {
        var_27 = var_4;
        var_28 = (max(var_28, 1));
        arr_30 [11] = (min((min((~1), (max(var_10, 4285)))), var_12));
        arr_31 [i_7] [i_7 + 1] = (max(((14445307671946437027 | (arr_29 [i_7 + 2]))), (((2929295186 || 4283) % (18446744073709551615 | -968203734)))));
        arr_32 [i_7] = var_14;
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        var_29 += 1048232332;
        arr_36 [i_8] = var_15;
    }
    #pragma endscop
}
