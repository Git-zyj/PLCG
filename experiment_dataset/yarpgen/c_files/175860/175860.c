/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((((min((25635 & -25635), 25635))) ? ((var_3 ? var_6 : var_0)) : (min((!var_10), (~25635))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 7;i_2 += 1)
            {
                {
                    arr_11 [i_0 + 1] [3] [5] [i_2] = (arr_10 [i_0] [i_0 + 1] [i_0] [i_0 - 2]);
                    var_12 = ((~(((arr_0 [i_2 + 1] [i_0 - 1]) ? (arr_7 [i_2 - 2] [i_0 - 2]) : (arr_1 [i_2 - 3] [i_0 - 2])))));
                    var_13 = (max(818082783041780817, -37));
                    var_14 ^= (((arr_0 [5] [5]) ? 4340325343294777754 : var_6));
                    var_15 = ((~((25635 ? -25636 : 1))));
                }
            }
        }
    }
    var_16 = ((!((max(((238511990 ? 238511994 : -818082783041780818)), (((var_0 << (var_4 - 1685831575)))))))));
    #pragma endscop
}
