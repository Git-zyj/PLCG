/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_5 ? var_16 : 16368);
    var_19 = (max(var_19, var_13));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_20 = (((~16445265994095329152) << (127 - 113)));
                                var_21 = -var_11;
                                var_22 = (((32704 & (arr_10 [i_0] [i_4 - 1] [i_4] [i_4 + 1]))));
                                var_23 = 890358495;
                            }
                        }
                    }
                    var_24 = (((((arr_12 [i_1] [i_1] [i_2] [i_1] [i_2] [i_2]) ? 3570562972 : 32760)) < var_0));
                }
            }
        }
    }
    #pragma endscop
}
