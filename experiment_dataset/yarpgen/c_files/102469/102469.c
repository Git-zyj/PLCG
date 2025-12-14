/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~var_4);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            var_18 = (max(var_18, 238));
            var_19 ^= (arr_3 [i_0] [i_1]);
        }
        var_20 -= (arr_2 [i_0] [6]);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    var_21 |= (arr_10 [i_2] [i_3] [i_4]);
                    arr_15 [i_2] [i_2] = (min((arr_7 [i_2]), (min((max((arr_6 [i_2] [i_2]), -4114043911162246360)), (((-20336 >= (arr_9 [i_2] [i_3]))))))));
                    arr_16 [i_2] [i_3] [i_4] [i_2] = (arr_9 [i_2] [1]);
                }
            }
        }
        var_22 = -5082786946765438592;
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        arr_21 [i_5] = (arr_18 [i_5]);
        arr_22 [2] = (arr_19 [i_5] [i_5]);
        var_23 += 5082786946765438592;
    }
    var_24 = (((((((((var_0 + 2147483647) << (24032 - 24032)))) ? 7 : (max(var_8, var_7))))) | (((min(var_9, var_3)) << (-8441032190199494464 + 8441032190199494474)))));
    var_25 = (89 % var_4);
    #pragma endscop
}
