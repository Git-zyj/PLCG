/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = min((((((var_7 ? 51 : var_7))) ? -52 : ((var_5 ? var_7 : var_0)))), (((var_2 ? 1040153980 : -52))));
    var_13 = (var_9 ? (max(((1 ? 786432 : -56)), ((max(1, -16))))) : var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 += 4294967279;
                var_15 = ((min(((6 ? 1152921504590069760 : 1)), 1)));
                arr_4 [i_0] &= (max((1 >= 628090344), 0));
            }
        }
    }
    var_16 = var_1;
    #pragma endscop
}
