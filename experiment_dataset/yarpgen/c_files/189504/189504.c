/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_7));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_16 = ((((max((arr_0 [i_0]), (((32759 ? -117 : -15)))))) || 174512658856436161));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 19;i_3 += 1)
                {
                    {
                        var_17 = (arr_4 [i_0 - 1]);
                        var_18 = (min(var_18, (((((min(0, -7537577758324412364))) & (max(((min(1535865957, (arr_6 [i_1] [19])))), 5752824173878840692)))))));

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            var_19 &= (13408846859119607058 <= -1479037865);
                            var_20 = 0;
                        }
                    }
                }
            }
            var_21 = (((min(var_12, 73990405012500089))) ? (((((8413412371920533372 ? -8192 : 10332861455436047002))) ? var_13 : (min(5, -1007007215)))) : ((((((max(var_8, 47))) <= var_14)))));
            arr_15 [i_0] = ((((min(27661, 19676))) ? (arr_6 [i_0] [i_0]) : var_5));
            var_22 = (max(var_22, ((min((arr_5 [i_1]), var_3)))));
            var_23 = (var_9 | (max(((-155184219 ? -1513190818 : -2240440596292581703)), ((max(var_12, (arr_9 [i_1] [i_0 - 2])))))));
        }
        var_24 = (min(134217472, 1322740021));
        var_25 &= -17853;
        var_26 += ((arr_14 [i_0] [i_0] [i_0] [i_0] [2] [i_0] [i_0]) / (max(((4520645112206687029 & (arr_1 [7]))), 0)));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        var_27 = (((((10952583213225233822 ? -1862717693 : (arr_10 [i_5] [10] [i_5] [i_5] [i_5])))) ? (arr_2 [i_5] [i_5]) : (!17387211316453756572)));
        var_28 *= arr_4 [i_5];

        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {
            arr_23 [16] [i_6 - 2] &= arr_14 [i_6] [i_6] [8] [i_6] [8] [i_6 - 2] [18];
            arr_24 [i_5] [i_5] = 47185;
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    {
                        var_29 = arr_27 [i_5];
                        var_30 = 7990994222577676520;
                        var_31 = (((963196010 && var_6) ? (((-2147483647 - 1) ? -437940056 : (arr_20 [i_8] [i_8] [i_8]))) : (var_0 || var_5)));
                    }
                }
            }
            var_32 = -759632188802348732;
        }
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            var_33 = ((var_3 == (-13948 * 11890027920407194709)));
            arr_32 [10] [10] [i_5] = ((-(arr_27 [i_5])));
            var_34 = (max(var_34, ((((arr_13 [14] [14] [i_9] [i_9] [8]) ? -18 : var_12)))));
            var_35 = ((((arr_16 [i_9]) ? 32256 : var_13)));
        }
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            arr_37 [i_5] [i_5] [i_5] = (arr_36 [i_5] [i_5] [i_5]);
            var_36 = (min(var_36, var_9));
        }
    }
    #pragma endscop
}
