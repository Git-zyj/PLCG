/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_8 <= (((((-32 ? var_4 : 11901084901855177179)) <= var_2)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 = ((((((var_2 << (113 - 85))) ^ 1994))) != ((16289565245906543818 / ((~(arr_0 [i_0] [11]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_13 = (((min((arr_7 [i_1] [i_2] [i_2 + 2] [i_2 + 3]), -1757763298))) ? (arr_7 [i_0] [i_2] [i_2] [i_2 - 1]) : (min(var_6, (arr_7 [i_1] [i_2 + 1] [i_2] [i_2 - 1]))));

                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_2 + 2] [i_3] [i_3] = (((((((18446744073709551615 ? 1 : (-2147483647 - 1)))) ? ((87 << (6586175622115768696 - 6586175622115768681))) : ((min(251, 31))))) >> (1964 - 1964)));
                        var_14 *= (((((((var_8 ? -2147483644 : (arr_2 [i_2])))) % ((2147483643 ? (arr_7 [i_2] [i_2] [i_2] [1]) : 1)))) % ((((((~(arr_6 [i_0] [i_1]))) != (var_10 < var_6)))))));
                    }
                }
            }
        }
        var_15 *= 71;
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_16 = (arr_7 [i_4] [4] [i_4] [i_4]);
        var_17 = (min(var_17, ((min(((min((arr_5 [i_4] [i_4]), (arr_5 [i_4] [i_4])))), ((((max(2305547354, var_5))) ? -124 : (arr_12 [i_4]))))))));
    }
    #pragma endscop
}
