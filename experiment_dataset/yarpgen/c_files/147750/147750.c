/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        var_20 = ((((-104 ? ((min(var_6, 82))) : 4064))) ? 65535 : (min(((var_6 ? (arr_6 [3] [i_1] [i_3]) : 61478)), (((var_16 ? var_6 : var_16))))));
                        arr_9 [i_2] = ((min((arr_8 [i_0] [i_1] [i_3] [i_3 - 2] [i_0 + 1]), 4041)));
                        arr_10 [i_2] = (((((0 ? (arr_2 [i_0 - 1] [i_3 + 1]) : 246))) ? var_17 : (min(var_18, ((27512 ? -21 : 38550))))));
                    }
                    for (int i_4 = 4; i_4 < 9;i_4 += 1)
                    {
                        arr_13 [i_2] = (((4064 ? 112 : 112)));
                        var_21 -= (((~149) ? (((-5886 + 2147483647) >> (var_9 - 2820611396))) : ((2848785710 ? 8 : 1))));
                        var_22 = -5886;

                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            arr_16 [i_2] [i_1] [i_2] [6] = (-(((arr_2 [i_0] [i_0]) ? ((19637 ? -1960806723 : -5886)) : 0)));
                            var_23 = -918971584;
                        }
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            var_24 = (min(var_24, (((!(((min(1, 16512064716434813352)))))))));
                            arr_21 [i_0] [i_2] [i_4] [3] = ((var_5 ? (35 > 2147483647) : ((20 ? 1 : 112))));
                        }
                    }
                    var_25 = (((((5886 ? (((!(arr_5 [i_2] [3] [i_0] [i_0])))) : 2147483520))) ? (((((144 ? 11547 : 1934679357274738264))) ? (arr_6 [i_0 - 1] [i_0 + 1] [i_0 - 1]) : ((((!(arr_4 [i_0 - 1] [i_0 - 1]))))))) : 4660886757886191737));
                    var_26 = -var_0;
                }
            }
        }
    }
    var_27 = ((var_15 ? 4294967292 : (max(((var_0 ? var_0 : -61)), ((1 ? -1 : -2096456200))))));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            {
                arr_28 [12] [i_8] = ((((min(13785857315823359864, 16380))) ? (!var_3) : 39074));
                arr_29 [i_7] = var_18;
            }
        }
    }
    var_28 = ((3180016977 >> (4946374405201202511 - 4946374405201202510)));
    #pragma endscop
}
