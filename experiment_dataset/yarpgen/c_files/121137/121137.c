/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((17077 || (((~(109 | 244))))));

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_13 += ((~(min(((var_9 ? 33 : 1)), var_2))));
        var_14 += ((((max((((arr_2 [6]) ? var_11 : var_7)), var_5))) || var_3));
        arr_3 [6] [6] = arr_1 [i_0] [i_0];
        arr_4 [0] = (min(var_6, (min(var_2, (28 / 7783276128410778991)))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 += 1825826399;
                    arr_10 [i_2] [4] [i_2 - 1] = var_11;
                    var_16 = (17397404007831803300 | 12915840802566496964);
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        arr_13 [i_3] = (!-25);
        var_17 = (~37435);
    }
    #pragma endscop
}
