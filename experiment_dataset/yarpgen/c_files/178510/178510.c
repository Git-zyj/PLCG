/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((max(var_7, var_11)), ((max(var_7, var_7)))));
    var_13 = (((max(var_4, var_3))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, (((!(((var_5 ? var_4 : ((var_1 ? var_6 : 808556465))))))))));
                    arr_8 [i_1] [i_1] [i_0] = (max(((max(var_4, 31))), ((-(arr_6 [i_0 + 3])))));
                }
            }
        }
    }
    #pragma endscop
}
