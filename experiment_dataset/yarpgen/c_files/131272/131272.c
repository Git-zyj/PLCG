/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] [i_2] = (((((((var_3 ? (arr_2 [i_0]) : (arr_6 [i_3] [i_2] [i_1]))) == (((((arr_3 [i_2]) != (arr_11 [12])))))))) - (((!(((arr_5 [i_0] [i_2]) && var_6)))))));
                            var_16 = (i_2 % 2 == 0) ? (((((((arr_5 [i_0] [i_2]) | (((arr_7 [i_0] [19] [i_0]) >> (((arr_8 [i_1] [i_1] [i_2]) - 3040317835256557727))))))) ? (min((arr_5 [i_0] [4]), (var_9 != var_6))) : (1 < -82)))) : (((((((arr_5 [i_0] [i_2]) | (((arr_7 [i_0] [19] [i_0]) >> (((((arr_8 [i_1] [i_1] [i_2]) - 3040317835256557727)) - 6017858737131650771))))))) ? (min((arr_5 [i_0] [4]), (var_9 != var_6))) : (1 < -82))));
                            var_17 = (min((max((arr_4 [i_2]), (min(var_0, (arr_6 [i_0] [i_0] [i_0]))))), (((var_7 ? ((~(arr_2 [i_2]))) : (var_5 || var_6))))));
                        }
                    }
                }
                var_18 = (arr_9 [i_0] [i_1]);
                arr_13 [i_1] [i_0] [i_0] = ((((+(((arr_2 [i_0]) / var_12))))) ? ((-var_11 & (arr_8 [i_0] [i_0] [i_1]))) : var_4);
            }
        }
    }
    var_19 = (((-(var_1 == var_5))));
    var_20 = ((-(~1)));
    #pragma endscop
}
