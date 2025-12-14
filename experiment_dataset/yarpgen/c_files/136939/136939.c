/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] |= ((arr_1 [i_0 + 1] [0]) > (((-11049 ? (-11049 >= var_9) : (max(4294967288, 4294967275))))));
                arr_5 [i_1] [i_1] = (((~751391625) ? var_8 : (((var_12 || (arr_3 [i_0] [i_0] [i_1 + 4]))))));
                arr_6 [i_0 - 3] = ((((((arr_2 [i_0 - 1]) ? 169 : (arr_0 [i_0 - 3])))) ? (max(1, (arr_3 [i_0] [i_0 + 1] [i_0]))) : (max(((4 ? (arr_0 [i_1]) : -17599)), var_0))));
            }
        }
    }
    var_14 = 1683002029;
    var_15 = (max(var_15, var_0));
    #pragma endscop
}
