/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    var_15 = ((!((((((4639222842414082423 ? 4 : 2961017685578647504))) ? var_3 : var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_0 + 2] = ((((max((~var_5), ((3641899947310148943 << (6517201449322210947 - 6517201449322210946)))))) ? ((var_10 ? (arr_5 [i_0 + 1]) : (arr_6 [i_0] [i_1 - 1] [i_1 - 1]))) : (!6517201449322210947)));
                arr_8 [i_0] [i_0 - 1] = (max((((var_7 > (arr_0 [i_0 + 1])))), ((var_4 * (arr_5 [i_1 + 1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_16 = var_3;
                            var_17 ^= ((-(!var_5)));
                            var_18 = ((((max(-76, var_11))) ? (((!((min(2961017685578647518, 11929542624387340694)))))) : (arr_11 [i_1 + 1] [19] [i_2] [19] [i_3])));
                        }
                    }
                }
                arr_14 [7] = ((~((max(91, -29007)))));
            }
        }
    }
    var_19 = (~var_7);
    #pragma endscop
}
