/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_13 [i_1] = ((((arr_12 [i_0] [9] [i_0] [i_0] [i_0] [i_0]) >= (((arr_0 [i_0]) % (arr_11 [i_0] [i_0] [i_2] [i_2] [i_3] [i_0]))))));
                            arr_14 [i_1] [i_1] [2] [i_3] = (((1 ^ (arr_5 [i_3]))));
                        }
                    }
                }
                var_18 = ((-14725 ? 65532 : 108));
                var_19 = ((193 ? ((min(var_7, var_11))) : ((var_14 ? ((((arr_9 [i_0] [i_0] [i_1] [i_1]) && 12))) : (!27465)))));
                var_20 = (min(var_20, (((~((166 | (arr_2 [i_1] [i_1]))))))));
                arr_15 [i_1] [i_1] = (((max(-5943552646675445944, var_1)) & (((~(arr_9 [i_1] [i_1] [i_1] [i_1]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 8;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            {
                arr_22 [i_4] [i_5] = ((var_0 + (((min(var_0, (arr_10 [i_4] [i_4] [i_5] [i_4] [i_4] [i_4]))) - ((((arr_3 [1]) * var_16)))))));
                arr_23 [i_5] [i_5] [i_4] = ((((!(!1))) ? ((31921 >> (-6717985971591077745 + 6717985971591077765))) : (arr_17 [i_4] [i_5])));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_21 = 36202;
                            var_22 = (min(var_22, (((((max(32756, (arr_9 [i_4] [i_5] [i_6] [i_7])))) ? (arr_6 [i_5 + 1] [i_4 - 2] [i_4] [i_4]) : (max((max(-4954539483559038463, (arr_24 [i_4] [7] [i_6] [i_4]))), 0)))))));
                        }
                    }
                }
            }
        }
    }
    var_23 = (54469 - 254);
    var_24 *= 41944;
    #pragma endscop
}
