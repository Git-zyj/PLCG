/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((!(26576 - 2046)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_16 -= ((((min((arr_1 [i_0]), 131072)) / (arr_2 [i_0] [i_0]))));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_17 -= arr_1 [6];
                    var_18 = (((((~(arr_3 [i_0])))) ^ (((arr_6 [1] [1] [1]) & (arr_6 [i_0] [i_1] [i_2])))));
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    arr_9 [i_1] |= (4015247548 == -18802);
                    var_19 ^= ((!(((+(((arr_0 [i_1]) - (arr_3 [i_0]))))))));
                    var_20 ^= max((((!((max(-1047222337202299774, 1874064759)))))), 13408);
                    var_21 = ((((!(arr_5 [i_3] [i_1]))) ? (((0 != (arr_5 [i_3] [i_0])))) : (((!(arr_5 [i_0] [i_1]))))));
                    arr_10 [i_3] [i_3] [i_3] [i_0] = (((arr_5 [i_3] [i_0]) - (((-(arr_3 [i_0]))))));
                }
            }
        }
    }
    #pragma endscop
}
