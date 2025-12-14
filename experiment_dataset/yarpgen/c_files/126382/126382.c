/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= ((((var_9 ? var_3 : (~-35))) < (((max(25258, (1884402831396382631 || 130)))))));
    var_15 = (!-2100806731);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 = (min(var_16, (((((min(((4294967295 ? 137 : var_9)), ((max(-35, -1881055461)))))) ? 0 : ((-(var_12 * 0))))))));
        var_17 = ((((1023 | -32752) / -3297532237528999493)));
        arr_2 [i_0] = var_4;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_18 += (((((((min(var_12, 888765367))) || (734902707 % -888765354)))) * (min(-96, 1574705215))));
        arr_7 [i_1] = (((0 < 2411) ^ 125));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_10 [i_2] = (var_11 ? ((8560026309849888675 ? var_7 : -1044)) : 226);
        var_19 = (min(var_19, 125));
    }
    var_20 = (min(var_20, ((((((~-2016050832) ? var_0 : (-83 % var_4))) != ((((min(96, 0))) << (-22864 + 22887))))))));

    /* vectorizable */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        arr_14 [i_3] = (!var_0);
        arr_15 [0] = ((var_2 ? 1023 : (0 * var_4)));
        var_21 = -3719461237;
    }
    #pragma endscop
}
