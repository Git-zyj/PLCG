/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((var_16 >> (27650 - 27647)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0 + 1] [i_1] [i_2] = (arr_0 [i_0] [i_2]);
                    arr_9 [i_0] [1] [i_2] [i_2] = var_9;
                    arr_10 [10] [1] |= 1;
                }
            }
        }
    }
    var_18 = ((((((var_4 != var_14) < var_16))) == (~var_1)));
    #pragma endscop
}
