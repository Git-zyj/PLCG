/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_1] = ((((9223372036854775801 ? var_11 : 9223372036854775798)) - ((((min(var_3, (arr_0 [i_0])))) ? 9223372036854775786 : ((min((arr_0 [i_2 - 2]), (arr_4 [i_2] [i_1] [i_0]))))))));
                    arr_10 [19] [i_1] [i_2 + 1] = 9223372036854775802;
                    arr_11 [i_0] = ((((((min(1, var_15)) >= (arr_4 [i_0] [i_0] [i_2 + 1])))) == (!var_11)));
                    var_17 = ((((-(arr_4 [i_2 - 2] [i_2] [i_2 + 1])))) ^ (arr_8 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2]));
                }
            }
        }
    }
    var_18 = 25;
    var_19 = ((((((9223372036854775801 ? -9223372036854775781 : 17716801782975927060)))) ? var_12 : var_13));
    #pragma endscop
}
