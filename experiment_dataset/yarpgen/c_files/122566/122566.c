/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (127 < 65535);
    var_16 &= var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 = ((!((((42 >> (((arr_1 [9]) - 16858738242044823454))))))));
                    arr_7 [i_2] [i_1] [i_1] [i_0] = (((arr_5 [i_2 - 1] [i_2 + 1] [i_2] [i_2]) | (arr_5 [i_2 - 1] [i_2 - 1] [i_2] [i_2 + 1])));
                    arr_8 [i_1] = ((((max((max((arr_0 [i_1 + 3] [i_1 + 3]), 1837555064)), (-1 + -119)))) ? ((((arr_4 [i_1] [i_1] [i_2]) ? (arr_4 [i_1] [i_1] [i_1 + 2]) : 3495543990))) : (max((arr_0 [i_1 - 3] [i_1 - 3]), (arr_0 [i_1 - 1] [i_1 + 3])))));
                    arr_9 [i_0] [i_0] [i_0] &= (-2147483647 - 1);
                }
            }
        }
    }
    var_18 = var_3;
    #pragma endscop
}
