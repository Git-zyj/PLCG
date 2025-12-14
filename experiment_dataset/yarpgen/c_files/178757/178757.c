/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((var_10 % var_5) % var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [1] [1] [i_0] [1] = (((-3188252111 < var_8) < (var_6 * 0)));
                                arr_17 [i_0] [i_0] = (max((max((((!(arr_5 [i_0])))), (arr_14 [i_0] [i_1] [i_1] [i_3] [i_0]))), (((((4294967285 ? 12 : (arr_10 [i_0] [i_0] [i_0] [10] [i_0]))) < (arr_15 [i_2 - 1] [i_2 - 1] [15] [i_2 + 1] [i_2 - 1] [i_0]))))));
                                var_18 = ((!(-2126196876 < 2126196883)));
                                var_19 = (((~242) * ((-5491469246484284595 ? 0 : 1240009332))));
                            }
                        }
                    }
                    var_20 = ((((((!((((arr_7 [i_0] [i_0] [i_2 - 1] [i_2]) % (arr_6 [7] [i_0])))))))) < (max((arr_5 [i_0]), (max((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_10 [6] [i_1] [i_2] [6] [i_0])))))));
                    var_21 = (var_10 ? var_16 : ((~(arr_1 [i_2 + 1]))));
                }
            }
        }
    }
    var_22 = (((min(-2126196887, var_13)) < ((var_12 % (~var_15)))));
    #pragma endscop
}
