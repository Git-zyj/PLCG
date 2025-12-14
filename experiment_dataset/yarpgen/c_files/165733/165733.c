/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((15 * (((((0 ? 133169152 : 255))) ? 2637611846 : (max(861779444, 4294967277))))));
    var_19 = (min(var_19, var_2));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, ((min((max((((9007199254740991 ? (arr_1 [2] [i_0]) : var_9))), (arr_3 [i_2] [i_2]))), (max((arr_1 [i_2] [i_2]), 3421233549)))))));
                    var_21 ^= var_9;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_22 = (((arr_0 [i_2]) < -6085630868433785836));
                                arr_14 [i_0] = 1;
                                var_23 = (((arr_12 [i_0] [i_1] [i_2] [i_3] [i_4]) ? (((((arr_11 [i_4] [i_3 + 2] [i_2] [i_1] [i_1] [i_0] [i_0]) ? (arr_7 [i_0] [i_0] [i_2]) : var_16)) / (((min((arr_7 [i_2] [i_3] [i_1]), (arr_0 [i_0]))))))) : ((((arr_9 [i_3 + 1] [i_3 - 1] [i_3] [i_3 - 1]) ? 103 : (arr_6 [i_3 + 2] [i_3 - 1] [i_3 - 1] [i_3 + 1]))))));
                            }
                        }
                    }
                    var_24 = (max(var_24, (((((max((arr_5 [i_0]), (arr_5 [i_1])))) ? ((max(95, -118))) : (((arr_5 [i_0]) ? (arr_5 [i_1]) : (arr_5 [i_0]))))))));
                    var_25 -= (min((max((max(var_13, 12)), ((((arr_6 [17] [i_1] [1] [17]) ? (arr_7 [i_0] [i_1] [i_0]) : (arr_2 [i_1])))))), ((max((((arr_0 [11]) ? var_12 : (arr_6 [i_0] [i_0] [i_2] [12]))), (arr_5 [8]))))));
                }
            }
        }
    }
    #pragma endscop
}
