/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_16 / var_2);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_19 = (max(var_19, -3534810406309996445));
        var_20 = (!var_4);
    }
    for (int i_1 = 2; i_1 < 24;i_1 += 1)
    {
        var_21 = ((~(((167 << 1) << (((~1750977696) + 1750977717))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_22 = (((arr_8 [5] [5] [10] [i_5]) ? -var_14 : var_14));
                            var_23 = (i_3 % 2 == 0) ? ((((((((((38243077 ? 158 : -2147483624))) ? (arr_6 [i_1] [i_3]) : (var_14 / var_12))) + 9223372036854775807)) << (((var_17 > ((max(-197170399914421334, -5929276428219037333))))))))) : ((((((((((((38243077 ? 158 : -2147483624))) ? (arr_6 [i_1] [i_3]) : (var_14 / var_12))) - 9223372036854775807)) + 9223372036854775807)) << (((var_17 > ((max(-197170399914421334, -5929276428219037333)))))))));
                            arr_13 [i_1] [i_1] [i_3] [i_5] = (-(-1 < 1891967630));
                            var_24 = ((-((((min((arr_4 [i_1 - 2] [i_1 - 2]), var_14))) ? (arr_1 [i_3]) : -162411804))));
                        }
                        var_25 ^= ((4080 != (((!(((8740944085837328509 ? 96 : var_0))))))));
                        var_26 = var_15;
                        var_27 = (arr_1 [i_3 - 1]);
                    }
                }
            }
        }
        var_28 = ((((!(arr_8 [i_1] [i_1 - 2] [i_1 - 2] [i_1 + 1])))));
        var_29 &= (((((682856441 * 3224671329) ? ((((arr_7 [i_1 - 2] [i_1] [i_1]) ? var_2 : var_11))) : 7534398115729453909)) != ((((!(((849045423 ? 1959588428186588286 : var_4)))))))));
    }
    var_30 = var_13;
    #pragma endscop
}
