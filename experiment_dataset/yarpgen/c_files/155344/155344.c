/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, ((max((min((~var_10), (((-2147483647 - 1) / 2147483647)))), var_9)))));
                    var_16 = (min(var_16, (-2147483647 - 1)));
                    var_17 = (!6);
                    var_18 = (((2147483647 < -1770811245) || var_14));
                    var_19 = (max(var_19, (((var_3 & ((~((1371580603251029935 ? (-9223372036854775807 - 1) : 3517994766)))))))));
                }
            }
        }
    }
    var_20 = (!var_0);
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {
                arr_15 [i_3] [i_4] = var_1;
                var_21 = ((((2147483641 && (arr_1 [i_3 + 3] [i_3 - 1])))));
                var_22 -= (min((arr_3 [i_4] [16] [16]), ((32758 == (arr_6 [i_3 + 3] [i_3 + 2])))));
            }
        }
    }
    #pragma endscop
}
