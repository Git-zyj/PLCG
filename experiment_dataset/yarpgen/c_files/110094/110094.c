/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_0, var_2));

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (i_0 % 2 == 0) ? ((((((1 < var_9) >> ((((min(var_2, (arr_1 [i_0])))) - 37672)))) > ((min((arr_0 [i_0] [i_0 - 1]), var_17)))))) : ((((((1 < var_9) >> ((((((min(var_2, (arr_1 [i_0])))) - 37672)) - 59)))) > ((min((arr_0 [i_0] [i_0 - 1]), var_17))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_21 = (min((~var_4), (((((var_0 ? 1 : 1)) > (arr_4 [i_0] [i_0]))))));
                    var_22 = (~0);
                    arr_7 [i_0] [i_0] [i_2 - 1] [i_2] = var_14;
                    var_23 = (min((min((~var_19), (((var_8 && (arr_5 [i_0] [i_0] [i_0] [i_0])))))), (!8191)));
                    arr_8 [i_0] [i_0] = (min((((arr_0 [i_2] [i_2]) % (arr_3 [i_0] [i_0] [i_0]))), ((~(!1)))));
                }
            }
        }
        var_24 = ((1 ? 1 : 65535));

        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            arr_11 [i_0] [i_3 - 1] [i_3 - 1] = (arr_3 [i_3 - 1] [i_0] [i_0]);
            var_25 += ((((-(var_9 ^ 0))) > ((min(0, (arr_0 [i_3 - 1] [i_0]))))));
            arr_12 [i_0] = (arr_6 [i_0 - 1] [i_0 - 1] [i_0]);
        }
    }
    for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_26 = ((-((min(var_5, var_1)))));
        arr_15 [i_4] [i_4] = var_7;
        arr_16 [i_4] [i_4] = var_15;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    var_27 = (((((min(var_15, (arr_20 [i_6] [i_6]))))) == ((~(arr_4 [i_4 - 1] [i_5])))));
                    var_28 = ((!(~var_0)));
                }
            }
        }
    }
    var_29 = 44803;
    #pragma endscop
}
