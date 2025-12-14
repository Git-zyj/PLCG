/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (~var_11);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_19 &= ((((-(arr_1 [1]))) / -2147483637));
                var_20 = 1109785874;
                arr_6 [i_0] [i_0] [1] = (!50);
                var_21 = (min(var_21, ((min(((var_2 ? -1 : ((-(arr_4 [i_0] [i_0] [i_0]))))), var_2)))));
            }
        }
    }
    #pragma endscop
}
