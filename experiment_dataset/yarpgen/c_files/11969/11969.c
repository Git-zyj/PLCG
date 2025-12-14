/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_8 [i_0] = ((((((~(arr_5 [i_0]))))) << (var_6 - 975243249)));
                arr_9 [i_0] [11] [i_0] = (max((arr_5 [i_0]), var_9));
                arr_10 [i_0] [i_1] = 61387;
                var_10 = ((((((9846 ? 52909 : var_0)) / (arr_4 [i_0] [i_1]))) * ((var_2 ? (arr_2 [i_0]) : (2099888111 ^ var_6)))));
                var_11 = ((52909 - (min((~var_0), var_8))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                arr_16 [i_2] [i_3] = (((arr_12 [i_3] [5]) >> (((((((var_7 ? var_4 : (arr_7 [i_3] [i_2])))) ? (arr_6 [i_2]) : (((arr_15 [i_2] [i_2] [6]) / -1594808566)))) + 843672254))));
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 8;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        {
                            var_12 ^= var_9;
                            arr_23 [2] [i_4] [i_4] [i_5] = max(((((var_7 ? var_1 : (arr_1 [4]))) * var_7)), var_5);
                            arr_24 [i_2] [i_2] = -1689221468;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        {
                            arr_31 [i_2] [i_2] [i_2] [i_2] = (((((!(arr_7 [i_6] [i_6]))) ? (~65526) : (var_9 >= var_2))) | (((-53744 < ((var_0 ? var_0 : (arr_13 [i_6] [i_3])))))));
                            var_13 += (((45832 ? (arr_22 [i_7] [i_3]) : (arr_22 [i_2] [i_3]))));
                            var_14 = (arr_14 [i_6] [i_7]);
                            arr_32 [i_2] [i_3] [i_6] [i_7] = (46337 ? 11791 : 20165);
                        }
                    }
                }
            }
        }
    }
    var_15 = ((((63886 | ((var_0 ? var_3 : var_9)))) != (min(46651, var_6))));
    var_16 &= min((-var_1 - 28882), (((((var_0 ? var_5 : var_8))) ? -var_5 : (-2099888117 >= -2099888122))));
    #pragma endscop
}
