/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_10 = (max((arr_2 [i_0]), ((-((var_9 ? var_9 : var_6))))));
                var_11 = ((4364657284384980075 >= (~-1104581354)));
                var_12 = (arr_3 [i_1] [i_1]);
                var_13 &= 100;
            }
        }
    }
    var_14 = var_8;
    var_15 = (((((((1104581380 ? var_3 : var_9)) >= 2147483647))) < var_3));
    #pragma endscop
}
