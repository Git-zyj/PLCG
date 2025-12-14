/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_14 = (max(var_14, ((max(-3007974113496003125, -3007974113496003113)))));
                var_15 = (((arr_0 [i_0 - 3] [i_0]) ? (((((((arr_6 [6] [i_1 - 1]) ? (arr_4 [i_0 - 3] [i_0 - 3]) : var_0)) + 9223372036854775807)) << (((-3007974113496003113 + 3007974113496003127) - 13)))) : (((((var_6 ? 16252928 : -3007974113496003113))) ? 3007974113496003125 : var_3))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                arr_12 [i_3] = (max(((3007974113496003125 ? 0 : (max(3782025929250239018, var_10)))), (arr_8 [i_3] [i_3])));
                arr_13 [i_2] [i_3] = ((5075845328595448855 ? 12718043540629033058 : -1407328321));
            }
        }
    }
    #pragma endscop
}
