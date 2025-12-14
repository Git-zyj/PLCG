/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_6 [i_1] [i_1] [i_0] = (arr_0 [i_1] [i_0]);
            var_11 ^= var_5;
            var_12 = ((~-13672) >= (arr_3 [i_0] [i_1]));
            var_13 = (max(var_13, (((~(arr_4 [i_0] [i_1]))))));
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    var_14 ^= ((~(arr_8 [i_0] [i_2] [i_0])));
                    arr_13 [8] [8] = (!10537477750757070586);
                }
            }
        }
    }
    for (int i_4 = 3; i_4 < 13;i_4 += 1)
    {
        var_15 ^= (((((var_4 && (arr_5 [i_4] [i_4]))) ? -1310296169 : (((124 == (arr_12 [i_4] [i_4])))))));
        arr_16 [i_4] = -137438953471;
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        var_16 = (max(var_16, var_2));
        var_17 |= (max((((min(var_9, (arr_12 [i_5] [i_5]))) % var_8)), (((-(max((arr_1 [i_5]), (arr_9 [i_5] [i_5] [i_5]))))))));
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        var_18 = (max(((var_9 ? (arr_3 [i_6] [i_6]) : var_6)), (arr_3 [i_6] [i_6])));
        var_19 = 255;
    }
    var_20 = (max(((((7909266322952481030 && 0) < var_6))), (max(164, 48064))));
    var_21 = (((max(1, -44019)) - var_5));
    #pragma endscop
}
