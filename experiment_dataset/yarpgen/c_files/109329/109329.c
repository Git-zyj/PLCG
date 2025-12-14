/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (!var_6);
        var_11 = 3088940178670065777;
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        var_12 = (arr_3 [i_1] [i_1]);
        var_13 ^= (-(!-1));
        var_14 = ((-((3088940178670065777 ? 3088940178670065777 : var_10))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        var_15 = 127;
        var_16 = 144453954;
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                {
                    var_17 = 7935933254476717131;
                    var_18 = (((((~(arr_9 [i_4 - 1])))) || ((var_6 || (-2147483647 - 1)))));
                }
            }
        }
    }
    #pragma endscop
}
