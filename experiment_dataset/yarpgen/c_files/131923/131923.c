/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_6 ? ((min(var_7, -87))) : var_10));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_14 = arr_0 [2];
        arr_2 [i_0] = (((((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : var_2)) & ((((!(!var_2)))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = ((((((arr_0 [i_1]) && (arr_3 [i_1])))) * ((((((-(arr_0 [i_1])))) != -var_5)))));

        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 8;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        var_15 = (max(var_15, (((((arr_9 [i_4] [i_1] [i_2 + 1] [i_1]) ? (7 - -126) : 75))))));
                        arr_15 [i_1] [i_2 + 1] [i_3 + 2] [i_1] = 1;
                        var_16 = ((min((min(var_11, 239811602), (((var_3 ? var_12 : 9)))))));
                        arr_16 [i_4] [i_1] [i_1] [i_1] = (min((var_2 <= var_6), (((!6672166581076904405) / (max(16, (arr_3 [i_1])))))));
                    }
                }
            }
            arr_17 [6] |= (((((246 / 9) ? (((-(arr_8 [i_1] [i_1] [10])))) : (arr_12 [10] [i_2 + 1] [i_2 + 1] [i_2] [i_2] [i_2 + 1]))) & ((246 ^ (arr_12 [1] [i_1] [i_2 + 1] [i_2] [i_2 - 1] [i_2 - 1])))));
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 9;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    {
                        arr_23 [i_2] [i_2] [i_1] [i_2] = ((-(var_2 <= -119)));
                        var_17 = (min(var_17, (((-127 < (arr_20 [8] [i_2] [i_2] [i_5 - 1]))))));
                        arr_24 [i_1] [10] [i_5 + 2] [i_6] = 80;
                    }
                }
            }
        }
    }
    var_18 = (((((var_4 ? (min(1, 11)) : -2058743776))) ? ((((min(10905254290737988885, var_11))) ? ((55173 ? var_10 : -3796868113059900891)) : (((-5973842241663357413 ? var_8 : 23))))) : var_3));
    var_19 = var_11;
    var_20 = var_5;
    #pragma endscop
}
