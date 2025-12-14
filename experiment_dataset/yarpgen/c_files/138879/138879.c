/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((min(((var_5 ? var_3 : var_7)), (1 | 1)))) ? var_5 : (((~(min(var_3, var_6)))))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (i_0 % 2 == zero) ? (((((((((arr_0 [i_0]) ? 1 : -2835081224287103820)) << (459 - 401)))) ? (((((var_7 ? var_3 : (arr_2 [i_0] [i_0])))) ? 1 : var_3)) : ((max((arr_0 [i_0]), (arr_0 [i_0]))))))) : (((((((((((arr_0 [i_0]) ? 1 : -2835081224287103820)) + 9223372036854775807)) << (((459 - 401) - 58))))) ? (((((var_7 ? var_3 : (arr_2 [i_0] [i_0])))) ? 1 : var_3)) : ((max((arr_0 [i_0]), (arr_0 [i_0])))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_12 = var_2;
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_13 [12] [i_0 - 1] [10] [i_0] [i_1] = ((~(arr_9 [i_3] [i_3])));
                        var_13 = 15;
                        arr_14 [i_0 - 1] [i_0] [i_2 - 2] [i_3 - 2] [i_1] [i_0] = (((arr_10 [i_0] [i_0 - 1] [i_0] [i_0]) ? var_6 : var_2));
                        var_14 = var_0;
                    }
                }
            }
        }
        arr_15 [i_0] = ((((((-127 - 1) ? 1 : 1))) ? (((arr_11 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]) >> (var_3 - 591763690))) : (((var_5 ? (arr_0 [i_0]) : var_5)))));
        var_15 = (max(var_15, (arr_2 [i_0] [i_0])));
    }
    var_16 = (!(!0));
    #pragma endscop
}
