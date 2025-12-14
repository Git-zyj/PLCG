/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_13 = ((65520 ? 27358 : 1748335387));
        var_14 = (max(var_14, (!1748335396)));
        var_15 = ((255 ? 241 : 1748335387));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 = 0;
                    var_17 = (max(var_17, (!243)));
                    arr_8 [8] [i_2] = ((524287 << (-1748335381 + 1748335386)));
                    var_18 ^= -1748335389;
                }
            }
        }

        for (int i_3 = 3; i_3 < 8;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    {
                        arr_16 [i_3] [i_5] [i_3] = ((1748335405 ? 1748335387 : 226));
                        arr_17 [i_0] [i_5] [i_0] [i_0] = ((((1748335405 ? 0 : 0))) ? (!120) : 1053909206);
                        arr_18 [i_4] [i_4] [i_3] [i_3 + 1] [i_3 + 2] [i_4] &= (((((16561302707522716400 >> (-6897779208801708024 + 6897779208801708062)))) ? 65535 : 12));
                        var_19 = -24202;
                    }
                }
            }
            arr_19 [i_0] = ((-1748335406 ? 6 : -1007604152761993972));
            var_20 = ((-7088791255323462520 ? (!1) : 216));
        }
    }
    var_21 = ((~((var_10 ? (~-1007604152761993956) : var_0))));
    #pragma endscop
}
