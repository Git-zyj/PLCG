/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_6 == (min(-var_0, (32767 || 1)))));
    var_16 = (var_7 >= (!var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_6 [i_0] = ((max((arr_1 [i_0]), (var_12 & var_0))) >> (((min(7511195107689490326, -8)) + 54)));
                    arr_7 [i_0] = ((281474976710656 | (((-1161542120395043458 ? 1 : (arr_3 [i_1] [i_0]))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            {
                arr_12 [i_3] [i_3] [5] = ((((max((arr_9 [i_3 - 1]), (arr_9 [i_3 - 1])))) ? ((max(var_10, (((arr_9 [i_3 + 1]) | (arr_10 [i_3] [i_3])))))) : ((~(min((arr_11 [i_3] [i_4 - 1] [i_4]), 1))))));
                var_17 += (arr_9 [i_4]);
            }
        }
    }
    #pragma endscop
}
