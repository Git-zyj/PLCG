/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((var_1 ? 3126602064 : 1))) ? (~var_7) : var_5));

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_12 += (max(((((max(var_10, -66)) / -76))), ((2673343238 ? (arr_5 [i_0] [i_0]) : 1))));
            arr_7 [i_1] = (min(var_2, (((((min(1, (arr_0 [i_0] [i_0])))) && ((max(1, 55788))))))));
            arr_8 [i_1] [i_0] [i_0] = var_1;
            var_13 = (((arr_2 [i_0]) / 1990889859));
        }
        arr_9 [i_0] [i_0] = (1078389714 && 1);
        var_14 = 1;
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            arr_16 [i_2] [i_3] = (((((((arr_5 [i_3] [i_2]) ? var_1 : 9748))) ? (min(var_5, var_4)) : (arr_6 [i_3] [i_2]))));
            arr_17 [1] [i_2] = (((5145 ? 1 : 0)));
        }
        var_15 = ((((((arr_11 [i_2]) ? ((1 ? 93 : 503037653563816023)) : 3126602064))) ? var_7 : ((max(var_8, (arr_13 [i_2] [i_2] [i_2]))))));
        var_16 = (((((var_6 ^ (arr_2 [i_2])))) ? var_8 : (arr_13 [i_2] [i_2] [i_2])));
        var_17 += (min((((((min(1070222113, var_1))) && 860))), ((~(((arr_12 [i_2] [i_2]) ? 400263863 : 400263862))))));
    }
    var_18 = (min((((1070222112 ? -76 : 117))), var_2));
    var_19 = ((var_3 ? (min((~var_7), (~var_9))) : 383321247));
    #pragma endscop
}
