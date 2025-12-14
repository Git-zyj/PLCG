/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (!((min(-8011393604762249635, -8011393604762249635))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_21 = ((var_19 - (((var_3 ? (arr_2 [i_0] [i_1]) : 8011393604762249614)))));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_22 = (((arr_1 [i_0]) ? -14953 : var_19));
                var_23 = (max(var_23, (((((arr_5 [i_0]) && 8011393604762249634))))));
                var_24 ^= -var_18;
                arr_7 [i_0] [i_1] [i_2] [i_0] = ((-1012490153 ? ((1 ? (arr_3 [i_0] [i_0] [i_0]) : 4398045462528)) : (arr_1 [i_0])));
            }
        }
        arr_8 [i_0] = -1;
    }
    #pragma endscop
}
