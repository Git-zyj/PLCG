/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (8145381500014492178 % 4194303);
                arr_6 [i_1] [i_1] = (~((2637287574651441751 ? -8145381500014492179 : -2637287574651441768)));
                arr_7 [i_0] [i_0] |= (min(-var_7, (min((min(var_8, var_0)), (((var_2 > (arr_2 [6] [i_1] [5]))))))));
            }
        }
    }
    var_12 |= (min(var_7, var_4));
    #pragma endscop
}
