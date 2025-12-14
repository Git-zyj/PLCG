/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_18 = ((-((var_0 ? 1 : var_13))));
            var_19 = (min(var_19, (arr_0 [i_0])));
            var_20 = (arr_1 [i_0]);
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {
            var_21 = (min(var_21, (((4040589656023304248 + ((((((((arr_6 [i_2]) ? var_9 : 705207306))) <= ((var_12 ? 2010838405 : 3602112369010301873)))))))))));
            var_22 = (arr_7 [i_0] [i_0] [i_0]);
            var_23 = 50190;
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
        {
            var_24 = (-15345 - ((min(1, var_2))));
            var_25 = (arr_10 [i_0] [i_3]);
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 22;i_5 += 1)
            {
                {
                    var_26 = (2997294717 + 3589759990);
                    var_27 = (arr_13 [i_0]);
                }
            }
        }
        var_28 = 15345;
        var_29 = (arr_6 [i_0]);
    }
    var_30 = (min(var_30, var_2));
    var_31 = var_5;
    var_32 |= 3589759990;
    #pragma endscop
}
