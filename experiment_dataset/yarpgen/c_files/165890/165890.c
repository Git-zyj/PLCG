/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_10 |= (max((min((((!(arr_1 [2])))), (var_7 | 114688))), ((max(var_0, ((var_5 ? 1 : var_1)))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_11 -= var_7;
            var_12 = (1 != 0);
            arr_7 [i_0] [i_0] [i_0] = (((((228 ? var_9 : (arr_6 [i_0] [i_1] [i_1])))) ? -4435721258434967962 : var_3));
            var_13 -= (((arr_5 [i_1] [4] [i_0]) >= 1));
        }
        var_14 = ((((+(max((arr_1 [i_0]), var_4)))) | var_5));
    }
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        var_15 = ((~((max(209, 1)))));
        var_16 = ((~(((((1 && (arr_11 [i_2] [i_2])))) - var_9))));
    }
    var_17 = var_0;
    #pragma endscop
}
