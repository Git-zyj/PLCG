/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        var_14 = -var_0;
                        arr_10 [1] [i_1] [i_1] [i_1] [i_2] [i_3] |= (min(((1 ? var_4 : (arr_8 [i_0] [i_0] [i_3 - 1]))), ((max((arr_0 [i_0 + 1]), (arr_7 [i_0 + 2] [i_1] [i_2]))))));
                    }
                    arr_11 [i_0] = ((~((~(max((arr_9 [i_2] [i_1] [0] [11] [i_1] [i_0]), var_6))))));
                    var_15 ^= (((min((arr_1 [i_0 + 1]), (arr_1 [i_0 + 3])))) ? -var_3 : (max(46, var_12)));
                }
            }
        }
    }
    var_16 |= (((((((!460757542) || ((min(0, var_9))))))) % (max(var_4, ((min(var_5, 1)))))));
    #pragma endscop
}
