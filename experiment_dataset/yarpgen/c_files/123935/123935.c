/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((var_12 ? var_3 : var_14))) ? var_2 : var_4)) & -var_15);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [1] [i_0] [i_0] [i_0] [i_0] = ((((4503599090499584 ? (arr_6 [i_1 - 1] [i_3] [i_1 - 1] [1]) : (4173464583 <= 10366332798850222268))) * ((max(var_3, 3)))));
                                var_19 = 8080411274859329348;
                                arr_12 [i_4] [i_1 - 1] [i_2] [6] = ((((min((arr_0 [i_3]), 1655704496))) < ((min((((arr_6 [i_0] [i_1] [i_0] [i_3]) ? var_13 : -1422823275)), (!5546694056272720328))))));
                            }
                        }
                    }
                    arr_13 [i_0] [i_1] [i_2] = (((((1 ? (arr_9 [i_0] [i_0] [i_0] [i_1] [i_1] [i_0] [i_2]) : (arr_9 [i_0] [i_1] [i_2] [i_1] [i_2] [i_1 + 1] [i_0])))) || ((((arr_8 [0] [i_1 + 1] [i_0] [i_0] [i_0] [i_0]) ? (arr_8 [i_0] [i_0] [i_0] [i_0] [11] [i_0]) : (arr_8 [i_1] [3] [0] [i_1 + 2] [i_1] [i_1]))))));
                    var_20 = (min(var_20, (((min((((arr_8 [i_0] [i_1] [3] [i_0] [i_1] [i_0]) > var_9)), (arr_7 [i_1] [i_1] [i_2] [i_1] [i_0])))))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    arr_16 [i_0] [i_1] = ((((((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : var_1))) ? var_4 : (((3 ? -1475271482038454408 : (arr_0 [i_0]))))));
                    var_21 *= (!var_17);
                    var_22 = (arr_2 [i_0]);
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            {
                                var_23 = var_1;
                                arr_23 [i_0] [i_1] [i_6] [i_8] [i_8] |= -41613;
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 ^= var_11;
    #pragma endscop
}
