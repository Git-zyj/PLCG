/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = ((arr_1 [i_0]) < ((-23895 ? var_6 : (arr_1 [i_0]))));
        var_17 = (((min((var_4 >= var_14), -var_7)) - (((var_1 ? (!var_6) : (arr_0 [i_0] [i_0]))))));
        arr_2 [i_0] = ((((((max(17016, 858642884508458227))) != var_10)) || var_15));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            {
                var_18 &= (min((36694 / 15), var_7));
                var_19 |= (((var_2 != var_14) > var_1));
            }
        }
    }
    #pragma endscop
}
