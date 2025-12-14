/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_13 = (((((arr_6 [i_1 + 2]) ? (arr_6 [i_1 + 1]) : (arr_6 [i_1 + 1]))) == ((+(((arr_3 [i_0]) ? 65531 : (arr_0 [i_0] [i_1])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_14 = (min(var_11, ((min(((min((arr_0 [i_1] [i_1]), (arr_8 [i_0] [i_0] [i_2] [i_0])))), (min(0, var_0)))))));
                            var_15 = (min(var_15, ((((arr_4 [i_1 - 1]) ? ((((arr_9 [i_0] [i_1] [i_2] [i_1 - 1] [i_2]) > (arr_4 [i_1 - 1])))) : (((arr_4 [i_1 + 2]) ? var_6 : (arr_9 [i_0] [i_2] [i_2] [i_1 + 1] [i_2]))))))));
                        }
                    }
                }
            }
        }
    }
    var_16 = (+(((var_9 >> 1) & (var_1 <= var_4))));
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                {
                    var_17 -= ((((min(var_8, (min((arr_9 [i_6] [i_6] [i_6] [i_6] [i_4]), (arr_13 [i_6] [i_4] [i_4])))))) || -5389651264639835404));
                    var_18 = (min(var_18, ((min(((((((arr_12 [i_4]) / (arr_1 [i_6])))) ? (arr_3 [5]) : (29307 / 10105))), (arr_3 [i_4 + 1]))))));
                    arr_17 [i_5] [i_6] [i_5] [i_5] = (min((((arr_15 [i_4 - 1] [i_5] [i_6]) ? (arr_15 [i_4 + 1] [i_5] [i_6]) : (arr_15 [i_4 + 1] [i_4 + 1] [i_6]))), (((arr_15 [i_4 + 1] [i_6] [i_6]) ? (arr_15 [i_4 + 1] [i_5] [i_5]) : (arr_15 [i_4 - 1] [0] [i_6])))));
                }
            }
        }
    }
    #pragma endscop
}
