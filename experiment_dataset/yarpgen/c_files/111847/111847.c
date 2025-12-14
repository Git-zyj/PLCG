/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] |= (min(((((max(var_7, var_1))) ? (((((arr_0 [i_0]) < 31553)))) : (max(6563160931802544559, 10544981955485717286)))), (((((((arr_1 [i_0]) < (arr_0 [i_0])))) >> ((((max((arr_1 [i_0]), (arr_1 [i_0])))) - 38703)))))));
        var_12 = (((min(((var_10 / (arr_0 [i_0]))), ((11883583141907007057 ? -1207831673 : var_4))))) ? ((((((arr_1 [i_0]) ^ 2097151)) >> (((arr_1 [i_0]) - 38703))))) : (((((arr_1 [i_0]) ? 6563160931802544559 : var_6)) % var_8)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 13;i_3 += 1)
                {
                    {
                        var_13 = (((((((11883583141907007070 < (arr_9 [i_0] [i_1] [i_2 - 1] [i_2] [i_3 - 1])))) % ((min((arr_4 [i_0] [i_0]), (arr_8 [i_0] [i_0] [i_2])))))) + ((((max(var_11, var_3))) >> (1207831670 - 1207831656)))));
                        var_14 = (max(var_14, ((((((((min(54, 18285))) ? ((((arr_4 [0] [i_3]) & 34))) : (var_2 | 128)))) ? (((((arr_8 [i_0] [i_1] [i_2]) + var_10)))) : (min(((var_0 ? (arr_0 [i_0]) : var_4)), (max(var_4, var_1)))))))));
                        var_15 *= (((((arr_10 [i_1] [4] [i_1] [i_0] [4]) - var_0)) - var_11));
                    }
                }
            }
        }
        var_16 = ((min(var_2, (var_7 != var_10))));
    }
    var_17 = 135;
    #pragma endscop
}
