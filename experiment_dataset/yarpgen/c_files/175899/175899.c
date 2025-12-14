/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((!((!((var_2 >= (arr_3 [i_0] [i_0])))))));
        var_11 = (max(var_11, (arr_0 [i_0] [i_0])));
        var_12 = ((((0 ? (arr_2 [i_0]) : (arr_2 [i_0])))) ? (15 >= 31942) : (arr_2 [i_0]));
        arr_5 [i_0] = (max((arr_3 [i_0] [i_0]), (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : ((max(var_6, 18601)))))));

        /* vectorizable */
        for (int i_1 = 3; i_1 < 16;i_1 += 1) /* same iter space */
        {
            arr_10 [i_1 + 1] [i_0] [i_0] = (arr_3 [i_1 - 1] [i_1 + 1]);
            arr_11 [i_0] = ((4294967280 ? (arr_9 [i_1 - 2] [i_0] [i_0]) : var_0));
        }
        for (int i_2 = 3; i_2 < 16;i_2 += 1) /* same iter space */
        {
            arr_14 [i_0] [i_2 - 3] = (min((((41 >= (arr_7 [i_2 + 2] [i_0])))), (((arr_1 [i_2 + 1] [i_2 - 3]) ? 240 : 201))));
            var_13 = ((arr_13 [i_0] [i_2 + 1]) && 523652504);
        }
    }
    for (int i_3 = 2; i_3 < 11;i_3 += 1)
    {
        arr_18 [i_3 + 1] = ((((!(arr_16 [i_3 - 1]))) ? (min(((65535 ? var_6 : -639880006)), 8)) : ((((!((((arr_7 [i_3 + 2] [i_3 + 1]) + var_8)))))))));
        var_14 ^= ((~(~4294967292)));
        arr_19 [i_3 - 2] = (min(var_10, 0));
    }
    var_15 = var_6;
    #pragma endscop
}
