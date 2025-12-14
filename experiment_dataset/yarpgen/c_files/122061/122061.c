/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [i_2] = ((1147891903795583588 ? 995357695 : -1));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_20 = ((((1641290655 > (-127 > 254))) && (((((((arr_5 [i_0] [i_1] [i_1]) / var_16))) * var_10)))));
                                arr_13 [i_0] [21] [i_0] [i_2] [i_0] [i_0] = (((var_0 + var_2) + (((((1641290646 ? 1 : 27))) ? (((var_14 ^ (arr_2 [i_1] [i_3] [i_4])))) : 17610303081404457140))));
                                arr_14 [i_2] = (((var_1 == (var_6 % var_13))) ? (18014398509481983 + var_7) : (((((var_6 + 18428729675200069630) && (15 >= 96))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (max(var_21, ((((((var_4 ? ((221 ? var_14 : 3184368033867908535)) : (402653184 % 254)))) ? var_15 : (-7586 < 0))))));
    var_22 |= (((((var_0 * var_4) || (var_7 + var_15))) ? var_10 : var_14));
    #pragma endscop
}
