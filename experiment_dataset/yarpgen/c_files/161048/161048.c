/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, (((-1 != ((-74 ? 4997444877365113669 : (!-102))))))));
                                var_21 = (min(8, (max(37, var_18))));
                            }
                        }
                    }
                    var_22 = (min(var_22, (((1264151818 ? (((max((arr_12 [i_1 - 1] [i_1 - 1] [0] [i_1 + 1] [0] [i_1 - 3] [i_1 - 3]), (arr_12 [i_1 - 3] [6] [0] [i_1 - 3] [0] [i_1 + 1] [i_1 + 1]))))) : (((arr_12 [i_1 + 1] [i_1 + 1] [10] [i_1 + 1] [i_1] [i_1 - 3] [i_1 - 2]) ? -1105503633617711398 : (arr_12 [i_1 - 2] [i_1 - 2] [10] [i_1 - 2] [i_1 - 2] [i_1 + 1] [i_1 - 1]))))))));
                }
            }
        }
        arr_13 [i_0] = ((((((160578206 ? 1204867731 : 5225143841143002862)) == -2248429209617292415)) ? 2971378253 : (((min((arr_4 [i_0] [i_0] [i_0]), (219 && -5934454939806131214)))))));
        var_23 |= 43;
        var_24 ^= (max((arr_7 [1] [i_0] [i_0] [i_0] [4]), ((-4919792043974775858 - (!var_19)))));
        var_25 &= (arr_2 [i_0]);
    }
    var_26 += var_11;
    var_27 = (max(var_27, (8589934591 + -2)));
    #pragma endscop
}
