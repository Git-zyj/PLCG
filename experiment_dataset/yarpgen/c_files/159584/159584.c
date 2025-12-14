/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_10 = (((arr_0 [i_0]) <= (((arr_1 [i_0]) ? (arr_0 [i_0]) : -735510606))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_11 = 17;
                        var_12 ^= 119;
                        arr_9 [13] [13] [i_1] [13] [i_3] = (((arr_5 [i_0] [i_0]) < (((224 ? 176 : (-127 - 1))))));
                        arr_10 [i_3] [i_2 + 1] [i_1] [i_0] = (min(var_7, (((((arr_0 [6]) + (arr_8 [i_0] [i_1] [i_1] [i_1] [i_2]))) >> (var_3 == var_1)))));
                    }
                }
            }
        }
    }
    var_13 = (((15 << (var_4 + 554309801))) | 0);
    var_14 = var_8;
    var_15 = ((((max(var_2, (var_1 / var_3)))) >= (var_0 | var_8)));
    #pragma endscop
}
