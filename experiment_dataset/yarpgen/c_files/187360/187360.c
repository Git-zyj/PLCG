/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 229;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_1] [i_0] [i_0] [i_0] = ((max((arr_6 [i_0] [i_1] [8]), (max(var_11, (arr_3 [i_0] [i_3]))))));
                        arr_13 [i_0] [2] [2] [i_3] [i_0] [i_3] = (min(47, ((~(arr_6 [i_0] [i_1] [i_1])))));
                        arr_14 [i_3] [i_0] = min((min(var_7, (var_8 - 9364332994401839294))), (((var_3 & ((-6804109236714300919 ? 9223372036854775807 : var_4))))));
                    }
                }
            }
        }
    }
    var_16 = (max(var_0, (((var_1 << (252 - 250))))));
    var_17 = (max(18446744073709551615, var_6));
    #pragma endscop
}
