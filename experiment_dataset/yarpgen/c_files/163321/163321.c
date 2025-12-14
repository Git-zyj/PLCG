/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [3] = (((3012386571365920762 / 9223372036854775807) && (((((max((arr_0 [i_0] [i_0]), var_0))) ? var_1 : 27)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    {
                        arr_12 [i_3] = 137;
                        arr_13 [i_0] [4] [i_2] [7] = (((min((((-1 <= (arr_6 [i_0] [i_1] [6] [11])))), (arr_6 [i_2 - 1] [i_3 + 1] [i_2 - 1] [i_3 + 1]))) < (~var_6)));
                        var_11 = (max(var_11, (((((((1204104462 / -1547740444) << var_8))) ? ((((((var_7 ? (arr_10 [i_1] [i_2]) : (arr_11 [2] [2] [i_2] [9])))) <= (arr_1 [i_1] [6])))) : (max((arr_5 [0] [i_2 + 2] [i_3 + 1]), ((-(arr_5 [8] [9] [4]))))))))));
                        arr_14 [i_2] = (((((~((32768 ? 752777550 : 1204104461))))) * ((((var_0 >= (arr_1 [i_1] [i_3]))) ? (((arr_1 [i_0] [i_0]) / var_9)) : var_2))));
                        arr_15 [i_0] [i_0] [i_2] [i_3] = ((~(min((arr_8 [3] [i_2 - 1] [i_3 + 1]), (arr_8 [i_2] [i_2 - 1] [i_3 + 1])))));
                    }
                }
            }
        }
        var_12 = (~3012386571365920746);
    }
    var_13 |= (((~3012386571365920759) < var_9));
    #pragma endscop
}
