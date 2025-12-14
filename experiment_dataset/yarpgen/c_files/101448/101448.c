/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            var_10 = ((37 || ((min(var_7, ((167 % (arr_1 [i_0]))))))));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_11 = (((((~(((arr_5 [i_0] [i_1 + 1] [8]) ? 255 : 119))))) ? ((max(244, -15428))) : (min((-1209308001 / -15435), (!46171)))));
                var_12 = (max(4294967290, 3205));
                arr_8 [i_0] [i_0] [i_2] [i_2] = (min((min(15427, (255 / 15427))), -7824582673723731220));
            }

            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                var_13 = (((~(251 != var_5))));
                arr_11 [5] &= (((arr_0 [7]) ? 15456 : (((!(arr_0 [1]))))));
            }
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                var_14 *= (((((-93 ? (arr_7 [5] [i_1] [i_4]) : 59)) << ((((min(var_7, -60))) - 92)))));
                var_15 ^= ((((min((!var_8), (var_4 != 21)))) & (85 || -5919171104829763473)));
            }
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {

                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    var_16 *= 23228;
                    arr_19 [i_0] [i_0] [i_1] [i_5] [i_6] = 127;
                    var_17 = (((max((~var_5), (1254454215 / 7049357885943453993))) >= 49));
                }
                var_18 = (max(var_3, (arr_16 [i_0])));
                var_19 = ((((!((((arr_1 [i_0]) ? var_9 : 22223)))))) <= var_9);
            }
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                var_20 *= (max(var_2, ((~((var_7 ? var_2 : (arr_18 [i_0] [i_0] [i_0])))))));
                arr_22 [i_0] [3] [i_7] = (((~(arr_9 [i_0] [i_1 + 1] [i_7] [i_1 - 1]))));

                /* vectorizable */
                for (int i_8 = 1; i_8 < 9;i_8 += 1)
                {
                    var_21 = -60;
                    var_22 = (arr_7 [5] [i_1 - 2] [i_1]);
                    var_23 ^= (((var_6 && var_9) ? (2512125223 & 19) : (arr_14 [i_0] [i_1 - 1] [i_0] [i_8 + 1])));
                    var_24 = (max(var_24, (5883643181861474747 ^ var_3)));
                }
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    var_25 = (!-1);
                    arr_29 [i_0] [4] [i_7] [i_9] = ((~(((((-1 < (arr_27 [i_0] [i_1 - 2] [i_7] [i_9] [i_9])))) << 1))));
                }
                arr_30 [2] [i_1 - 1] [i_7] [i_7] = ((((((0 - var_7) ? var_1 : (((arr_5 [i_0] [i_1] [3]) + 10))))) ? ((min(var_6, (((!(arr_1 [0]))))))) : (((((arr_24 [i_0] [i_0] [i_0] [i_0] [2] [i_0]) && 9)) ? (((-64 ? 44910 : var_7))) : var_4))));
            }
        }
        var_26 += 501836079302897285;
    }
    var_27 = (((((max(209, var_9)))) * var_6));
    #pragma endscop
}
