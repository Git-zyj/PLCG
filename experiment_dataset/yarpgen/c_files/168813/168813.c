/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 6901;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_18 = 235612677;
        var_19 = (arr_3 [i_0 + 1]);
        var_20 = (((arr_1 [i_0 - 1]) & (arr_0 [i_0 + 1] [i_0])));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_21 = (min(var_21, ((((arr_3 [i_1]) / (((arr_7 [i_2] [i_2] [i_2]) * 7)))))));
            var_22 = (i_1 % 2 == zero) ? ((((arr_2 [i_1]) << ((((49556 ? (arr_7 [i_1] [i_2] [i_2]) : 119)) + 30883))))) : ((((arr_2 [i_1]) << ((((((49556 ? (arr_7 [i_1] [i_2] [i_2]) : 119)) + 30883)) - 46716)))));
            arr_8 [i_1] [i_1] = (((((arr_1 [i_1]) < 58276)) || ((((203 | 167) ? (-32767 - 1) : (arr_0 [i_1] [i_2]))))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
        {
            var_23 ^= (((1857663804 && 1501361452) ? 2032 : ((((arr_5 [i_1] [i_3]) && 132)))));
            var_24 = arr_9 [i_1] [i_1];
        }
        var_25 = (min(var_25, ((((((((137 - (arr_4 [1] [i_1])))) ? (arr_4 [i_1] [i_1]) : 200)) >= ((249 >> (((arr_6 [i_1] [16]) + 30263)))))))));
    }
    #pragma endscop
}
