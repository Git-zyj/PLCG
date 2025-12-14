/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_19 = -9103568154974571623;
                    var_20 -= (var_18 * 15205);
                    arr_8 [i_2] = (max(((((max(var_16, var_11))) << (((max(1042029840, var_2)) - 1042029829)))), ((((max(var_6, var_12)) <= var_18)))));
                }
            }
        }
        arr_9 [i_0] = (var_12 || var_1);
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        arr_12 [i_3] [i_3] = ((268433408 != (((max((-1042029825 >= -9103568154974571623), var_5))))));
        var_21 -= ((var_6 / ((((min(-1042029841, -14935))) & (7733988267211498942 * var_11)))));
    }
    var_22 = ((var_14 || ((9103568154974571623 != (-2807538307968567146 / 1042029840)))));
    var_23 *= var_6;
    var_24 = (min(var_24, var_10));
    /* LoopNest 2 */
    for (int i_4 = 4; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                var_25 = 2147483647;
                var_26 = min((((11429038366565247244 >= 2441958192) * -8877220094644576252)), var_11);
            }
        }
    }
    #pragma endscop
}
