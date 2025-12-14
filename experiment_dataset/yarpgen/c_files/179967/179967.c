/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = (arr_5 [i_2] [i_1] [i_0]);
                    var_15 = 7794821878719787933;
                    var_16 *= 14762912999146728042;
                }
            }
        }
        var_17 = ((~(!-32681)));
    }
    var_18 = ((-9741 ? (((var_2 == (max(var_10, 65527))))) : ((min((max(16380, 78)), (min(var_3, 65535)))))));
    var_19 = ((~((max((var_10 > var_4), (-46 && var_9))))));
    var_20 = var_7;
    #pragma endscop
}
