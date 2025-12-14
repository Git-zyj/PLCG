/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 += (min(((((max(54, 14459583087400360025))) ? var_5 : ((1 ? var_12 : (arr_5 [i_3] [i_3] [i_3]))))), ((((arr_2 [i_3] [i_1]) ? 53 : -7950)))));
                                var_15 += (((arr_4 [i_1]) ? 54 : ((~(arr_4 [i_0])))));
                                var_16 *= ((~((-(54 - 1064650508)))));
                                arr_14 [i_0] [i_0] [4] [i_3] &= (((arr_2 [i_1] [i_3]) ? ((var_5 + (arr_9 [i_2] [i_2]))) : (arr_9 [i_3] [i_3])));
                            }
                        }
                    }
                }
                var_17 *= (max((arr_8 [i_0] [i_1] [i_1]), 3892608057));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            {
                var_18 = (((max(((max(7680, (arr_15 [i_6])))), 4294967290))) || var_8);
                var_19 ^= -39;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        {
                            arr_24 [i_7] [i_7] [i_7] = (min((arr_22 [i_7] [i_7]), ((((13038748997649424463 || 0) >> (((((arr_22 [i_7] [i_6]) ? 69 : -69)) - 39)))))));
                            arr_25 [i_8] [i_7] [i_7] [i_7] [i_5] = (max(1912890245, var_6));
                        }
                    }
                }
            }
        }
    }
    var_20 = (min(var_20, ((((((var_11 ? (-126 & -54) : ((var_8 ? 18446744073709551615 : 63))))) ? (!-31748) : var_7)))));
    #pragma endscop
}
