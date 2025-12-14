/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_12;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 = 0;
        var_18 = 90;
        arr_2 [i_0] [i_0] = (~166);
        arr_3 [i_0] = 6;
        var_19 = (min(var_19, 9854639502135490760));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_20 = (~243);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    {
                        arr_14 [i_3] [i_2] [i_3] [i_4] |= ((((((arr_9 [i_3]) ? 3534743222 : (arr_7 [i_3])))) ? ((148523852 ? 42498 : -128)) : 12));
                        var_21 ^= (((min(91, 4146443451))) ? (min(148523852, 89)) : (arr_8 [i_1] [i_3]));
                        arr_15 [i_1] [i_2] [i_3] [i_4] = 1;
                    }
                }
            }
        }
    }
    var_22 = (max(var_11, ((((var_13 ? var_6 : var_9))))));
    var_23 = (((5041540770517198938 > var_8) ? var_7 : 23037));
    #pragma endscop
}
