/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_1] = (((((var_6 * var_9) >> (var_3 % var_3))) > (~1089549959728350031)));
                    var_14 &= (-56 - (arr_3 [i_1] [i_1]));
                    arr_9 [9] [i_0] [i_2] = ((((24 > -1456145991) & (169 < -471598120))));
                    var_15 = 1053770595;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 8;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                arr_21 [i_3] [i_5] [i_3] [i_6] [i_7] = ((((min(1, -123))) % ((~(-56 >= 1)))));
                                var_16 = (min(var_16, ((max((((1 >= (arr_17 [i_3] [i_4] [i_5] [i_6 - 2] [i_7] [i_7])))), ((5116115708268911428 & (arr_19 [i_4] [i_6 + 1] [i_7] [i_7] [i_7] [0]))))))));
                            }
                        }
                    }
                }
                var_17 *= (((((min(1699121867, 63))) | 13)) < ((((max(var_8, (arr_17 [i_3] [i_4] [i_4] [i_4] [i_4] [i_4])))))));
                arr_22 [3] [3] [i_3] = ((max((arr_12 [i_3] [i_3]), var_4)));
                var_18 |= ((((((max(1, 155))))) ? 1 : var_12));
            }
        }
    }
    var_19 = (~1);
    var_20 += var_10;
    #pragma endscop
}
