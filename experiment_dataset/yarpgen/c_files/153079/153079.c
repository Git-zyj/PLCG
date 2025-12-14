/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_17 = (arr_6 [i_0]);
                    var_18 = (((((((4294967291 ? 1445015955 : 1445015955))) ? ((min(1445015955, 1))) : (arr_6 [i_1 + 1]))) < (((var_11 ? (arr_9 [i_2 + 1] [i_1 + 1] [i_1 + 1]) : (arr_9 [i_2 - 1] [i_1 + 1] [i_1 + 1]))))));
                }
            }
        }
    }
    var_19 |= (var_6 * var_13);
    #pragma endscop
}
