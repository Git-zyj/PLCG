/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_4, var_3));
    var_14 = (((((max(var_1, var_11))) ? var_12 : ((2251799679467520 ? 250 : 187)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);

        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            arr_7 [i_1] = ((-2251799679467508 ? ((44 ? (-3093673493906928141 * 7478069599962366796) : (arr_3 [i_0] [i_0]))) : (arr_0 [i_0])));
            arr_8 [i_1] = (((min(var_1, var_12))) * ((((((max((arr_6 [i_1]), var_5))) && (arr_3 [i_0] [10]))))));
        }
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_15 = (-3093673493906928158 - -2791699926);
        var_16 = var_7;
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            arr_18 [i_4] [i_4] [i_4] = (min(137, 4294967295));
            var_17 = (!-4321754525674402764);
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            arr_22 [i_3] = (-9223372036854775807 - 1);
            var_18 = 32631581810428426;
            arr_23 [i_3] [i_5] [i_5] = ((((arr_16 [i_5] [i_5] [i_5]) ^ (arr_10 [i_5]))));
            var_19 *= (arr_16 [i_3] [i_3] [i_5]);
        }
        var_20 = (min(var_20, ((max((arr_10 [i_3]), (min((!var_2), ((var_5 ? (arr_14 [3]) : var_1)))))))));
        var_21 = ((9223336852482686976 <= (arr_6 [19])));
    }
    #pragma endscop
}
