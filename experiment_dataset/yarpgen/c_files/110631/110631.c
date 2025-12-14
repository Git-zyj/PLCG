/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= ((((~(~180))) ^ (min((min(var_3, var_4)), (~180)))));
    var_20 = (((((-2147483647 - 1) ? 0 : var_9))));
    var_21 -= var_4;

    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        var_22 *= (((((((var_7 ? (arr_1 [7] [i_0]) : (arr_1 [i_0] [i_0])))) ? ((var_17 ? (arr_0 [i_0]) : (arr_2 [1]))) : (arr_0 [i_0 - 3]))) | (((((!(arr_2 [i_0])))) << (var_7 >= 0)))));
        arr_3 [3] = ((((min((arr_2 [i_0 + 2]), (arr_2 [i_0 + 2])))) ? (arr_2 [i_0 + 3]) : (arr_2 [i_0 - 4])));
        var_23 = ((var_10 ^ (arr_1 [i_0 - 3] [i_0 - 2])));
        var_24 = (min(((-(arr_2 [i_0 - 3]))), (min((arr_2 [i_0 - 3]), (arr_2 [i_0 - 3])))));
    }
    for (int i_1 = 3; i_1 < 22;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (((((max(var_6, (arr_5 [1])))) ? -4700829884017308392 : (arr_5 [i_1 - 1]))));
        var_25 = ((((-(~var_4)))) ? (arr_4 [i_1 + 1]) : (((max(1, (arr_6 [i_1 + 2] [i_1 - 2]))))));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_26 = (arr_6 [i_2] [i_2]);
        var_27 -= 1;
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_28 = ((((((arr_6 [i_3] [i_3]) ? (arr_6 [i_3] [i_3]) : (arr_6 [i_3] [i_3])))) / (arr_6 [i_3] [i_3])));
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 20;i_6 += 1)
                {
                    {
                        arr_21 [i_3] [i_6] [i_5] [20] = 3347693720;
                        arr_22 [10] [i_4] [i_5] |= ((~((((arr_5 [i_3]) ^ var_3)))));
                        arr_23 [i_3] [i_4] [11] [i_3] [i_5] [i_6] = ((((((arr_7 [i_4 + 1]) >= (arr_7 [i_4 - 3])))) < (arr_7 [i_4 - 1])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
