/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(22453, var_7));
    var_13 = 51820;
    var_14 = 2199023255548;
    var_15 = ((((((var_11 ? 1 : -26591))) ? 147544688972658161 : ((max(var_1, var_9))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_2] = -21996;
                    arr_9 [i_0] [i_0] [i_1 - 1] [i_1] = (max((((((~(arr_1 [i_0])))) ? ((23271 ? (arr_1 [i_0]) : var_3)) : (arr_4 [i_0]))), (arr_4 [i_1])));
                    var_16 = ((!((min((arr_4 [i_1 - 2]), var_10)))));
                }
            }
        }
    }
    #pragma endscop
}
