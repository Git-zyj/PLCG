/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((max((127 && var_2), (max(var_14, 66)))))) + (~var_1)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = (((-98 | var_7) * -98));
        arr_4 [i_0] = ((!(arr_2 [i_0])));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_22 = (max(var_22, -1410721739));
        var_23 = ((var_7 ? 4906915034919899056 : ((min((!232), (1 + 1))))));
        var_24 &= 370115433;

        /* vectorizable */
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            var_25 -= ((arr_5 [i_2 + 3]) <= -1246939752);
            var_26 = ((-(arr_5 [1])));
            var_27 = 0;
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_28 = (min(var_28, ((((((((arr_10 [i_1]) ? var_17 : var_9)) * (1 >= -1246939753)))) ? var_10 : ((((arr_5 [i_3]) * -82)))))));
            arr_13 [i_1] [i_1] = ((max(((var_6 ? var_16 : (arr_11 [i_1])), (((255 ? var_19 : var_16)))))));
            var_29 = (min(var_29, ((max((!3620700728), 8)))));
            var_30 = (((((106 | (((arr_8 [i_1] [i_1] [i_1]) ? (arr_5 [i_3]) : var_4))))) ? ((var_12 ? 0 : 1)) : (((((max(var_9, 5))) ? var_3 : 65535)))));
        }
    }
    #pragma endscop
}
