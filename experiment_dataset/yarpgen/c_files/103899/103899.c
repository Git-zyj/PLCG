/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(((max(-67, -1))), var_2));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            var_20 = (max(var_20, ((max(((((((14583704570184331585 ? 18446744073709551599 : (arr_3 [i_0] [9])))) ? (var_1 << 11) : (!2553310014)))), ((((1004319895 != (arr_2 [i_0]))) ? (max((arr_0 [i_1]), (arr_4 [i_0]))) : ((((arr_1 [13]) ? (arr_2 [i_1]) : (arr_0 [i_1])))))))))));
            var_21 = ((!(((var_14 ? (arr_0 [i_0]) : (arr_0 [i_0]))))));
            var_22 = (((min((((arr_2 [i_0]) << (1981398033 - 1981398003))), (((2509677867 < (arr_4 [i_0])))))) >= (arr_1 [i_0])));
        }

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_8 [i_0] = (!(~1953378218));
            var_23 = ((~(((!(arr_7 [i_0] [i_2]))))));
            arr_9 [i_0] = (max((~var_4), ((~(~var_5)))));
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {
                        arr_19 [i_3] [i_3] [i_5] = (min((arr_5 [i_4 + 4]), ((((arr_17 [i_3] [i_3] [i_4 + 4]) ? (arr_13 [i_3] [18] [i_4 + 4] [i_4]) : (arr_17 [i_0] [i_3] [i_4 + 4]))))));
                        arr_20 [21] [i_3] [i_3] [i_3] = (arr_7 [6] [6]);
                    }
                }
            }
            var_24 = 10;
            var_25 ^= var_10;
        }
    }
    var_26 = ((((((!(((var_1 ? 1953378221 : 152))))))) >= var_15));
    var_27 = var_1;
    #pragma endscop
}
