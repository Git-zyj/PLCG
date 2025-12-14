/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 1518719558;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0] [i_0]) ? ((((arr_0 [i_0] [i_0]) < (arr_0 [i_0] [i_0])))) : (arr_0 [i_0] [i_0])));
        var_13 = ((!((max((-17873 <= 17998194275285691470), (44201 + var_3))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_7 [i_1] [i_0] [i_0] = (!var_8);
            var_14 = (arr_4 [i_0]);
            arr_8 [13] [i_0] = var_3;
            var_15 = (!var_7);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_13 [i_0] = (var_4 | var_11);
            arr_14 [i_0] [i_0] = ((244 ? 17 : 28672));
        }
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_16 = (12409 ? 5890 : 10);
        var_17 = ((!((max(1, -1)))));
    }
    #pragma endscop
}
