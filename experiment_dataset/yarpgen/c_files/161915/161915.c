/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, 0));
    var_13 &= (~var_2);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_14 += (max(-7017330645647806458, var_2));
                    arr_8 [i_2] [i_1] = (arr_7 [i_1] [i_2]);
                }
            }
        }
    }
    var_15 |= var_2;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    arr_15 [i_5] [10] [i_4] [i_5] &= (+-18446744073709551615);
                    var_16 += var_10;
                    var_17 = (((((var_9 % (arr_14 [i_4])))) | (((((var_0 ? (arr_6 [i_3] [i_3] [i_3]) : var_8))) ? var_2 : (0 ^ var_6)))));
                    var_18 = (2 | var_4);
                }
            }
        }
    }
    #pragma endscop
}
