/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                var_19 = (max(var_19, 2732336908));
                var_20 -= -5184140322772889905;
                arr_6 [i_0] [10] [i_2] = (1562630387 || 29670);
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_21 = ((-(arr_5 [i_1])));
                arr_10 [i_1] = var_18;
            }
            arr_11 [i_0 + 1] = (arr_3 [i_0 + 1]);
        }
        var_22 = ((var_1 | (!2732336908)));

        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            var_23 = (((-(arr_4 [i_0] [i_0] [8] [8]))));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 10;i_7 += 1)
                    {
                        {
                            arr_20 [i_6] [i_7] [i_6] [i_6] [i_6] = (-7381161243864927051 < -5184140322772889895);
                            var_24 = (~var_10);
                        }
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            arr_23 [i_0] [i_0] = ((21218 ? (!2275) : 133169152));
            arr_24 [i_0] &= ((!(arr_12 [i_0 + 1])));
        }
        var_25 = (((arr_2 [i_0 - 1] [i_0 + 1]) ? 18446744073709551601 : (arr_4 [i_0 - 1] [i_0] [i_0 - 1] [i_0])));
    }
    var_26 = ((var_1 >= (-5184140322772889925 - var_8)));
    var_27 = var_17;
    #pragma endscop
}
