/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [1] = 1073741823;
                arr_7 [i_0] [i_1] = 1;
                arr_8 [3] [i_1 - 1] [3] = 1073741824;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 18;i_3 += 1)
        {
            {
                arr_13 [i_2] = 3221225472;
                arr_14 [i_2] = 1073741823;
            }
        }
    }
    #pragma endscop
}
