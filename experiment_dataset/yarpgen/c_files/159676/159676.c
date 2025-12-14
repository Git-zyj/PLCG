/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((((((((arr_3 [i_0]) ? (arr_4 [i_0]) : (arr_4 [i_0])))) != ((2151459507 ? var_0 : (arr_0 [i_0]))))) ? ((-(arr_2 [i_0]))) : (((((var_7 ? 2143507770 : -80)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_18 = ((2151459527 ? (((((80 ? var_13 : 2151459507))) ? 2143507769 : 2151459513)) : var_7));
                            var_19 = ((((max((arr_7 [i_1] [i_1] [i_2]), (arr_1 [i_0])))) ? var_4 : ((((((-(arr_8 [i_3] [i_3] [i_2] [i_2] [i_1] [i_0])))) != ((-1 ? 4177749184073854131 : 80)))))));
                            var_20 ^= (((2018071231 ? 651014583328279901 : (!var_4))));
                        }
                    }
                }
                arr_11 [i_0] = var_13;
            }
        }
    }
    var_21 ^= ((((var_3 > (~1))) ? var_16 : ((var_15 ? (((var_17 ? var_10 : var_6))) : var_14))));
    var_22 *= var_14;
    #pragma endscop
}
