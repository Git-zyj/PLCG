/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (((((max(var_1, (var_8 < var_11)))) ? var_3 : ((((0 == 18) >= 235))))))));
    var_13 = ((((var_6 ? var_11 : (65535 ^ var_11))) == var_2));
    var_14 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = ((((var_8 ? (arr_1 [i_0 + 1]) : var_1)) < (((arr_3 [i_0 + 3]) ? var_2 : 255))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_16 += ((((min((arr_8 [i_0 - 1] [i_2 - 1]), var_4))) ? (max(((max(235, 235))), (((arr_9 [i_3] [i_1] [i_2] [6] [i_2] [i_3]) ? (arr_12 [i_0] [i_1] [i_0] [i_3]) : 39993)))) : ((18 >> (var_8 - 14)))));
                            var_17 -= (((((var_11 ? (arr_7 [i_2 - 1] [i_0 - 1]) : var_9))) ? (((35 != ((max(1, var_11)))))) : ((((((arr_4 [10]) + 964485692)) <= (((((arr_7 [i_0] [i_2]) || (arr_1 [i_0]))))))))));
                            arr_13 [i_2] [i_1] [i_2] = (((((3234631072 ? var_7 : var_7))) ^ (((arr_8 [i_0 + 1] [i_2 - 1]) | (arr_11 [i_2] [1] [i_2 - 1] [i_2])))));
                            var_18 = (min(var_18, (((((((max((arr_11 [i_3] [i_1] [i_3] [i_2]), (arr_2 [1])))) ? ((230 | (arr_5 [10] [i_3] [i_2] [14]))) : 4294967282)) > ((39998 ? (arr_7 [i_0 - 1] [i_2 - 1]) : (arr_7 [i_0 + 3] [i_2 - 1]))))))));
                        }
                    }
                }
                var_19 = (((((0 ? (arr_7 [i_0 - 1] [i_1]) : var_7))) ? (((max(65535, 1)))) : (((arr_6 [i_1]) + var_9))));
                var_20 = ((((62 ? 3853 : (-127 - 1)))) || ((max(var_0, -29))));
            }
        }
    }
    #pragma endscop
}
