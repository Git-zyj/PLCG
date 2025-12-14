/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_5, ((min(var_3, (!1))))));
    var_11 = ((var_3 % (min(((max(var_2, 870971276))), (~2099620421)))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_12 = (((((1 ? 1 : 870971272))) ? 870971301 : 1572864));

        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            arr_5 [i_0] [i_1] |= (((((!(arr_0 [i_0] [i_1])))) ^ ((0 ^ ((var_2 % (arr_0 [i_1 - 2] [i_1])))))));
            var_13 = (max(-1365983598, (4294967295 == 10)));

            for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
            {
                var_14 = 1;
                arr_9 [i_0] [1] [i_1] [1] = (arr_0 [i_1 + 1] [i_1 - 1]);
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
            {
                arr_12 [i_1] [i_3] [i_1 - 2] = (max((~62), (max(((81 ? 10529621 : 870971278)), (arr_0 [i_0] [i_1 + 1])))));
                arr_13 [i_0] [i_3] [i_0] [7] = (max(((max(var_3, 1))), (arr_4 [i_0] [i_3])));
                arr_14 [i_0] [i_3] = (max(((((var_4 ? (arr_7 [i_0] [i_0] [i_3] [i_3]) : -1640187370736795120)))), ((~(var_6 | var_5)))));
            }
            var_15 = (arr_3 [i_0]);
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {

            for (int i_5 = 2; i_5 < 12;i_5 += 1)
            {
                var_16 -= ((124 || ((((((1 ? 0 : 870971267))) ? -122 : (max(-2919958974652003149, 32768)))))));
                var_17 = (arr_8 [i_5]);
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_18 -= 1;
                var_19 |= var_2;
                arr_24 [i_0] [i_4] [i_6] = (((min(var_1, (1 && -8577669998293403790))) / (((((max(-1936269869585767174, 16))) ? ((min((arr_8 [1]), 251))) : -var_2)))));
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_20 = (max(var_20, -94));
                var_21 = 870971277;
            }
            arr_27 [i_4] = 870971258;
        }
    }
    var_22 -= (-var_9 ? 4624443522705173149 : (min(((max(var_9, var_9))), ((var_2 ? var_8 : var_3)))));

    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        var_23 = ((((((arr_29 [i_8]) ? (arr_29 [i_8]) : -870971296))) ? var_5 : ((~(arr_28 [i_8])))));
        var_24 = (65524 ? -32 : (~39825));
        arr_31 [10] |= (arr_30 [i_8]);
    }
    #pragma endscop
}
