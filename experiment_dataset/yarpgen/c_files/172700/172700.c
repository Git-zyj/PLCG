/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(20027, (-32767 - 1)));

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            arr_5 [i_0 - 3] [i_0] [6] &= (((((126 ? (arr_0 [i_0] [i_1 + 3]) : (arr_4 [i_0] [8] [i_1])))) ? (arr_1 [i_1 - 2]) : -5));
            arr_6 [i_1] [i_1 - 1] = 78;
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                var_21 *= ((+(((arr_12 [i_0 - 3]) / var_3))));
                var_22 = (min(var_22, ((min(32767, -4123)))));
                arr_13 [i_0] [i_2] [i_2] [i_0] = (max(87, (arr_8 [i_0])));
            }
            var_23 = ((((((arr_2 [i_0 + 2] [i_0 + 2]) ? (arr_2 [i_0] [i_0 + 2]) : (arr_4 [i_0 + 2] [i_0] [i_0 + 2])))) ? (((((arr_11 [i_2] [i_2]) > (arr_11 [i_2] [i_2]))))) : (((1 + 4107) ? var_8 : ((1 ? -4139 : 516096))))));
            var_24 = (min(4294967295, ((max(-32767, 29)))));
        }
        var_25 = ((~(arr_9 [i_0 + 2])));
    }
    var_26 = var_9;
    #pragma endscop
}
