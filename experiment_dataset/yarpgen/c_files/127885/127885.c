/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_6));
    var_20 -= ((var_17 >= (((((var_8 ? 2927132617774486299 : var_6))) ? (max(var_14, var_4)) : -var_4))));
    var_21 *= var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_22 = ((~((32768 ? 2166244061386630693 : 32789))));
                    var_23 = (min(((var_5 / (arr_0 [i_1 - 1]))), var_11));
                    arr_8 [i_0] [8] [i_1] = (((((var_17 + (arr_2 [i_1 + 1])))) / var_7));
                }
            }
        }
    }
    #pragma endscop
}
