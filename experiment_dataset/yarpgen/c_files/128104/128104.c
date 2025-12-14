/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_15 ? ((175 ? ((var_2 ? var_11 : var_15)) : ((175 ? 175 : 127)))) : ((var_11 << ((((min(175, 127))) - 118))))));
    var_19 |= -1;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    var_20 = ((max(14200601055730233, 7814182164572510143)));
                    arr_9 [i_0 - 1] [i_0 - 1] = (((((arr_8 [i_2 + 1] [i_2] [i_2]) && (-127 - 1))) ? ((((arr_5 [i_0] [i_0] [i_0]) || (arr_8 [i_0 + 1] [i_1 + 2] [i_2 + 1])))) : (!var_10)));
                    arr_10 [i_0] [i_0 - 1] [i_0] = 4294967295;
                    arr_11 [i_0] [i_0] = (min(((max((arr_7 [i_0 - 1] [i_1 + 1] [i_1 + 1]), 0))), 0));
                    arr_12 [i_0] [0] [i_2 - 3] [i_2 - 3] = 0;
                }
            }
        }
    }
    var_21 += (max(((max(0, 1))), ((var_4 << (var_5 + 81)))));
    #pragma endscop
}
