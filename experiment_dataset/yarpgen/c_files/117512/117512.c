/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_20 = (((2210800912 % (arr_1 [i_0]))) >= (arr_1 [i_0]));
                arr_4 [6] |= (2498617648133852954 || 23);
            }
        }
    }
    var_21 = (min(var_19, (max((var_11 & var_10), 0))));
    var_22 = -479284609064971938;
    var_23 = 536862720;
    #pragma endscop
}
