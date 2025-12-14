/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_12;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_19 = (43447 | 1);

        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            var_20 = ((!((!(!var_3)))));
            var_21 -= (((((var_15 + (((0 + (arr_1 [i_0]))))))) ? ((-(arr_2 [i_0] [i_1 + 2] [i_1 + 2]))) : (arr_2 [i_1] [i_0] [i_0])));

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    var_22 = (max(var_22, var_14));
                    arr_10 [i_0] [i_1] [i_2] [i_3] = ((-(~22097)));
                }
                arr_11 [i_0] [i_0] = (~var_8);
            }
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                var_23 = var_2;
                var_24 = ((~(((!(arr_2 [i_1 + 1] [i_1 - 1] [4]))))));
            }
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                var_25 = (min(var_25, ((((((~var_17) + 9223372036854775807)) << ((((((~(arr_7 [i_1 + 2] [i_1 + 1] [i_0] [i_0]))) + 147)) - 37)))))));
                var_26 = ((-((max(var_10, (118 && var_6))))));
            }
        }
    }
    var_27 = var_6;
    #pragma endscop
}
