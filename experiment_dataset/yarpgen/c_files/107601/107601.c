/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((65535 ? 65535 : -32745));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 = max((max(((var_13 ? var_6 : (arr_1 [i_0]))), ((var_12 ? 1073741823 : 3538795427042145314)))), (min((max((arr_5 [8] [10] [i_0]), (arr_5 [2] [i_1] [i_1 - 1]))), var_9)));
                    var_21 = (~(((-(arr_2 [i_1] [i_1] [i_1])))));
                    var_22 = (max((~-var_1), ((min((((!(arr_6 [2] [i_1] [i_1] [i_1 + 2])))), (max(-1, 2)))))));
                    var_23 = ((~((max(23720, 34204)))));
                }
            }
        }
    }
    #pragma endscop
}
