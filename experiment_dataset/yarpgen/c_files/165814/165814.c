/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= ((~((((max(-19273, var_6)) >= 40)))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = var_4;
        var_12 = (min(var_12, ((max(((~(var_1 <= 51))), (max((~var_8), ((max(98, var_5))))))))));
        arr_3 [i_0] = (max(((-(arr_1 [i_0]))), var_4));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 4; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    var_13 = ((~(arr_1 [16])));
                    var_14 = (!var_4);
                    arr_11 [i_3] = 65532;
                }
            }
        }
    }
    #pragma endscop
}
