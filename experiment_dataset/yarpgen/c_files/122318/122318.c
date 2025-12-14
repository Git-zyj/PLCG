/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_1;
    var_21 = ((min(var_15, 24)));
    var_22 &= var_19;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0] [i_0] = (((((~(((arr_0 [i_0]) ? (arr_0 [i_1]) : (arr_7 [i_1] [i_0])))))) ? ((0 ? var_1 : (max((arr_6 [i_0] [2]), (arr_1 [i_0]))))) : var_15));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_23 += ((-(arr_12 [i_2] [i_2] [i_2])));
                            var_24 = (~11252227554870138746);
                            arr_16 [i_0] [i_0] [i_2] [i_0] = (((((arr_14 [i_0] [i_0] [i_1] [i_3] [i_1]) <= (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (arr_14 [i_0] [i_0] [i_2] [i_0] [i_3]) : (((arr_14 [i_3] [i_0] [i_2] [i_0] [i_0]) ? 7142 : (arr_14 [i_0] [i_0] [i_2] [i_3] [i_0])))));
                            var_25 = (min(var_25, (!var_15)));
                            var_26 = ((((((12588 - 18446744073709551606) == (((arr_1 [i_0]) ? 1392103756 : (arr_12 [i_0] [i_2] [8])))))) == (arr_10 [i_0])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
