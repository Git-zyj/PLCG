/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_10 = (((var_2 ? (~-33) : -var_6)));
                                var_11 = min(((((!var_6) ? (var_1 && 3605198249) : (((511 && (arr_4 [5] [i_3] [i_4]))))))), (max(var_8, (var_9 != var_2))));
                            }
                        }
                    }
                }

                for (int i_5 = 4; i_5 < 14;i_5 += 1)
                {
                    var_12 = ((var_2 > ((((((43611 ? (arr_12 [i_0] [i_0] [14] [i_0]) : 23910))) ? (~var_2) : var_3)))));
                    var_13 = ((((var_5 % (arr_16 [5] [i_1] [i_0] [i_0]))) > (((!(arr_8 [i_5] [i_5 - 2] [10]))))));
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            {
                                arr_27 [i_8] [i_7] = ((~((23 ? (arr_14 [i_0 - 1] [i_1] [12]) : (arr_14 [0] [i_1 + 1] [6])))));
                                arr_28 [0] [i_8] = ((23910 | ((-0 >> ((((var_7 ? (arr_25 [0] [0] [12] [12] [i_8]) : var_0)) - 222))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (max(var_14, var_4));
    #pragma endscop
}
