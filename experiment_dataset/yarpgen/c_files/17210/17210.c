/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            var_20 = (((-9131822076586311859 <= 9131822076586311858) | (3893 != 61660)));
            var_21 -= (min((((!(arr_6 [i_1 + 2] [12])))), var_16));
            var_22 = 2305842992033824768;
            arr_7 [i_0] = ((-61 ? 127 : 1));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_10 [i_2] [i_0] = (max((max(8796093014016, (min((arr_3 [i_2]), var_6)))), (((+(((((arr_4 [i_0] [i_2]) + 2147483647)) << (var_0 - 761482971))))))));
            arr_11 [i_0] = (((((var_12 >> (((min(3907, 16777184)) - 3900))))) || (((-33 ? 0 : 18446744073709551614)))));
            var_23 ^= (32766 && -5132786767664145486);
            arr_12 [i_2] = (arr_8 [i_0] [i_2]);
        }
        var_24 = (max(var_24, (arr_2 [i_0])));

        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_25 = (min((((arr_4 [i_0] [i_0]) % (2305842992033824772 % -2305842992033824751))), (max(((-1 ? var_4 : (arr_6 [i_0] [i_0]))), var_3))));
            arr_15 [i_0] [i_3] = ((~(arr_3 [i_3])));
            arr_16 [i_3] = (((((var_10 ? (min(1, 2924346386)) : (3907 && 65)))) ? 8796093014016 : -9131822076586311850));

            for (int i_4 = 3; i_4 < 22;i_4 += 1)
            {
                var_26 = ((min(0, 25)));
                var_27 = (((arr_19 [i_0] [0] [i_4 + 1]) <= var_10));
            }
            var_28 = (min(var_28, ((((((~(arr_13 [8] [i_0] [i_0])))) ? (((2984083006944453797 ? 2517543713 : 0))) : ((-(var_18 | var_18))))))));
        }
    }
    var_29 = var_3;
    var_30 = (1 >= 1777423582);
    #pragma endscop
}
