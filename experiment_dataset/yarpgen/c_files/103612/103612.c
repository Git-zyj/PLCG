/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = 15120149269617139826;

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_6 [17] [i_1] = (max((((!((((arr_4 [i_0] [i_1] [i_1]) % 7501695371752415513)))))), 34486));
            var_20 = (min(var_20, -92));
            var_21 = 33515;
        }
        arr_7 [1] &= ((((!(((32005 >> (((arr_5 [i_0] [i_0] [i_0]) - 17307865849414110198))))))) ? ((+((((arr_5 [i_0 + 2] [i_0] [i_0]) >= -125))))) : ((max((arr_4 [i_0] [i_0] [i_0]), (arr_1 [i_0 - 2]))))));
    }
    #pragma endscop
}
