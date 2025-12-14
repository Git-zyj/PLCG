/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_10 = 0;
                var_11 = (min(var_11, ((+(((arr_4 [i_1 - 2] [i_1 + 1]) ? 50 : (arr_0 [i_1])))))));
                arr_5 [11] [i_1] [i_0] = (min(((((224 ? 250 : -7443)))), ((1 ? 65 : var_9))));
                arr_6 [i_0] [i_0] [i_0] = -5147358087448732871;
                var_12 *= var_0;
            }
        }
    }
    var_13 = ((((var_2 ? var_2 : 14280808583505459378)) ^ ((((~4294967272) ? var_3 : ((var_1 ? var_3 : 1)))))));
    var_14 = (((((((var_0 ? 1 : var_1))) ? var_1 : ((2 ? var_0 : var_2)))) != ((((var_5 != (var_9 + var_4)))))));
    #pragma endscop
}
