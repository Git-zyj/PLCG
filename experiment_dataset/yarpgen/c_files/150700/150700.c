/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] &= (((((max(1, 25)))) > ((18446744073709551612 ? 103 : -23914696))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_19 = (((((((65531 ? (arr_7 [i_0 + 1] [i_0] [i_2]) : (arr_6 [i_0] [i_1] [i_2] [i_1])))) ? var_13 : (-104 / -117))) >> (((max((arr_1 [i_2 + 1]), (arr_1 [i_2 + 1]))) - 8327446500119142020))));
                            var_20 = arr_3 [i_3] [i_3];
                        }
                    }
                }
                var_21 = ((((!(((-23914696 ? -6 : 15))))) || (((((3747167611 || (arr_1 [i_1]))) ? (!4) : 19931)))));
                var_22 = (min(var_22, (((((min((arr_2 [i_0 + 1]), -5300))) ? ((-(arr_9 [i_1]))) : (arr_1 [i_0]))))));
                var_23 = (!3226831422);
            }
        }
    }
    #pragma endscop
}
