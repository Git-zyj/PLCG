/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~(((!(((var_9 ? -17245 : var_8))))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [4] = (min((((((~(arr_4 [15] [i_1] [22])))) ? (max(11087401952193048584, (arr_6 [i_0] [6] [i_1]))) : 231)), ((((arr_2 [i_0] [i_0]) ? ((((arr_4 [i_0] [i_0] [0]) < var_8))) : (1 & var_7))))));
                    var_14 &= (max((((((var_2 ? 4294967292 : var_4)) - (arr_6 [i_0 + 1] [i_1 + 2] [i_2])))), (max(((max(var_0, (arr_3 [i_0] [i_1])))), ((-436119723468008240 ? 4712996312442528022 : 23845))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_15 = 20857;
                                var_16 = (~-2934335843985713864);
                                arr_13 [i_1] = ((-(arr_0 [i_0] [i_0])));
                            }
                        }
                    }
                    var_17 = (max(var_17, ((((min((arr_2 [12] [17]), (arr_10 [i_0 - 3] [i_0 - 4] [i_0] [i_0] [i_0 + 1] [19]))) & (min((((arr_10 [i_0] [i_1] [i_2] [i_1] [i_1] [i_0]) & (arr_2 [12] [12]))), ((((arr_10 [i_0] [i_0] [13] [13] [i_2] [i_1]) ? (arr_6 [i_2] [i_0] [i_2]) : (arr_11 [16] [i_1 - 3] [i_2] [i_1 - 3] [i_2])))))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_18 |= ((min(0, (arr_2 [i_6 - 1] [i_1 + 2]))));
                                arr_19 [22] [i_5] [i_5] [i_5] [12] |= max((((min((arr_15 [i_0] [20] [i_1 - 2] [2] [i_6] [i_1]), -1643412141)))), ((max(195870823705550064, (arr_14 [i_0] [i_1] [i_1])))));
                                var_19 *= (((((~50427) + (arr_2 [1] [1])))) ? 1 : (((!((((arr_6 [i_0] [i_0] [i_2]) & 18446744073709551607)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = 1;
    #pragma endscop
}
