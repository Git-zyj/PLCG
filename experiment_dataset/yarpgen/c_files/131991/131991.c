/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_17 = 2694669131;
        var_18 = (((((~(-104 <= 1)))) < ((-6793308326419413146 ? (!0) : (var_14 / var_14)))));
        arr_2 [i_0] = (((~(1 ^ 1))));
    }
    for (int i_1 = 4; i_1 < 18;i_1 += 1)
    {
        var_19 = (((!var_7) ? (min((var_2 - 15161583366371843407), var_16)) : (((~var_2) | 0))));

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_20 = ((((57675 | (-6793308326419413146 / 4108949548))) != ((((!(((1 ? var_6 : -5951722005831321775)))))))));
            var_21 = (((-1 ? ((var_8 ? 6120158241641192851 : var_15) : 4088))));
            var_22 = (min(((50 ? -6120158241641192852 : 241)), (min(-25, 6793308326419413145))));
        }
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_23 *= ((15872 ? -6793308326419413144 : (6793308326419413146 >= 3075170046)));
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    var_24 = var_6;
                    var_25 *= (-6120158241641192852 / 3232062382);
                    arr_16 [i_5] [i_5] [i_4] [i_3] |= (((((1 ? -507078933 : 6035732199550420950))) ? (((~((var_11 ? 202 : 507078936))))) : (min((((116 >> (var_3 - 102)))), (var_7 ^ var_12)))));
                    var_26 -= (((var_0 << (3179730732 - 3179730709))));
                    var_27 = ((var_0 ? 3486935554093250828 : ((((-1548285929 ? 20 : 933581943))))));
                }
            }
        }
    }
    var_28 &= ((-(min(-26235, ((-6793308326419413155 ? 507078928 : var_4))))));
    #pragma endscop
}
