/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 += (((!var_9) ? ((24 ? 201 : 15832093631924970373)) : (var_5 == var_2)));
        var_20 = var_9;
        var_21 = ((~((var_11 ? (~-3057287984753136688) : -576373507))));
        var_22 = (max(var_22, var_6));
    }

    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        var_23 = (~1788238332);
        var_24 = (min(var_24, ((((-5232088714377247417 ? 1647500541 : (~var_10)))))));
        arr_6 [11] = var_2;
    }
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        arr_9 [4] = var_9;
        arr_10 [13] = -10365;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    arr_16 [5] [i_4] [5] [15] = 1279273000585293952;
                    arr_17 [i_4] = ((!(((9642 ? 348493639 : 126976)))));
                    var_25 += ((((-4975005858165614199 ? -6 : -1)) % var_13));
                    arr_18 [12] [i_4] [1] [4] = ((((var_8 & var_6) | (~var_1))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_24 [7] [5] [i_4] [10] [i_4] [14] [1] = 32754;
                                arr_25 [0] [12] [9] [12] [i_4] = (~var_13);
                                arr_26 [i_4] = ((~((var_2 ? (~var_3) : ((var_15 << (var_7 - 1207584570)))))));
                                var_26 = 4835179851903908303;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
