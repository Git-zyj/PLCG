/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!(((~(!var_4))))));

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((~((1 ? -8475327271136775531 : 206))))) ? var_10 : (~170)));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_7 [i_0] [i_0] = (((((-(arr_4 [i_1])))) ? (!var_1) : -5181957749763584577));
            var_14 = (((2097151 / 3989393892890532117) ? (arr_6 [i_0]) : -32762));
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
        {
            var_15 = (max(var_15, ((((((-3794159061037956562 ? 5181957749763584552 : 2567126897950575177))) ? 160 : (((var_2 > 57754) ? ((var_8 ? 1 : 22)) : ((var_0 ? var_1 : var_2)))))))));
            arr_10 [i_0] [i_0] = 4008567654926531453;
            var_16 = (~var_12);
        }
        for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
        {
            var_17 = (max(var_17, (((~(((!((((arr_0 [0]) ? 16384 : (arr_9 [8] [10] [i_0]))))))))))));
            var_18 = (max(var_18, (((((((arr_5 [i_0 + 4] [i_0 + 4]) - 999380865))) ? (min(-1, 4)) : (((arr_8 [i_3] [i_0 - 1]) - (arr_2 [i_0 + 1]))))))));
            var_19 = (arr_8 [i_0] [i_0]);
        }
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            var_20 = (min(var_20, -1849535313));
            var_21 = ((((min((arr_0 [i_0]), var_10))) << ((1849535313 ? ((((arr_0 [i_0]) < 5181957749763584547))) : (-5181957749763584589 > var_2)))));
        }
        arr_15 [i_0] [i_0] = ((var_8 ? (((((arr_2 [i_0 - 1]) ? var_12 : var_2)))) : (~-var_4)));
    }
    var_22 = min(((~((var_2 ? 7790 : -16384)))), -var_0);
    #pragma endscop
}
