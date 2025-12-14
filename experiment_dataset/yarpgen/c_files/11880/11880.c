/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;

    for (int i_0 = 3; i_0 < 6;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_4 [9] [6] = ((((((arr_1 [i_0 + 2] [i_1]) - (arr_2 [i_0] [i_0] [i_0])))) && (arr_1 [9] [i_1])));
            arr_5 [1] [i_0] = (((((~(arr_3 [i_1] [i_1] [i_0 + 2])))) ? var_2 : (max((arr_0 [i_0 - 3]), ((((arr_0 [i_0]) ? var_10 : 21)))))));
            var_19 = (min((min(-1794266624, ((max((arr_2 [i_0 - 2] [i_0 - 1] [3]), (arr_3 [i_0 + 1] [i_0 + 1] [1])))))), var_5));
            var_20 = (max(var_20, ((max(62, (max(((var_12 ? (arr_0 [i_0]) : (arr_2 [i_0] [i_0] [i_0]))), ((var_6 % (arr_0 [1]))))))))));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            var_21 ^= (((~-1794266625) || -3251659205));
            arr_9 [i_2] = (4294967295 <= 2569);

            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                var_22 = ((~((~(arr_2 [i_0] [i_0] [i_0])))));
                arr_13 [i_2] = 1794266624;
            }
            arr_14 [i_2] = (((arr_7 [i_0 + 1] [i_0] [i_2 - 1]) % (arr_12 [i_0] [i_2] [i_0 + 1] [i_2 + 1])));
            var_23 |= (-2569 / 4611681620380876800);
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_24 = ((((min((min((arr_2 [i_0 + 3] [i_0 - 3] [i_0 - 3]), 2141904501)), ((min(-4580, 0)))))) ? (arr_8 [i_4] [i_4] [i_4]) : (arr_15 [i_0])));
            arr_17 [i_4] [i_4] = (min((((!((((arr_0 [i_0]) ? (arr_6 [i_0 + 3] [i_0 + 1]) : var_16)))))), (max((((arr_0 [i_0 + 2]) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0]))), (!4121674251)))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    {
                        arr_22 [i_0 + 1] [i_0] [8] [i_5] = ((!(arr_18 [i_0 + 2] [i_0 - 3] [i_0 - 3] [i_0 - 1])));
                        var_25 |= (arr_8 [i_0] [i_0] [i_0 - 2]);
                    }
                }
            }
            var_26 |= (((min(16962136696082446494, ((((arr_7 [5] [i_4] [i_4]) % (arr_10 [i_0 - 2] [5] [5] [2])))))) == ((((!(!var_15)))))));
            var_27 = (min((!757543577), 1787151068850863275));
        }
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            arr_26 [i_7] = ((!(((+((-3439 ? (arr_3 [2] [i_7] [i_7]) : (arr_20 [i_0] [6]))))))));
            arr_27 [i_0 + 4] [i_7] = (((min((arr_2 [i_0 - 3] [i_0 - 1] [i_0 - 1]), (arr_16 [i_0 - 2] [i_0 - 3]))) - (arr_20 [i_0] [4])));
        }
        arr_28 [i_0] [i_0 - 3] = ((+(((~120) ? 218 : ((52357 ? 0 : 1))))));
    }
    #pragma endscop
}
