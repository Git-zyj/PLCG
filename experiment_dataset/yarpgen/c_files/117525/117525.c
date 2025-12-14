/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        var_18 = ((((((~28064) ? 28064 : 1))) ? (max((((arr_5 [i_3] [i_0]) ? var_11 : (arr_4 [i_0]))), (max(var_10, var_5)))) : ((min(875024559, var_5)))));
                        var_19 = min(((28058 ? var_12 : (arr_3 [i_1] [i_3]))), var_12);
                        arr_9 [i_0] [i_2] [i_3] = ((~(!79365557)));

                        for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                        {
                            arr_12 [i_2] [i_3] [i_4] |= ((!((min(-28052, (arr_11 [i_1] [i_1] [i_1 - 3] [i_3]))))));
                            var_20 = ((~(var_6 & var_9)));
                        }
                        for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                        {
                            arr_15 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = 4606188099330113222;
                            var_21 = 875024534;
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_22 = var_12;
                            arr_20 [i_0] [i_0] [i_0] [i_1] [i_0] = (-1854372011718885415 > 6788551919684166750);
                            arr_21 [i_0] [i_0] [i_2] [i_3] [i_6] = ((((max(((var_8 ? var_11 : var_15)), (!875024586)))) ? ((((max(4, var_0))) ? var_0 : (arr_3 [i_0] [i_1 - 3]))) : (max((~3419942736), -16384))));
                        }
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        arr_25 [i_7] [i_1 + 1] = ((((((arr_6 [i_0] [i_0] [6] [i_7]) ? 875024559 : var_5))) | (arr_2 [i_1 + 1])));

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_23 += ((var_10 ? var_16 : var_2));
                            arr_28 [i_0] [i_7] [1] [i_1] [i_1] [i_7] [i_0] = 4606188099330113222;
                        }
                        arr_29 [i_7] [i_7] = (!var_8);
                    }
                    var_24 = (!6788551919684166750);
                    var_25 = ((~((359246110 ? (arr_7 [i_0] [i_1] [i_1] [i_2]) : var_5))));
                }
            }
        }
    }
    var_26 = var_6;
    var_27 = (((((var_1 ? var_12 : var_0))) ? ((((~18035) | var_17))) : ((var_10 ? (((6788551919684166763 ? var_12 : var_13))) : (max(var_16, 9223372036854775807))))));
    var_28 = (min(var_28, (((((((3419942729 ? var_1 : var_16)) < var_16)) ? (((((var_11 ? var_3 : var_13))))) : (min(var_16, var_10)))))));
    #pragma endscop
}
