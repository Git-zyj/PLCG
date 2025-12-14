/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((max((-127 - 1), ((var_12 ? var_3 : var_7)))) > (var_5 || var_4)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_21 = ((!(((((!(arr_6 [i_4]))) ? (((((arr_13 [i_0] [i_1] [i_3] [i_3] [i_4 + 2]) && -899868894)))) : (min(var_14, (arr_13 [i_4] [14] [i_3] [i_3 - 1] [i_4]))))))));
                                var_22 = ((((((arr_9 [2] [i_0] [1] [i_0 + 1] [i_4 - 1]) ? (arr_9 [i_0 - 3] [i_0] [i_0] [i_0 + 1] [i_4 + 1]) : (arr_3 [i_4 - 1])))) ? (-899868877 / -899868877) : (max((arr_3 [i_4 - 1]), (arr_3 [i_4 - 1])))));
                            }
                        }
                    }
                    var_23 = (max((((((-899868916 ? (arr_12 [8] [14] [1]) : (arr_13 [i_0] [i_1] [2] [i_0] [i_1])))) ? 899868897 : (arr_6 [i_0]))), ((min((max(-899868886, 12288)), 2821011357)))));
                    var_24 = ((((((!(arr_9 [4] [i_0 + 1] [4] [13] [6]))))) == (arr_9 [i_0] [i_0 - 1] [i_0] [i_0] [5])));
                    var_25 = min(1, ((+((((arr_10 [i_1] [i_1] [i_2] [i_1] [i_0 - 1] [i_2]) < (arr_5 [i_0 + 1] [i_1] [8])))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 24;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                var_26 = (max((((!(((var_3 ? var_12 : -1749579393)))))), 899868897));
                                var_27 = ((~(!1473955939)));
                                var_28 = (((((min(var_7, (arr_16 [i_5])))) ? var_19 : -55)));
                            }
                        }
                    }
                    var_29 = var_10;
                }
            }
        }
    }
    #pragma endscop
}
