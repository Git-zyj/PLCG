/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0] = arr_3 [i_0] [i_0] [i_1];
                arr_7 [i_0] [i_0] = 28918;
            }
        }
    }
    var_12 = (max(((((((1 ? 255 : 144345561))) || (((217 ? var_11 : 21770)))))), var_11));

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = (((0 - 144345533) ? (((arr_2 [i_2] [i_2] [i_2]) ? ((1 ? (arr_8 [i_2]) : (arr_9 [i_2] [i_2]))) : (arr_8 [i_2]))) : var_3));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            {
                                arr_23 [i_5] [i_3] [i_4] |= (arr_18 [i_5] [i_5] [i_4] [i_6 + 1]);
                                var_13 = (min(var_13, -1026965234));
                                arr_24 [i_2] = ((((((1124840113269206917 || (arr_1 [6]))))) ? (min((max(var_5, (arr_18 [i_2] [i_3] [i_4] [14]))), ((max(var_4, 125))))) : (((-(arr_0 [i_2]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_14 = ((((min((((1 ? 1 : -5418914933078133287))), (((arr_5 [i_2] [i_2] [6]) ? 1 : 3974514091633445737))))) ? (~47) : 15393162788864));
                                var_15 += (((((((min(var_4, (arr_17 [20] [i_7] [20] [20] [i_2])))) ? 3304192443 : (arr_8 [i_8])))) ? (min(((~(arr_16 [i_7 + 1]))), 5)) : (((arr_29 [i_7 + 1] [i_3] [i_7 + 1] [i_7] [i_8] [i_3 + 2] [i_7]) ? 94 : (arr_0 [i_7 - 1])))));
                                var_16 = (arr_25 [i_2] [i_2] [i_2]);
                            }
                        }
                    }
                    var_17 *= max((((-(var_10 * var_6)))), 10727589407289599698);
                }
            }
        }
    }
    for (int i_9 = 2; i_9 < 17;i_9 += 1)
    {
        arr_33 [i_9] &= (((((~((max(221, var_7)))))) ? (arr_20 [i_9 + 3]) : (max((arr_31 [i_9]), -8352608291006515946))));
        var_18 &= 100;
    }
    var_19 = (((((5688 ? 43 : 15))) ? ((~((max(1, 12984))))) : (((((-843831213 ? 18085124552224483342 : 336344342))) ? (min(-1114479504, var_7)) : (1 != 11403332954983682035)))));
    #pragma endscop
}
