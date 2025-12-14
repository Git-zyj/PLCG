/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((max(var_12, 3842232333)));
    var_18 = (var_0 == 0);

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (-32 ? -1 : -18106);
        arr_4 [i_0] [i_0] = var_11;
        var_19 = ((-120 ? 0 : -1));

        for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
        {
            arr_9 [i_0] [i_0] = (23 - 0);
            arr_10 [i_0] [i_1] = ((((arr_0 [i_0] [i_1]) & 0)));
            arr_11 [i_0] &= (((arr_5 [i_1]) && (((arr_5 [i_0]) != (arr_1 [i_0] [i_0])))));
            var_20 &= ((-(arr_6 [i_0])));
            arr_12 [i_0] [13] = ((!(!-39)));
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                var_21 = ((-9223372036854775807 - 1) ? 65162 : -410954788);
                var_22 = (arr_8 [i_0] [i_0]);
                var_23 = ((17793062095522694990 ? ((0 ? (arr_8 [9] [i_2]) : (~36))) : 0));
            }
            for (int i_4 = 2; i_4 < 16;i_4 += 1)
            {
                var_24 = ((-((-1 ? 7952328855170834842 : -787629706))));
                var_25 = 1;
            }
            /* LoopNest 2 */
            for (int i_5 = 4; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    {
                        var_26 *= (max((!12220), (-2147483647 - 1)));
                        var_27 = 17221;
                        arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6] = 119;
                        arr_28 [i_6] = (119 * 1740545731);
                    }
                }
            }
        }
        var_28 += var_15;
    }
    #pragma endscop
}
