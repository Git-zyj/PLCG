/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;
    var_21 = ((((((min(1, -7722069180345310593))) ? var_19 : var_15)) < var_13));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_22 = (min(var_22, ((min(1, 14865610822811572344)))));
                    arr_9 [i_2] [i_1] [i_0] = ((1 ^ (((!(((1 ? (arr_8 [i_1]) : 30411))))))));
                    var_23 = (max(var_23, ((min(1, -209702276336857755)))));
                    var_24 = ((~(min(209702276336857754, var_15))));
                }
            }
        }
    }
    #pragma endscop
}
