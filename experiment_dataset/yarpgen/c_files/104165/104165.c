/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((((max(var_7, var_9))) ? var_9 : var_6))) || ((((165 + 2147483647) << (((var_8 + 103) - 9)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((113 <= ((((var_6 / 790494044) == ((var_2 ? var_6 : var_3)))))));
                arr_6 [i_0] [i_0] [i_1] = (((~-114) < ((((((114 ? var_6 : var_4))) ? ((var_9 ? 27199 : var_1)) : (((max(var_5, var_7)))))))));
            }
        }
    }
    #pragma endscop
}
