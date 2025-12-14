/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= 53649;
    var_17 ^= var_10;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] [6] = var_11;
        var_18 &= var_12;

        for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
        {
            var_19 = arr_4 [i_0] [i_1];
            var_20 = 11889;
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                arr_14 [i_3] [i_2] [i_0 - 1] &= (var_3 % -18);
                var_21 = 53653;
            }
            arr_15 [i_0] = ((5304883044310873827 >= (arr_1 [i_0 - 2])));
        }
        for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
        {
            arr_19 [i_0] [i_0] = var_4;
            var_22 += 11883;
            arr_20 [i_4] [i_4] [i_0] = (((-(arr_2 [i_4]))));
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            arr_24 [i_0] [i_5] = ((11102948114841565221 >> (6001043041102729863 - 4713)));
            arr_25 [i_0] = ((!(((var_3 ? (arr_6 [i_5]) : 17309)))));
        }
    }
    #pragma endscop
}
