/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((min((!var_9), (1259758015 < var_12)))) != var_10));
    var_18 = 2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [i_0] = (arr_1 [i_0] [i_0]);
                arr_8 [i_0] = (!((min(12288, 2))));
                arr_9 [i_0] [i_0] = (((351290935 ? (arr_2 [i_0]) : (arr_5 [i_1 + 1] [i_0] [i_1 - 1]))));
                arr_10 [i_0] [i_0] = ((((((arr_0 [i_0] [i_0]) ? var_14 : var_1)) * 13969807342964060010)));
                arr_11 [i_1] [i_1] [i_1] |= max((arr_3 [i_1 - 1] [i_1]), (arr_6 [i_1 - 4] [i_1] [i_1 - 1]));
            }
        }
    }
    #pragma endscop
}
