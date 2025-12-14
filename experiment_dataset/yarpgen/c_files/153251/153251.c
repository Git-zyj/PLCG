/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((~(((var_8 && (((var_8 ? (arr_1 [15]) : var_11))))))));
                arr_6 [i_0] = var_2;
            }
        }
    }

    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_9 [i_2] = var_8;
        arr_10 [i_2] |= ((((-(min(var_11, 1482009800)))) / (((arr_3 [i_2] [i_2]) / (arr_3 [i_2] [i_2])))));
        arr_11 [i_2] = (((var_10 % var_4) ? (1 | 32767) : (arr_4 [i_2])));
        arr_12 [i_2] = ((1 ? -55 : -32767));
    }
    #pragma endscop
}
