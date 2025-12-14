/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_13 = (arr_1 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_14 = (max(var_14, (((((((arr_2 [i_0] [4]) ? 466235951 : (3828731344 / 4112064070)))) ? (182903226 <= var_1) : (min((((arr_2 [i_0] [0]) - (arr_3 [8] [8]))), (~182903226))))))));
                        var_15 = (min(((466235951 ? -466235951 : 11240)), ((3602 ? (4112064070 + 0) : -1516848618))));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
        {
            arr_13 [i_0] [i_4] = (arr_2 [i_0] [4]);
            var_16 = var_6;
            var_17 = ((((~(!var_8))) >= (arr_12 [i_0])));
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
        {
            var_18 = (min((!-7550094252484747903), 0));
            var_19 = (min((min(8070450532247928832, 7)), (((-4818405728532662282 + 9223372036854775807) >> 7))));
            var_20 = 0;
        }
        for (int i_6 = 1; i_6 < 9;i_6 += 1)
        {
            var_21 = (max((-26 == var_8), (arr_3 [i_0] [i_6 - 1])));
            var_22 = (max(var_22, var_9));
        }
        var_23 = (max(var_23, (((((((arr_14 [0]) << (((arr_8 [i_0] [i_0]) - 2215136346))))) ? -7550094252484747885 : (((var_1 + 9223372036854775807) << (3828731345 - 3828731345))))))));
    }
    for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
    {
        var_24 = ((1 ? ((((!(10000281693522660002 ^ 4112064070))))) : ((1020 ? 8 : var_11))));
        arr_21 [4] = (((((-(var_0 / var_3)))) ? (min(var_2, var_10)) : 1));
        var_25 = (max(var_6, var_11));
        var_26 = 8796093021184;
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        var_27 = (var_11 >> (549739036672 - 549739036655));
        var_28 = ((10000281693522660002 ? 182903226 : ((4112064069 ? 8446462380186891593 : -8))));
        var_29 = (!182903247);
    }
    var_30 = (!18084);
    var_31 = (min(var_31, ((((((182903226 ? var_5 : (!var_2)))) ^ ((~((var_9 ? var_7 : var_7)))))))));
    #pragma endscop
}
