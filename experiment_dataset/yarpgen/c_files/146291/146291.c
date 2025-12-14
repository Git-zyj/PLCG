/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;
    var_19 = var_7;
    var_20 = ((-(((((var_17 << (var_11 - 4582803399414694838))) > (var_5 && var_0))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_21 *= ((((max((min(var_1, var_16)), ((-(arr_1 [i_0] [i_0])))))) ? (~10976095962758228691) : (((arr_1 [i_0] [7]) ? var_9 : ((2895958459 ? 10055033204556947805 : 1399008836))))));
        var_22 = 1399008848;
        var_23 = (min((max(72057594037927936, (!3328442010))), -30663));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 15;i_2 += 1) /* same iter space */
        {
            var_24 = (max(2895958459, 77));
            var_25 ^= (((arr_5 [i_2 - 1]) ? (min((arr_5 [i_1]), (~18446744073709551613))) : ((+(((arr_6 [2] [i_2]) ? 3 : 10803181727635347613))))));
            var_26 = 41539;
        }
        for (int i_3 = 3; i_3 < 15;i_3 += 1) /* same iter space */
        {
            var_27 = ((((((((var_7 ? var_0 : (arr_10 [3])))) ^ ((var_8 ? var_17 : (arr_7 [i_3 - 2])))))) && ((((max(255, (arr_4 [i_3 - 3])))) || (((18446744073709551615 ? var_1 : 1920)))))));
            arr_11 [0] [i_1] = ((((((((2649398574 ? var_2 : var_17)) > (((-(arr_3 [i_1] [i_1])))))))) & (arr_8 [i_1] [i_1])));
            var_28 = (min(var_4, (min((72057594037927926 + 14341), (((var_16 << (((var_7 + 55501106) - 23)))))))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        arr_16 [i_1] [4] [0] [i_1] [4] = (~(max((arr_8 [i_3 - 1] [i_3 - 1]), (~var_17))));
                        var_29 = max(-var_8, (((~(min(var_3, 14341))))));
                    }
                }
            }
            var_30 = (max(15310, 1884370419));
        }
        var_31 -= max(var_11, (((-14316 ? 2410596876 : 92))));
    }
    var_32 ^= var_16;
    #pragma endscop
}
