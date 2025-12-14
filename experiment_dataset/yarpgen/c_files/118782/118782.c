/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 = (min((max(88, ((min(var_4, var_5))))), (((arr_4 [2] [i_1] [i_1] [i_2]) ? (arr_4 [i_0] [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_0] [i_0] [i_0])))));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_13 = -908877610;
                        var_14 = (arr_7 [i_0] [i_1] [i_0] [i_3] [i_0] [i_1]);
                        var_15 = var_2;
                        var_16 = (min(var_16, (arr_1 [i_1] [i_2])));
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_17 = (((2356207717610039761 * 0) ? ((((((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) / (-127 - 1)))) ? (((max(var_7, var_2)))) : (((arr_10 [i_0] [i_0]) ? var_3 : (arr_2 [i_0]))))) : ((min((1 * 15), -6)))));
                        arr_11 [i_0] [i_1] [i_2] = var_7;
                    }
                    var_18 = ((((max(((((arr_1 [i_0] [i_1]) != var_9))), ((411657627 << (36 - 36)))))) || ((min((((var_8 ? (arr_1 [19] [i_1]) : -411657628))), (arr_10 [i_0] [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_19 -= ((~(min((arr_3 [i_0] [i_0]), (arr_3 [i_2] [i_2])))));
                                arr_17 [i_0] [i_0] [i_2] [i_2] [18] [18] = (((((-411657628 ? 1 : (!794044987083627368)))) ? ((16090536356099511876 << (197 - 145))) : (-2147483647 - 1)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (min(var_20, (((((0 ? 9 : 0)) >= var_1)))));
    #pragma endscop
}
