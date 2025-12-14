/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [8] [18] |= 16039;
                var_15 = 44;
                arr_7 [i_1] = 1;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 16;i_3 += 1)
        {
            {
                var_16 = 17179869056;
                arr_13 [1] = 18446744073709551590;
            }
        }
    }
    var_17 = (max(var_17, var_13));
    var_18 = (min(var_18, var_3));
    #pragma endscop
}
