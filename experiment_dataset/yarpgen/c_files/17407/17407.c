/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (~var_12);
        var_21 |= (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_22 = (var_12 % -14211);
            arr_5 [i_0] [8] [i_0] = (arr_4 [i_0] [i_0]);
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
        {
            arr_10 [i_2] [0] [i_0] &= 32752;
            arr_11 [10] |= (536870656 > var_4);
            var_23 = (((arr_9 [i_0] [i_0]) / var_13));
            var_24 = (max(var_24, ((((arr_9 [i_0] [i_2]) - 8)))));
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
        {
            var_25 = 394786209;
            var_26 = (4079627311011933991 >= -14232);
            var_27 = (max(var_27, (var_8 + var_16)));
            arr_14 [i_0] [i_3] = var_9;
        }
        arr_15 [i_0] [i_0] = (var_6 & -234);
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            {
                arr_22 [i_4] [i_5] [i_4] = (arr_18 [i_4]);
                var_28 = (~var_5);
                var_29 ^= ((-((-(7503 == var_15)))));
                var_30 *= ((2 ? (min((((arr_21 [6]) ? (arr_21 [17]) : 50103)), var_18)) : (((+((min((arr_19 [i_4]), -87))))))));
            }
        }
    }

    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        var_31 = ((((((((var_15 ? (arr_9 [i_6] [i_6]) : -2147483641))) ? 0 : (!var_5)))) ? (14198 || -320929363) : ((((arr_9 [i_6] [i_6]) || 3137700355)))));
        arr_25 [i_6] [i_6] = ((((-(-127 - 1))) > 21));
        var_32 = (min((arr_16 [i_6]), ((var_19 >> ((((var_4 ? 11175 : var_17)) - 11156))))));
    }
    #pragma endscop
}
