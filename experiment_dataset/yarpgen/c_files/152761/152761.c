/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((114 && var_5) >> (((max((-32767 - 1), -8192))))));

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0 - 3] = var_5;
        var_16 = (min(var_16, (((-37 ? -23898 : -15043)))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_5 [i_1] = (max((min(10, 27804)), 57));
        var_17 = (min(var_17, (((-8192 ? -86 : 41)))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        arr_13 [i_1] [i_2] [i_3] &= 66;
                        arr_14 [i_1] [i_2] [i_3] [i_4] = 214;
                    }
                }
            }
        }
        arr_15 [i_1] [i_1] = ((((((((0 ? var_10 : var_5))) && ((((((arr_8 [i_1]) + 2147483647)) >> (7257 - 7228))))))) >= (arr_9 [i_1] [i_1] [i_1])));
    }
    var_18 = (min(var_18, (max((min((!var_7), 124)), (max(var_4, var_6))))));
    #pragma endscop
}
