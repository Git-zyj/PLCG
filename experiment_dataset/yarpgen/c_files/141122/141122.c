/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_17 = (min(var_17, -1));
                            var_18 = ((((max((arr_5 [i_3]), -31444))) && (((23283 ? (arr_2 [i_1 - 2] [6]) : (!27))))));
                        }
                    }
                }
                arr_12 [i_0] [i_0] [i_1] = (arr_0 [i_0]);
            }
        }
    }
    var_19 = ((-var_11 ? var_0 : var_5));
    var_20 = (min((((!((min(var_13, var_15)))))), (!var_8)));
    var_21 = (~(((!((max(6446965772802257891, 23283)))))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 4; i_5 < 10;i_5 += 1)
        {
            {
                arr_20 [i_4] = (arr_14 [i_4] [i_4]);
                var_22 -= (min((arr_6 [i_5] [i_5]), ((((((arr_4 [12]) ? -31463 : (arr_13 [10] [0])))) ? (((((arr_8 [i_4] [i_4] [i_5] [i_5]) && var_9)))) : (arr_9 [2])))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 0;i_7 += 1)
                    {
                        {
                            arr_27 [i_4] = (max(1, ((+((min((arr_18 [i_4] [i_6] [i_6]), (arr_7 [i_4] [i_5] [i_6]))))))));
                            var_23 *= (arr_24 [i_4] [i_4] [i_4] [i_4]);
                            arr_28 [i_4] = (i_4 % 2 == 0) ? (((((((arr_8 [i_7 + 1] [i_7 + 1] [i_5 + 2] [i_4]) > 81))) << (((((arr_4 [i_4]) ? (arr_4 [i_4]) : var_1)) - 3210031138))))) : (((((((arr_8 [i_7 + 1] [i_7 + 1] [i_5 + 2] [i_4]) > 81))) << (((((((arr_4 [i_4]) ? (arr_4 [i_4]) : var_1)) - 3210031138)) - 2408189437)))));
                            var_24 = (arr_18 [i_6] [i_4] [i_6]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
