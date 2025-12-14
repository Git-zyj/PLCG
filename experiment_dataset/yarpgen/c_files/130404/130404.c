/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_12 = (((arr_1 [i_0]) & (max(((2253595779 ? 1 : (arr_0 [i_0] [i_0]))), ((1 ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0])))))));
        var_13 = ((((((arr_0 [i_0] [i_0]) == 41841))) == ((((((arr_0 [i_0] [i_0]) && 16612))) | ((min((arr_1 [i_0]), (arr_1 [i_0]))))))));
        arr_2 [i_0] [i_0] = (20931 || -1);

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_14 = ((((((arr_1 [i_0]) ^ ((min(-16612, (arr_1 [i_0]))))))) ? 1 : (min((min((arr_4 [i_0] [i_1] [i_0]), (arr_0 [i_0] [i_1]))), ((41841 | (arr_4 [i_0] [i_1] [i_0])))))));
            arr_5 [i_0] [i_1] = (min((((!((max((arr_4 [i_0] [i_1] [i_0]), (arr_4 [i_1] [i_1] [i_0]))))))), (min((((arr_0 [i_0] [i_1]) ? (arr_1 [i_0]) : (arr_3 [i_0] [i_1]))), ((((arr_4 [i_0] [i_1] [i_0]) != (arr_1 [i_1]))))))));
        }
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_15 ^= ((((min((arr_1 [i_2]), ((((arr_1 [i_2]) == (arr_1 [i_2]))))))) && (((1 / ((-(arr_8 [i_2]))))))));
        var_16 = (((((arr_3 [i_2] [i_2]) - (arr_3 [i_2] [i_2]))) - ((min((arr_3 [i_2] [i_2]), (arr_3 [i_2] [i_2]))))));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        arr_11 [i_3] [i_3] = (1987909047 || -1272442898);
        var_17 = 1;
        arr_12 [i_3] = ((((((((arr_7 [i_3]) | (arr_8 [i_3])))) ? ((((arr_8 [i_3]) ? (arr_3 [i_3] [i_3]) : 57344))) : (1497966069 | 1))) * ((((!(arr_6 [i_3])))))));
    }
    var_18 -= ((-((min((114 || var_6), (var_7 || 29))))));
    var_19 = (((((var_2 >= var_9) * (var_5 != var_5))) % 29));
    #pragma endscop
}
