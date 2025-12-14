/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= ((((499233812 ? 63 : 7313989510290980193))) ? ((((!(39 | var_4))))) : var_5);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_15 = ((191 ? ((min(((var_3 <= (arr_0 [i_0]))), (!5039)))) : (arr_0 [i_0])));

        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            arr_4 [i_0] [i_0] = (92 | 25);
            var_16 = 8085795561767508762;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_17 += -6026821534189010818;
            var_18 ^= (var_5 >= 192);

            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                arr_10 [i_0] [12] [i_0] = -412589442;
                arr_11 [i_3] [i_0] [4] = var_2;
            }
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                var_19 = (((5076374076638123491 + var_6) || 202));
                var_20 = var_3;
            }
        }
        var_21 = (min(var_21, ((max((((6026821534189010802 ^ 6422638463392511586) != 0)), (((-(arr_1 [i_0])))))))));
    }

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_22 = (~191);
        var_23 = (((209 % var_11) * (max(7313989510290980197, (var_11 % var_2)))));
    }
    var_24 = (min(var_24, (((((min(-703953264, ((-6026821534189010806 ? var_0 : var_10))))) == ((1 | (min(-2783436216584645601, var_2)))))))));

    /* vectorizable */
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        arr_19 [6] [1] = 230;
        arr_20 [i_6] = (((2783436216584645600 ? (arr_18 [i_6]) : var_9)));
    }
    #pragma endscop
}
