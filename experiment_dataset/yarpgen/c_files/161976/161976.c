/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= var_2;

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            arr_6 [1] [i_1] = ((-8959429381028670121 ^ ((~(~1758318000649718044)))));
            var_19 = (((-(min((arr_1 [i_0]), var_17)))));
            arr_7 [i_1] = ((((((min(224341524, 1758318000649718034))) ? 2142484439955647620 : -2142484439955647599)) >> ((((((var_8 ? 18425863039322168463 : -9118127998632702036)) | var_17)) - 18446738504678211445))));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_20 ^= 224341524;
            var_21 = ((((arr_2 [i_2]) || (arr_5 [i_0] [i_2]))) ? ((((((arr_4 [i_0] [i_2] [i_2]) + (arr_0 [1] [i_0])))) ? var_7 : (((arr_9 [i_0]) + var_6)))) : -106);
        }
        var_22 = ((((((~2142484439955647629) | -224341524))) ? var_11 : ((-(arr_5 [i_0] [i_0])))));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
    {
        var_23 = (min(1758318000649718041, (arr_8 [i_3] [i_3] [i_3])));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    var_24 = (min(var_24, (((683014562101487776 ? ((~(max((arr_11 [12]), 455347563406290854)))) : (var_14 || 16688426073059833586))))));

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_23 [i_5] [i_4] [i_5] [i_6] = (arr_13 [i_3] [i_4]);
                        var_25 = (!14056276306658961710);
                    }
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        arr_26 [i_3] [i_3] [i_4] [23] [i_5] [i_5] = (((((var_10 ? (min(11, var_3)) : -76))) ? (!0) : (((arr_24 [i_5] [i_5]) ? 18736 : (arr_22 [i_7] [i_7] [i_7] [i_7])))));
                        arr_27 [1] [i_5] [i_5] [i_7] = var_11;
                        var_26 = ((~(((arr_20 [i_3] [i_4] [i_3]) + var_9))));
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        var_27 = (max(var_27, (((-var_12 != (arr_20 [i_3] [i_3] [i_8]))))));
                        arr_30 [i_5] [i_5] [i_3] [i_3] [i_3] [i_5] = ((-(((arr_3 [i_5] [i_4]) ? (arr_3 [i_5] [i_5]) : (arr_3 [i_5] [i_4])))));
                        arr_31 [i_3] [i_5] [i_5] [21] = (~(((arr_12 [i_4]) & 2142484439955647610)));
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
    {
        arr_36 [i_9] [i_9] = (arr_18 [i_9] [20] [i_9] [i_9]);
        var_28 = (~18425863039322168454);
        arr_37 [i_9] = ((max(2142484439955647620, (min(-2142484439955647618, -2142484439955647610)))) ^ (arr_28 [i_9] [i_9] [i_9]));
        var_29 ^= var_10;
    }
    var_30 &= max(3534768947738435527, 18425863039322168463);
    var_31 = (!var_7);
    #pragma endscop
}
