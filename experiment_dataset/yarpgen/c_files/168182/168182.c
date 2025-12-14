/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, 228));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = ((((min((max(1, 1)), (1 < 14)))) << ((((((!(arr_4 [i_0] [i_0]))) ? (arr_4 [i_0] [i_0]) : (3928620075 | 1))) - 3928620051))));

                for (int i_2 = 1; i_2 < 9;i_2 += 1) /* same iter space */
                {
                    var_20 ^= (((arr_2 [i_2 + 3]) > (46732 % 1)));
                    arr_9 [i_0] [i_1] = (min((arr_1 [i_0]), 3928620078));
                    var_21 = ((!((((!1) / 1)))));
                    var_22 = 10;
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 9;i_3 += 1) /* same iter space */
                {
                    var_23 = (min(var_23, ((((arr_3 [1] [i_3 + 2] [10]) == ((37543 + (arr_6 [1]))))))));
                    arr_14 [i_0] [i_1] [8] [i_3 - 1] = (arr_3 [i_0] [i_3 + 2] [i_0]);
                }
            }
        }
    }
    var_24 = 4294967295;
    #pragma endscop
}
