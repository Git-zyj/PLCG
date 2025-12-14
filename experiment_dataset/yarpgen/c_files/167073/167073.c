/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= ((((min(((var_15 ? 24 : var_2)), ((14635528619060419212 ? var_7 : 17252225491233789282))))) ? (min(((var_15 ? var_13 : var_10)), ((var_7 ? -10 : var_2)))) : (((((var_3 ? var_6 : var_11))) ? (((max(-107, 4064)))) : (max(var_11, 4431219142055186298))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (min((max(((((arr_4 [i_0] [i_0]) ? (arr_7 [i_1] [i_1]) : (arr_0 [i_2])))), (min(3, 17252225491233789291)))), ((max((max(-1875778529, (arr_8 [i_2]))), ((14315713318172654148 ? var_14 : var_5)))))));
                    arr_9 [i_0] [i_1] = (min(((((((arr_2 [i_0] [i_0]) ? (arr_8 [i_0]) : 27))) ? ((max(1093314527, 3))) : ((106 ? (arr_0 [i_0]) : 5387572461967757450)))), ((max(((max(var_7, var_7))), (min((arr_5 [i_1]), 1032317591)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_19 = (((((((max(1, 14202))) ? (((1 ? var_9 : var_2))) : ((4431219142055186298 ? 18 : -1))))) ? (min(((max((arr_7 [i_2] [i_4]), 47596))), (min(7754458068490080945, var_6)))) : (min((max(1194518582475762346, var_8)), ((min(-1093314522, var_3)))))));
                                arr_16 [i_0] [i_4] [i_2] [i_3 + 3] [i_3 + 3] = min((max((max(1194518582475762325, var_10)), (((arr_4 [i_0] [i_0]) ? 0 : (arr_3 [i_0] [i_1] [i_4]))))), (((((min((arr_1 [i_3] [i_0]), 1))) ? ((var_2 ? 1093314527 : var_15)) : (((arr_10 [i_0] [i_1] [i_1]) ? var_5 : var_5))))));
                                arr_17 [i_0] [i_0] [i_4] = (min(((((((37090 ? var_13 : var_3))) ? ((min(var_10, var_9))) : ((32754 ? var_11 : 6717))))), (max(((max(37090, 0))), (max(var_3, var_1))))));
                            }
                        }
                    }
                    arr_18 [i_0] [i_0] |= max(((((max(29, -107))) ? (max(8994358382439485187, (arr_13 [i_0] [i_0] [i_1] [i_1] [i_0] [i_2] [i_2]))) : ((min(1, 1385407446))))), (((1407829910428362485 ? 26289 : 1))));
                }
            }
        }
    }
    var_20 = (max((min((((var_9 ? var_6 : var_14))), ((17252225491233789294 ? var_2 : 8928302369610597170)))), ((max((max(var_13, -1172)), (((37069 ? var_16 : var_1))))))));
    #pragma endscop
}
