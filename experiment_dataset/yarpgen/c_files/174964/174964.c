/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= var_12;

    for (int i_0 = 3; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_19 ^= (((arr_0 [i_0]) % (~5)));
        arr_2 [i_0 + 1] [i_0] = ((227508917 ? -765502251 : 5486209248376169310));
    }
    for (int i_1 = 3; i_1 < 17;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {
            var_20 = (arr_7 [i_1]);

            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                var_21 = (max(var_21, (((var_15 ? 15994 : var_3)))));
                var_22 = (((var_2 % var_11) ? ((min(203, 128))) : (((!(203 >= 33))))));
            }
        }
        for (int i_4 = 2; i_4 < 16;i_4 += 1)
        {
            arr_14 [i_4] &= (((!-var_13) ? ((var_2 ? ((var_1 ? (arr_4 [i_4]) : var_15)) : 72)) : (((+(((arr_13 [i_4] [i_4]) % var_11)))))));
            var_23 = (max(((var_6 ? (arr_8 [i_4]) : 32767)), ((min((!381191640), (arr_13 [i_1] [i_4 + 2]))))));
            var_24 |= (min((((((arr_8 [i_1 - 1]) - var_11)) << (!var_12))), (((!(var_8 + var_9))))));
        }
        for (int i_5 = 2; i_5 < 17;i_5 += 1)
        {
            var_25 = (((11860832035336483232 << 33) && (!5797756012035586638)));

            for (int i_6 = 1; i_6 < 15;i_6 += 1)
            {
                var_26 = var_7;
                arr_20 [i_1] = (max(((~(max(var_15, 255)))), (((18446744073709518852 ? ((var_11 ? (arr_17 [i_6] [i_6] [i_6 + 2] [i_6]) : 4906)) : 216)))));
                var_27 = -6275;
                var_28 -= 5797756012035586641;
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                arr_23 [i_1] [i_1] [14] = (min(-50, 18446744073709518832));
                var_29 -= (((((1054288037 || -1) || (203 && var_12)))) != var_9);
                var_30 += var_10;
                var_31 = ((((!(((var_16 >> (var_12 - 1669974092)))))) ? -11575411156376825968 : (((((12860244319331863606 ? 87 : 1)) >> var_17)))));
            }
        }
        var_32 += (!-32316);
    }
    var_33 = (((((var_16 ? var_11 : (var_3 - 6212500016410018115)))) ? var_9 : var_11));
    #pragma endscop
}
