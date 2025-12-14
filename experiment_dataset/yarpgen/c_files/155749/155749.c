/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 ^= -1711387777;
                    arr_7 [i_0] [i_1] [i_2] = -var_12;

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_19 = (((var_7 ? var_10 : 18446744073709551615)));
                        var_20 = ((((var_13 ? 52 : (arr_0 [i_0])))) ? (~var_6) : 0);
                    }
                    var_21 = (min(var_21, (arr_10 [6] [i_1] [6] [i_0])));
                }
            }
        }
    }
    var_22 = var_12;
    var_23 = var_14;
    var_24 = var_7;
    #pragma endscop
}
