/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (-1 / 2110);
    var_11 = (var_2 * 1);
    var_12 = (min(var_12, (((((((-4212618030227102191 & 12) >> (var_1 + 107)))) & -4212618030227102197)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [13] = (arr_4 [i_1 - 2]);
                    arr_10 [i_0] [i_1 - 1] [i_2] = (((2863467109 != (1 > 1431500186))));
                    arr_11 [i_0] [i_1 - 1] [i_0] |= (((((((((arr_3 [i_2]) & (arr_0 [i_0])))) > (14989887808446980829 - 32210)))) * (((!12521) >> (arr_0 [i_2])))));
                }
            }
        }
    }
    var_13 = (min(var_13, 7));
    #pragma endscop
}
