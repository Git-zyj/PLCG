/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (((-((var_1 ? var_2 : var_6)))));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_13 = (min(var_13, (((+(((arr_0 [i_0 + 2] [i_0 + 2]) / (arr_0 [i_0 - 2] [i_0 + 3]))))))));
        var_14 ^= (arr_0 [i_0 + 2] [i_0 + 2]);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_6 [i_1] = (((((arr_5 [i_1]) ? (arr_5 [i_1]) : (arr_5 [i_1]))) != (arr_4 [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                {
                    var_15 = ((arr_8 [16] [22] [i_3]) % ((min((arr_5 [i_2 + 1]), var_6))));
                    var_16 += (!869174261);
                    var_17 = (max(var_17, (((((var_0 < (-9223372036854775807 - 1))) ? 21341 : (((!(~-5179010523969370270)))))))));
                }
            }
        }
        var_18 -= ((+(min((arr_5 [i_1]), var_5))));
        arr_15 [i_1] |= var_6;
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_19 = (min(((-(arr_17 [i_4] [i_4]))), var_8));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    arr_25 [i_4] [i_4] = var_7;
                    var_20 = (max(var_20, 5112537891095198634));
                    var_21 = ((-((var_10 ? (((-32505 + 2147483647) >> (var_9 - 81))) : (min((arr_7 [i_4] [8] [i_6]), (arr_12 [i_4] [i_5] [i_4])))))));
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        var_22 += var_4;
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                {
                    var_23 |= ((+((9223372036854775807 ? (arr_21 [i_7] [i_9]) : var_9))));
                    arr_34 [i_7] [i_7] = ((((arr_5 [i_7]) != 0)));
                }
            }
        }
    }
    var_24 += var_5;
    #pragma endscop
}
