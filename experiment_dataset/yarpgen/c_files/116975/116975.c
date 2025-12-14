/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((~(((((-103 ? var_16 : (-9223372036854775807 - 1)))) ? (((arr_2 [i_0] [i_0]) ? var_9 : 90)) : -var_2))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    {
                        var_18 = ((max(9221120237041090560, (arr_0 [i_0 - 1] [i_0 - 2]))));
                        var_19 += ((((((var_4 < (min(var_11, var_13)))))) % (((arr_2 [i_1] [i_1]) | ((max((arr_1 [i_1] [8]), var_6)))))));
                    }
                }
            }
        }
    }
    var_20 = 18386689122760783809;
    #pragma endscop
}
