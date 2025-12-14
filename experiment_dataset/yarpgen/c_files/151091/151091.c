/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_3;

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (1686597654 / 65);
        arr_4 [i_0] [i_0] = (min(1686597654, ((0 ^ ((~(arr_2 [i_0])))))));
    }
    var_16 &= var_11;
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                {
                    arr_14 [i_2] [i_3] = (max((arr_1 [i_1]), (((215 && (arr_10 [i_1] [i_2]))))));
                    arr_15 [10] [i_2] [i_3] = ((-(arr_6 [i_1])));
                    arr_16 [8] [i_2] [i_3] = (((((63 << (var_8 - 8970383304135279707)))) ? var_2 : (((16106 ? (arr_7 [i_3 - 1]) : 40)))));
                    arr_17 [i_1] [i_1] [i_2] [i_2] = ((~(arr_6 [i_3 + 1])));
                }
            }
        }
    }
    var_17 = (((((var_6 | var_2) ? ((215 ? var_3 : (-9223372036854775807 - 1))) : (((-9223372036854775807 - 1) ? 3298155065903150134 : var_0)))) != ((max((var_4 / var_1), var_1)))));
    #pragma endscop
}
