/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_14 = (min(var_14, -49));
        var_15 += var_7;
        var_16 = (max(var_16, (((!((((arr_1 [i_0]) ? ((46869 ? var_8 : 276503617)) : (((var_4 ? 48 : (arr_1 [i_0]))))))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_17 = ((((-1660803227615919094 ^ (arr_3 [i_1])))) ? 0 : -56047);

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_18 = (max(var_18, (~16080)));
            var_19 = (((56039 > 9483) ? (arr_5 [i_1] [i_2] [i_2]) : (8420617346734888485 || -4941193278308485158)));
            var_20 -= ((-(((56052 || (arr_2 [i_2]))))));
            var_21 = (!4294967295);
        }
    }
    var_22 = (((!0) ? (min((min(1, -54)), ((max(56050, -13592))))) : var_11));
    var_23 = ((-(var_0 < var_1)));
    #pragma endscop
}
