/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((max((var_4 > var_15), var_6)), (((((var_14 ? var_14 : var_12)) == var_8)))));
    var_17 = ((-(((((var_8 ? var_4 : 558871825))) ? (var_4 < var_3) : (var_3 < var_5)))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_7 [i_0] [i_0] = ((+(((arr_6 [i_1] [i_1] [i_0]) ? (!-17) : ((-106 ? 50375 : (arr_0 [5])))))));
            var_18 = (((((-(((arr_2 [i_0]) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_2 [i_0])))))) ? ((-6571860059523842022 ? 3736095471 : -17)) : -1830710880));
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_19 = ((((((140737479966720 | (arr_6 [i_0] [i_0] [i_0]))) < ((-1 ? (arr_0 [i_2]) : var_11)))) ? (((0 ? 4294967295 : (arr_9 [i_0])))) : var_7));

            for (int i_3 = 2; i_3 < 21;i_3 += 1)
            {
                arr_13 [i_0] [i_2] [i_2] = (((arr_8 [i_0 + 1] [i_0]) ? (arr_2 [i_0]) : ((((arr_2 [i_0]) + ((-7281391619227237398 ? (arr_1 [i_0]) : 15236)))))));
                arr_14 [i_0] [i_2] [i_2] [i_3] = (((((-(arr_4 [i_0] [15]))) ? (((65535 && (arr_4 [i_0] [i_0])))) : var_8)));
                var_20 = ((((((max(99, -1)))) | (140737479966720 / -100))) | (-12 & 0));
            }
        }
        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            arr_18 [i_0] = (var_7 | 11634);
            var_21 = (arr_9 [i_0]);
        }
        arr_19 [i_0] [i_0] = ((((min(-1602055067, (arr_5 [i_0] [i_0] [i_0])))) ? ((var_11 >> (((((arr_17 [i_0 + 1] [i_0]) ? 18446744073709551615 : 18446603336229584895)) - 18446744073709551613)))) : (arr_6 [i_0] [i_0 + 1] [i_0])));
        arr_20 [i_0] = (min((((((arr_2 [i_0]) > (arr_5 [i_0 + 1] [i_0 + 1] [i_0]))) ? ((((arr_2 [i_0]) ? (arr_16 [i_0 + 1] [5]) : 33266))) : (min((arr_16 [i_0 + 1] [i_0]), var_2)))), -56));
    }
    #pragma endscop
}
