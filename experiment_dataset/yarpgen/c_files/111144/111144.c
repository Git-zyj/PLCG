/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((127 ? 1 : var_9)) != (var_9 - var_9)))) | (!var_12)));
    var_17 = (max(var_17, ((((-var_12 + var_15) + (((var_11 - 7936) + (var_14 + 44585))))))));
    var_18 = var_10;
    var_19 |= -1416620377;

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = arr_1 [8];
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 21;i_3 += 1)
                {
                    {
                        var_20 = (arr_12 [i_0 + 1]);
                        var_21 = ((((arr_3 [i_3 - 2]) ? ((max((arr_5 [i_0] [15] [18]), (arr_3 [i_3])))) : ((var_8 ? (-2147483647 - 1) : var_15)))) ^ (((((57600 ? (arr_7 [i_0] [i_0] [i_1] [i_0]) : 1))) ? (var_12 | var_6) : ((1683818124 << (((arr_1 [i_0 - 1]) - 454261657)))))));
                        arr_13 [1] [1] [i_2] [i_1] = (((((((max(7914, var_11))) <= (((!(arr_11 [i_0] [i_1] [i_0 - 1] [8]))))))) >> (((max((arr_6 [i_0] [i_0]), ((var_10 ? (arr_5 [i_0 + 1] [4] [4]) : var_0)))) - 58597))));

                        for (int i_4 = 4; i_4 < 21;i_4 += 1)
                        {
                            var_22 = (((~57600) ? (arr_7 [i_1] [9] [i_1] [i_3]) : (((((min(var_10, (arr_9 [1] [i_3])))) >= (((arr_14 [i_1] [i_2] [6]) % var_10)))))));
                            arr_18 [i_0 - 1] [i_1] [21] [16] [7] = (!var_1);
                            var_23 = (min((((arr_16 [i_4] [i_4 - 2] [i_1 + 1] [i_0 + 1] [i_0] [i_0]) ? (arr_16 [i_4] [i_4 - 1] [i_1 - 1] [i_0 + 2] [18] [i_0 + 1]) : (arr_16 [17] [i_4 + 1] [i_1 + 2] [i_0 - 1] [i_0] [i_0]))), 91040667));
                        }
                        var_24 = (((((max(var_8, (arr_12 [i_2]))))) ? 91040667 : 44585));
                    }
                }
            }
        }
    }
    for (int i_5 = 4; i_5 < 19;i_5 += 1)
    {
        arr_21 [4] [i_5] = (arr_0 [i_5 - 1] [i_5]);
        var_25 = (max(var_25, ((-((((min(65529, var_6))) - (arr_11 [i_5 + 2] [i_5] [i_5] [i_5])))))));
    }
    #pragma endscop
}
