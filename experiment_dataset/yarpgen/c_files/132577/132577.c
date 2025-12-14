/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2 + 1] = (max((((arr_4 [i_1] [i_1] [i_2 - 2]) ? 27017 : 48)), ((max(8192, -82)))));
                    arr_10 [i_0 + 1] [i_0 + 1] [i_2 + 1] = ((((((-556854930695589120 ? (arr_5 [i_0]) : (arr_3 [3] [3]))) - (-32767 - 1))) | (((((min(-17355, (arr_8 [i_2] [i_1] [i_2])))) | (((!(arr_1 [i_0 + 1])))))))));
                }
            }
        }
    }
    var_19 = ((((((~var_18) ? (var_11 > 1) : var_15))) + ((var_11 ? 46 : (((max(33168, -34))))))));
    var_20 &= 77;
    var_21 = (((((!-1) - 32368)) * (!var_1)));
    #pragma endscop
}
