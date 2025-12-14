/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    var_13 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1 + 1] [i_2] [i_0] = (((((var_11 ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (((arr_3 [i_0 + 1] [i_1 + 2]) ? (arr_3 [i_0 - 1] [i_1]) : 7521567308138587681)) : (((arr_3 [i_0 + 1] [i_2]) ? (arr_3 [i_0 - 2] [i_1]) : -4036219663573766650))));
                    var_14 = (+(max((-9223372036854775807 - 1), -84)));
                }
            }
        }
    }
    var_15 = -5827791399590822892;
    var_16 = (min(var_16, -1088515924));
    #pragma endscop
}
