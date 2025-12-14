/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (+-460);
    var_20 *= ((-(min(var_11, var_1))));
    var_21 = (max(var_21, ((min(var_5, -1025343370413111639)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_22 &= (min(-1, 1025343370413111639));
                                arr_11 [i_4 - 1] [i_0] [3] [i_2] [i_2] [i_0] [i_0 + 1] = (-1025343370413111640 < 1);
                                arr_12 [i_0] [i_0] [i_0] [i_2] [i_2] [i_0] = ((((min(47322, 1)))));
                            }
                        }
                    }
                    arr_13 [i_0] [i_0] = ((((var_8 ? ((5879041831202097804 ? 1025343370413111649 : var_14)) : 65533))) % 3520940414);
                }

                for (int i_5 = 1; i_5 < 22;i_5 += 1)
                {
                    var_23 = (min(var_23, ((max(33, 65533)))));
                    var_24 = 0;
                    arr_16 [i_0 + 1] [i_0] = var_10;
                    arr_17 [i_5 - 1] [i_5 - 1] [i_0] = ((~(min(774026881, 65535))));
                }
                var_25 -= 0;
            }
        }
    }
    var_26 = (var_0 & (~-25632));
    #pragma endscop
}
