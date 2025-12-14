/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_3 ? (((min(var_0, var_8)))) : 8388607));
    var_14 = ((-((-(max(4294967294, var_0))))));
    var_15 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 -= ((+(((arr_3 [i_0] [18]) ? 7 : (arr_3 [i_0] [i_1])))));
                arr_5 [i_0] [i_0] = (((min((arr_2 [i_0]), var_12)) ^ ((~(((arr_3 [11] [i_1]) ? (arr_0 [i_0] [i_0]) : (arr_2 [i_0])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_17 = ((((max(4294967295, 31570))) ? (arr_9 [i_0] [i_1] [i_1]) : ((+(min((arr_11 [i_0] [1] [20] [16] [i_1] [i_0]), (arr_2 [i_2])))))));
                            arr_12 [i_1] = (((~3488261459) ? ((((((12847291409867868094 * (arr_3 [i_0] [i_1])))) ? (((arr_6 [i_0] [i_1] [9] [i_1]) ^ var_2)) : (((var_0 ? (arr_7 [i_2] [i_1] [1]) : (arr_0 [i_3] [i_3]))))))) : (min((arr_10 [i_0] [i_1] [i_0] [i_2] [i_0]), (((arr_4 [i_0]) ? (arr_3 [4] [i_1]) : (arr_7 [i_0] [i_2] [i_2])))))));
                            var_18 = ((((max(-var_3, ((var_2 ? var_12 : var_8))))) ? (((!(arr_11 [11] [i_1] [i_1] [i_1] [i_1] [i_1])))) : ((-2656873828124719752 ? 236 : 7))));
                            arr_13 [i_0] [i_1] [i_2] [i_3 - 1] = ((+((var_4 ? (arr_10 [i_0] [4] [i_2] [i_3 + 1] [i_2]) : (arr_10 [i_0] [12] [i_2] [i_3 + 1] [1])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
