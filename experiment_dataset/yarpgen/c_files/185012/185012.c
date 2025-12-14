/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((0 - var_5) - var_2))) + ((-(14 + -1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_1] = ((((((((arr_8 [i_1] [i_1] [i_2]) | (arr_3 [i_0] [i_1] [i_1]))) | -1))) || ((((-(arr_1 [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_13 -= (max((((!(((154 ? 1 : -21880)))))), ((16131410861627696996 * (41 * var_6)))));
                                var_14 ^= ((((!((min(-1, var_2))))) ? (2 + -774131690) : (((!(arr_12 [i_4] [i_4] [i_4] [i_4] [i_0]))))));
                                var_15 -= ((((-(107 == var_4))) >= (~336594896)));
                                var_16 = ((!((((var_2 + -3119) + (((arr_11 [i_0] [i_2] [i_1] [i_4]) ? 66 : (arr_8 [i_1] [i_1] [i_1]))))))));
                            }
                        }
                    }
                    var_17 ^= ((-(arr_2 [i_0] [i_0] [i_0])));
                }
            }
        }
    }
    var_18 = ((~(((((var_0 ? var_1 : -12434))) ? (-121 | 1) : (((var_0 ? var_5 : var_2)))))));
    var_19 = (((((!68451041280) + (var_11 && 21314))) >> (!-89)));
    #pragma endscop
}
