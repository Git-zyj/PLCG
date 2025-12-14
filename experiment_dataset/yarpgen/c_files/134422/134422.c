/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((+(max((16573624587667191271 * 0), 1))));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_14 = ((((max(24397, (arr_3 [i_0] [i_0 - 4] [4])))) >> (min(0, (arr_5 [i_0 - 4] [i_0 + 1])))));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_2] [8] = ((((5663374408255362485 ? 1 : 15508067032077653567)) * -12783369665454189130));
                        arr_12 [i_1] [i_3] = (((~1614327269605844697) + var_13));
                        var_15 = var_0;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_16 = (arr_2 [i_0 - 4]);
                        arr_16 [i_4] [i_2] [i_1] [i_0 - 4] = var_1;
                        var_17 = var_5;
                        var_18 = (~12783369665454189130);
                    }
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    arr_19 [i_0 + 1] [4] = var_5;
                    var_19 = (~0);
                }
            }
        }
    }
    var_20 = (min((!var_10), (min(4294967287, var_11))));
    #pragma endscop
}
