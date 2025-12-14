/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= ((((((var_7 ? var_0 : var_10))) ? (17553110935394034947 + 893633138315516683) : (((var_3 ? var_12 : var_6))))) | 17553110935394034978);
    var_18 &= (((1 >> 2) == (((((10 ? var_5 : 893633138315516675))) ? (156 / var_0) : -1065093852))));
    var_19 = ((-var_6 ? var_7 : ((var_11 ? var_13 : 42))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = (((((-(min(var_4, (arr_0 [4] [i_0])))))) ? 3432109245 : var_5));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_9 [14] [i_0] [3] [i_0] [1] = (min((min((((arr_8 [14] [2] [i_0] [0] [8] [9]) ? var_10 : 27)), ((min(115120768, (-32767 - 1)))))), ((max((arr_6 [12] [i_3] [17] [i_3] [16] [i_0]), (195 || var_5))))));
                            var_21 -= (((((((((arr_2 [i_3]) ? (arr_2 [i_3]) : (arr_6 [2] [16] [12] [18] [8] [i_3])))) == (min(var_0, 24493))))) ^ (((-(arr_1 [14]))))));
                            arr_10 [i_0] [5] [14] [15] = (arr_1 [1]);
                            var_22 = 24;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
