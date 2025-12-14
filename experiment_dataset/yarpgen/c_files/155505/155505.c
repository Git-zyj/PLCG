/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((min(1, -13)) % var_5));
    var_14 = (((((max(var_2, var_1)))) == var_0));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_15 = ((7292127013021601842 ? -5 : 1));
        var_16 = (((-5 & 21) > -0));
        arr_2 [i_0] = (~var_0);
        arr_3 [i_0] = (((max(13, var_7)) <= var_3));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_8 [i_1] = ((((var_8 & 0) ^ var_0)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 16;i_3 += 1)
            {
                {
                    var_17 ^= ((min(35184372088832, var_11)));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_18 *= (min(0, (-4543991417139961861 + -104)));
                                arr_21 [i_1] [i_1] [i_1] [i_1] [i_2] = ((!(var_5 == var_4)));
                                arr_22 [i_1] [i_2] [i_3] = var_12;
                            }
                        }
                    }
                    var_19 = (((var_0 + 65525) && ((((min(var_5, var_1)))))));
                    var_20 *= var_8;
                }
            }
        }
    }
    var_21 = (min(121, 1));
    var_22 = (min(-1705880015061085394, 4294967295));
    #pragma endscop
}
