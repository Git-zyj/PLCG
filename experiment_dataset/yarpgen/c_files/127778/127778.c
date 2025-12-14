/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_4 [i_0] [i_1] [i_0] = ((-(103 - 0)));
            arr_5 [i_0] = ((((((arr_3 [i_0 + 3]) - var_4))) ? ((((max(2899065320, -31514))) ? (arr_3 [i_1]) : (-1877880080 - 4078433581))) : ((((max(-20198, (arr_1 [i_0])))) ? -0 : (arr_1 [i_0])))));
        }

        for (int i_2 = 3; i_2 < 22;i_2 += 1)
        {
            var_14 = min((((max(2971022964, 4294967270)))), (1706455381 & var_6));

            /* vectorizable */
            for (int i_3 = 1; i_3 < 23;i_3 += 1)
            {
                var_15 = 1;

                for (int i_4 = 3; i_4 < 23;i_4 += 1) /* same iter space */
                {
                    var_16 = (0 || 54064);
                    var_17 = -123;
                    var_18 = ((1 ? 7602643936229664968 : (!var_12)));
                    var_19 = ((75 ? 8580 : var_4));
                }
                for (int i_5 = 3; i_5 < 23;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        arr_17 [i_3] [i_2 + 2] [1] [i_0] [i_2 + 2] = ((~(arr_15 [1] [i_0 - 1] [i_0 + 4] [i_0] [i_5 - 3])));
                        arr_18 [i_2 + 1] [i_2 + 1] [i_0] = 7985670273794214170;
                        var_20 = (arr_1 [i_6]);
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        arr_23 [i_0 - 1] [i_2 + 2] [i_3 - 1] [i_0] [i_3 + 1] = (0 - 5652);
                        var_21 = (min(var_21, ((1860516219 ? var_4 : var_1))));
                        arr_24 [11] [i_0 + 1] [11] [i_0] [i_5] [i_5] [i_7] = (!0);
                        var_22 = (-5938825733028350009 - var_5);
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                    {
                        var_23 &= (var_8 - var_3);
                        arr_27 [i_0] [i_0] [i_0 - 2] [i_0 + 2] [i_0] = 112;
                    }
                    var_24 = (1314756977 + -1517793993);
                }
            }
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 23;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 23;i_11 += 1)
                {
                    {
                        arr_36 [i_0] [i_9] [i_10] [22] &= var_4;
                        var_25 = (max(var_25, ((min((min(var_9, (arr_12 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_10 + 1] [i_11 + 1] [i_11]))), ((var_2 - ((var_8 ? -6781063421917166987 : var_5)))))))));
                        arr_37 [i_10 + 1] [i_0] = (max(1, (arr_15 [i_0 - 1] [i_10 + 1] [i_11 - 2] [i_0] [i_11 - 1])));
                    }
                }
            }
            var_26 = (min(var_5, var_0));
            var_27 = 585444891631190062;
            arr_38 [i_0] = ((0 - (14036658695823288387 - 4956965827299982923)));
        }
    }
    for (int i_12 = 0; i_12 < 24;i_12 += 1)
    {
        arr_43 [8] = ((0 - ((min(1, 36734)))));
        var_28 = (((max(var_1, var_5)) - 6221334100723689799));
    }
    var_29 = ((~(min(2186336272, (((var_3 ? 1 : 178)))))));
    var_30 = (min((max((var_4 - var_3), ((min(var_6, var_3))))), (~1236745469)));
    var_31 = var_8;
    #pragma endscop
}
