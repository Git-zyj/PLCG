/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((var_8 < var_3) >> (var_3 * var_11))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_13 |= ((((!((max(1615261166, 1988328198)))))) << (((arr_3 [i_0] [i_1] [4]) + 74)));
                arr_4 [i_0] [i_1] = (min((arr_2 [i_0]), ((~((max(-312, (arr_0 [i_0]))))))));
                arr_5 [6] [i_1] [i_1] &= 255;
            }
        }
    }
    var_14 = (~var_1);
    #pragma endscop
}
