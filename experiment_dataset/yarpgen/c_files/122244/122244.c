/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((var_2 ? ((var_8 ? var_5 : var_0)) : var_5))) ? (!var_10) : 2814524684);
    var_12 = (max(var_12, 7));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_1] = (arr_2 [i_0 - 2] [i_1]);
                var_13 ^= (((-26144 + 2147483647) << (1480442612 - 1480442612)));
                var_14 = ((var_7 ? ((((!(arr_0 [i_0] [i_1]))))) : (max(var_5, var_4))));
            }
        }
    }
    var_15 = (max(var_15, var_5));
    #pragma endscop
}
