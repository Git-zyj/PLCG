/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_1] = 1;

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_15 |= ((((((0 ? 64588 : 1)))) ? 5036342552746249991 : ((max(((1 ? (arr_4 [i_0] [20] [i_2]) : -8192)), (arr_5 [i_0 - 1] [i_0 - 1] [i_1 - 1]))))));
                    arr_9 [i_1] [i_1] [i_1 + 1] = (arr_7 [i_1]);
                }
                for (int i_3 = 2; i_3 < 21;i_3 += 1)
                {
                    var_16 = 72057594033733632;
                    arr_12 [i_1] = arr_11 [i_1] [i_1];
                    var_17 = (max(var_17, (max((arr_3 [i_3] [i_1]), (max(1, 64512))))));
                }
            }
        }
    }
    var_18 = ((var_14 ? (max(3433942664, var_13)) : (((min(((min((-32767 - 1), 127))), 6848))))));
    var_19 = (min(var_19, 2147483647));
    var_20 = var_2;
    #pragma endscop
}
