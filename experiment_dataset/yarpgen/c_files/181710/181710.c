/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 ^= ((-(((arr_2 [i_0]) + (arr_1 [i_0])))));
        var_18 = (min(var_18, (((4 ? (21680 == 1073741824) : -1055476971)))));

        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                arr_8 [i_2] [i_0] [i_0] [i_0] |= (((((arr_3 [i_2]) == -21681)) ? ((((arr_3 [i_0]) || (arr_4 [0] [i_1])))) : ((-21681 ? 3670016 : -1497036108))));
                var_19 = (max(var_19, (((-1055476967 ? (arr_4 [i_1 + 1] [i_1 + 1]) : 0)))));

                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    var_20 = (arr_9 [i_0] [i_1 + 3] [i_2] [i_3] [i_2] [i_3]);
                    var_21 += (((arr_5 [i_1 + 3] [i_1 - 2] [i_1]) ? 63 : (arr_5 [i_1 - 2] [i_1 - 1] [i_1 - 2])));
                    var_22 ^= (1055476967 % 2071163895388612742);
                    var_23 = (((arr_6 [i_1 - 1] [i_1 - 1] [4]) ? (((arr_2 [6]) / 6372493810518707238)) : (((45992 ? 1967035584 : (arr_6 [i_0] [i_1] [i_2]))))));
                }
            }
            var_24 = 0;
            var_25 ^= -0;
            var_26 = (max(((-(arr_9 [i_1 - 2] [i_0] [i_0] [i_0] [12] [i_0]))), ((-21681 ? 379730195 : 19553))));
            var_27 = (max(((7 ? (arr_4 [i_1 - 3] [i_1 - 2]) : (arr_4 [i_1 - 3] [i_1 - 2]))), ((max(0, (arr_3 [i_1 - 2]))))));
        }
        var_28 ^= ((-(((((-1928853938 ? 65535 : (arr_6 [i_0] [i_0] [i_0])))) - (max(18446744073709551600, (arr_10 [i_0] [i_0] [i_0] [i_0] [12] [2])))))));
    }
    var_29 -= var_12;
    #pragma endscop
}
