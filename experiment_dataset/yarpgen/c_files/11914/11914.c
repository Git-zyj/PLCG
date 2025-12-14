/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += var_11;

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min(172, var_10));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_7 [i_0] [i_1] &= var_1;

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                arr_12 [i_0] [i_2] [i_2] = max(1, (((var_9 % 191) % (((var_3 ? 8490427915040844483 : var_8))))));
                var_15 = ((-var_0 % (max(191, 732277665761750530))));
                arr_13 [i_0] [i_0] [i_2] = ((((((((arr_5 [i_0] [i_1] [i_1]) % (arr_5 [i_0] [i_1] [i_2])))) ? (var_9 % 1) : (2233302809559415082 % 93))) % ((((arr_4 [i_0 - 1] [i_0 + 1] [i_0 + 1]) ? (arr_8 [i_0 - 1] [i_0 + 1]) : (arr_8 [i_0 - 1] [i_0 + 1]))))));
            }
        }
        var_16 = (arr_0 [i_0]);

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            arr_16 [i_0] [i_0 + 1] = (((((var_8 % (arr_14 [i_0 - 1] [i_0 - 1]))) * ((((arr_2 [i_3]) ? (arr_10 [i_0 + 1] [i_3] [i_0 + 1]) : 181))))) % (arr_11 [i_0] [i_3]));
            var_17 |= ((2028470033 ? 41838 : 1));
        }
        for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 3; i_5 < 16;i_5 += 1)
            {
                var_18 -= (((((arr_11 [i_5 - 1] [i_5]) % (arr_11 [i_5 + 1] [i_5]))) % (arr_8 [i_0] [i_4])));
                var_19 = ((((((arr_17 [i_5 - 3]) % (arr_2 [i_4 - 1])))) % (((arr_2 [i_4 - 1]) ? var_1 : var_6))));
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_20 = ((18968 ? (max(1, 491536362)) : ((-(((arr_0 [i_0]) ? 58 : 1))))));
                arr_28 [16] [i_4] |= ((var_4 ? var_3 : (~60141)));

                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    var_21 = (((-(arr_0 [i_0]))));
                    var_22 = 181;
                }
                /* vectorizable */
                for (int i_8 = 1; i_8 < 16;i_8 += 1)
                {
                    arr_36 [i_0 + 1] [i_4] [i_6] = ((var_2 ? (arr_2 [i_4 - 1]) : (arr_35 [i_8 + 1] [i_4] [i_6])));
                    var_23 ^= (var_13 % var_7);
                    var_24 = ((var_1 % (arr_4 [i_0] [i_0] [i_6])));
                    arr_37 [i_0] [i_6] [i_6] = ((23697 ? var_12 : (var_9 % 1)));
                }
                arr_38 [i_0] [i_0] [16] |= (191 % 8312179047563933754);
                var_25 = (~(arr_6 [i_0] [i_4]));
            }
            var_26 ^= ((var_0 % (min(var_5, var_9))));
            arr_39 [i_0] [i_0] = var_10;
            var_27 = (min(var_27, (arr_2 [i_0])));
        }
        for (int i_9 = 1; i_9 < 1;i_9 += 1) /* same iter space */
        {
            arr_42 [i_0] [i_0] [i_9] = ((+(((arr_6 [i_0] [i_9]) ? (((arr_19 [i_0] [i_9]) ? var_0 : (arr_30 [i_9] [i_9 - 1] [i_9 - 1] [i_9 - 1]))) : var_6))));
            var_28 = ((-(((!var_11) % var_11))));
            var_29 = (max(var_29, ((((arr_11 [i_0 - 1] [i_0 - 1]) ? ((var_7 % (arr_11 [i_0 + 1] [i_0 - 1]))) : (((-(arr_11 [i_0 - 1] [i_0 - 1])))))))));
        }
    }
    for (int i_10 = 3; i_10 < 22;i_10 += 1)
    {
        var_30 = (arr_44 [i_10]);
        var_31 ^= 0;
        var_32 -= arr_44 [i_10];
    }
    #pragma endscop
}
