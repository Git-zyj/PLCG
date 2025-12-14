/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_17 ^= ((((min((arr_4 [i_0 - 1] [i_1 + 1]), (arr_4 [i_0 + 2] [i_1 + 1])))) ? (min((arr_3 [i_0] [i_1 + 2]), 18175770498727577206)) : (((((!-29859) || var_2))))));
                arr_6 [i_1 - 1] [i_0 + 3] [i_0 + 3] = ((!(((var_10 ? 1481220379756343105 : (arr_1 [i_0] [i_0 + 3]))))));
                var_18 = 18175770498727577206;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            {
                arr_12 [16] |= -524160;
                arr_13 [i_2] = (max(12126, (min((6423 / -1035659132832788052), (arr_4 [i_2] [16])))));
                var_19 = (arr_9 [5]);
            }
        }
    }
    var_20 = (min(var_20, ((max(((var_9 ? 18175770498727577200 : var_14)), ((max(-6427, -1545))))))));
    var_21 = -5352434020188908512;
    #pragma endscop
}
