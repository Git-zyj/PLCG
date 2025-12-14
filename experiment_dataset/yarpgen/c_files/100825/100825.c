/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_5;
    var_13 = var_8;

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_14 = ((((min((((arr_0 [i_0 + 1]) ? (-2147483647 - 1) : 2739759957)), ((((arr_0 [i_0 + 1]) ^ var_9)))))) ? var_1 : ((((((2147483647 ? -2089275495 : (arr_0 [i_0])))) || (arr_1 [i_0 - 1]))))));
        var_15 = ((~(((((~(arr_1 [i_0 - 1])))) ^ ((2147483633 ? var_1 : 2450121862))))));
        var_16 = (123 % (arr_0 [i_0]));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 24;i_1 += 1)
    {
        var_17 = ((3927378839 ? (-2147483647 - 1) : (arr_2 [i_1 + 1])));
        arr_5 [i_1 - 1] = arr_3 [i_1];
        var_18 = (arr_2 [i_1]);
    }

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = (-2147483647 - 1);

        for (int i_3 = 4; i_3 < 8;i_3 += 1)
        {
            arr_13 [i_3 - 1] = ((!(((arr_10 [i_3 - 2] [i_3 - 3] [i_3 - 2]) || var_9))));
            arr_14 [i_2] [i_3 - 3] [i_2] = 2089275494;
            var_19 = arr_8 [i_3];
            var_20 = (((~(arr_4 [i_3 - 3]))) + var_9);
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {

                /* vectorizable */
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    arr_23 [i_4] [2] [i_4] [i_4] [i_4] |= var_9;

                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        var_21 = (~(arr_1 [i_6]));
                        var_22 = ((~(arr_15 [i_2] [i_4])));
                    }
                    var_23 += ((!((((arr_10 [i_2] [i_2] [i_4]) + 2147483641)))));
                }
                var_24 *= ((!(arr_3 [i_5])));
                var_25 = ((!(!var_0)));
            }
            var_26 = (arr_19 [i_2] [i_2] [4]);
        }
        var_27 = (min(var_27, var_1));
    }
    #pragma endscop
}
