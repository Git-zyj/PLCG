/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_16 = (+(max((min((arr_1 [i_0] [i_0]), (arr_2 [i_0]))), ((min(2258278453, var_9))))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                arr_8 [i_1] [i_1] [i_2] [i_0] = ((-20880557968884017 ? ((((((-(arr_3 [i_0 + 2] [i_1])))) == (arr_2 [i_0])))) : ((64600 % (arr_7 [13] [13] [13] [i_2])))));
                var_17 = var_1;
            }
            arr_9 [i_1] [i_1] [18] = (min((((((2258278453 ? (arr_1 [2] [i_0]) : (arr_0 [i_0] [7])))) ? -1272585616 : (((arr_6 [i_0]) & 1375402714)))), ((((arr_5 [i_0 + 2] [i_1] [i_0]) & (arr_4 [i_0] [i_1] [i_1]))))));
        }
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        arr_12 [i_3] [i_3] = ((+(((arr_4 [i_3] [i_3] [i_3]) ? (arr_10 [i_3] [5]) : (arr_1 [16] [i_3])))));
        arr_13 [i_3] [i_3] = (((min(-3659790908450867946, -2036688838))) ? ((((arr_5 [i_3] [i_3] [i_3]) < ((var_9 / (arr_3 [i_3] [i_3])))))) : ((((arr_11 [17]) == 3659790908450867932))));
        var_18 = (max((arr_1 [i_3] [i_3]), var_0));
        arr_14 [i_3] [i_3] = (min(((3659790908450867946 ? 62844 : 62650)), (((((arr_5 [i_3] [i_3] [i_3]) % 62866)) << (((((arr_1 [17] [i_3]) + 933684591)) - 25))))));
    }
    var_19 = (min(var_2, ((((max(13250339, 62838))) ? -13250339 : var_2))));
    #pragma endscop
}
