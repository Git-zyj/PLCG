/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_18 = ((arr_0 [i_1]) ? (max((arr_0 [i_0]), (arr_0 [i_0 + 1]))) : (arr_0 [i_1 + 1]));
                var_19 &= 0;
            }
        }
    }
    var_20 *= (((14571875642792656131 ? -593512755826274080 : 27625)));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            {
                var_21 = (max(var_21, 97));
                arr_11 [i_2] [i_2] = (4242998746291897720 ? 14203745327417653874 : 128);
                var_22 &= ((min((arr_6 [i_2] [i_2]), -1)));
                var_23 = ((1 ? (arr_7 [i_3 + 1] [i_3 + 1]) : ((~(arr_7 [i_2] [i_2])))));
            }
        }
    }
    var_24 = (max(153, var_2));
    #pragma endscop
}
