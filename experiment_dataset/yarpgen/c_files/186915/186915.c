/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= 1;
    var_13 ^= ((~(min((var_4 >> 25), var_7))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = 1;
                arr_6 [1] = (min(((1 ? var_3 : (arr_2 [i_0] [i_0]))), (max(((var_3 % (arr_4 [i_0] [i_1]))), 26545))));
            }
        }
    }
    #pragma endscop
}
