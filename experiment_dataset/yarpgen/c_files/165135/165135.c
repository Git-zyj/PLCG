/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((-(max(var_13, 16783516471624187934)))));

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_21 = ((16783516471624187929 ? 2147483647 : ((max(1663227602085363672, -125)))));
            var_22 ^= (arr_2 [i_0 + 1]);
        }

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_23 = arr_4 [i_0];
            var_24 = (arr_5 [i_0] [i_0] [i_0]);
            var_25 = (max(var_25, ((max((((((var_0 ? -10 : 7)) >= (~124)))), 16783516471624187934)))));
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_26 = (max(var_26, (((!(((((2147483645 << (((((arr_6 [i_3] [i_0]) + 544279763)) - 23)))) / (~var_2)))))))));
            var_27 ^= (arr_2 [i_0]);
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_28 ^= min((((var_7 * 10146091699342218573) ? (arr_8 [i_0] [i_4]) : (arr_3 [i_0]))), (((var_2 && (arr_3 [i_0])))));
            var_29 ^= (arr_10 [i_0] [i_4]);
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 20;i_5 += 1)
        {
            var_30 = (min(var_30, (!2147483647)));
            var_31 = ((+(((arr_15 [i_5] [i_5]) + var_12))));
            var_32 ^= (((var_17 ? (arr_12 [i_5] [i_5] [12]) : var_18)));
            var_33 ^= (arr_10 [11] [i_5]);
        }
    }
    #pragma endscop
}
