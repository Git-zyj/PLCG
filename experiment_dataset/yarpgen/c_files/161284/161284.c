/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((((min(var_2, ((max(22, var_7)))))) ? -192 : (5174662667206183135 >= 3130236650)))));
    var_13 = 9110227442313605700;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = var_8;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_15 = (max(-19, (((1132575282966368512 <= var_11) ? ((min(1, 1164730646))) : (~17314168790743183104)))));
                                arr_12 [i_0] [i_0] [i_2] [i_1] [15] = (min((!560796168283919174), ((var_2 ^ (((-(arr_3 [i_3] [i_4]))))))));
                                var_16 |= var_1;
                            }
                        }
                    }
                }
                arr_13 [i_1] [i_1] [i_1] = ((((min((var_11 == var_11), (~var_6)))) && ((max(3130236652, 1)))));
            }
        }
    }
    var_17 += (((+-216) == ((~((var_1 ? var_10 : var_8))))));
    #pragma endscop
}
