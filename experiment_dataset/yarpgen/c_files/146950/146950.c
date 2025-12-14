/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, 255));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] = (arr_1 [i_0]);
                arr_5 [i_0] [i_1] = ((-608401984842138162 / (((var_2 ? var_4 : (arr_2 [i_0 - 2]))))));
                arr_6 [2] [2] |= var_15;
            }
        }
    }
    #pragma endscop
}
