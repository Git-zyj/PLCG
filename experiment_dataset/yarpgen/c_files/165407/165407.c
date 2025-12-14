/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = 13767675501014192701;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1 - 2] [i_2] = (((((-(arr_5 [i_0]))))) ? (arr_4 [i_3]) : ((((~(arr_10 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0]))) + (arr_8 [i_1 - 1] [i_1 + 1] [i_1 - 1]))));
                            var_18 *= (~4679068572695358915);
                            arr_12 [i_2] [i_2] [i_2] [i_0] [i_0] = ((-(((arr_10 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3]) ? ((89 ? (arr_7 [i_3] [i_2] [i_0]) : 4679068572695358914)) : (arr_8 [i_0] [i_0] [i_0])))));
                        }
                    }
                }
            }
        }
    }
    var_19 &= ((-(((~104) & var_0))));
    var_20 = var_8;
    #pragma endscop
}
