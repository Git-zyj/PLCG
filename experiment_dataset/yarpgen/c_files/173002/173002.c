/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = min((var_9 != 3), 4406);
    var_11 = -var_0;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_12 = ((((4406 ? ((13309 ? var_6 : var_7)) : (((var_5 ^ (arr_1 [i_0]))))))) || ((((arr_3 [i_1]) + (var_8 >= -94)))));
                    arr_9 [i_2] [i_1 + 1] [i_2] = ((((((arr_1 [i_1 + 1]) < (arr_1 [i_0])))) != 4419));
                    var_13 = var_7;
                }
            }
        }
        arr_10 [i_0] = (-4442 % ((-(max(-2146062067624881991, 4419)))));
    }
    #pragma endscop
}
