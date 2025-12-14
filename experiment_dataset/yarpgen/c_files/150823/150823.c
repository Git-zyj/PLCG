/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    var_11 -= ((((-(min(var_1, var_3)))) & ((((!(~3205298306)))))));
    var_12 = (min(var_3, 71));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = (max(((-(max(var_4, var_9)))), ((((9219 + 0) ? (((!(arr_1 [i_0])))) : ((~(arr_1 [i_0]))))))));
        arr_2 [15] = var_3;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {
                    var_14 = (((((min(var_6, 1))) + 0)));
                    var_15 -= (4496 & ((-(arr_5 [i_2 - 4] [i_2 - 4] [i_1]))));
                }
            }
        }
        var_16 = (max((!var_7), (max(3952862207, ((min(var_5, 0)))))));
    }
    #pragma endscop
}
