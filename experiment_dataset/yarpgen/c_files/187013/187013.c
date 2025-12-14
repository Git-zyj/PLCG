/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((min(((var_1 ? var_2 : var_5)), ((max(var_4, var_4))))), ((max((max(var_1, var_6)), (var_2 ^ var_7))))));
    var_11 = ((((((var_2 * var_2) ? (var_4 > var_7) : (var_6 - var_4)))) * ((((min(var_1, var_3))) * ((var_8 >> (var_8 - 11756016774664488468)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_12 = (((max((var_1 == var_1), ((var_1 << (var_1 - 449403441))))) << ((((min(var_7, var_9))) / ((var_2 ? 215 : 3350552314))))));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_9 [8] [i_3] |= var_8;
                        var_13 += (min(((max((min(var_2, var_7)), (var_0 && var_5)))), (min((var_5 & var_3), (var_8 || var_5)))));
                        arr_10 [i_1] = ((((((var_0 ? var_8 : var_7)) * (((var_7 >> (var_0 - 4109652117)))))) * ((max((min(var_7, var_7)), (min(var_6, var_1)))))));
                        arr_11 [i_0 + 1] [i_1 - 1] [i_2] [i_1] = (max(((min(var_6, var_9))), (((max(var_5, var_7)) ^ (var_7 / var_9)))));
                    }
                    for (int i_4 = 2; i_4 < 14;i_4 += 1)
                    {
                        var_14 &= (((((var_3 || var_6) ? ((var_7 ? var_9 : var_6)) : ((min(var_3, var_3))))) != ((((max(var_7, var_6))) ? ((max(var_4, var_6))) : (max(var_6, var_1))))));
                        var_15 += (max((min(((var_7 ? var_1 : var_2)), (var_9 == var_7))), (((var_0 >= (var_4 / var_8))))));
                        var_16 *= ((((var_8 ? (var_0 - var_6) : (var_5 + var_9))) + ((var_8 * (((max(var_2, var_2))))))));
                    }
                    arr_15 [i_1] = (max(((((var_9 && var_2) << ((((max(var_4, var_2))) - 39203))))), ((var_3 ? (((min(var_2, var_2)))) : (max(var_5, var_4))))));
                    arr_16 [i_0] [8] [i_0] |= (((min((max(var_9, var_8)), (var_9 + var_2))) == (var_7 > var_5)));
                    var_17 = (((((var_9 - var_1) ? ((var_9 ? var_0 : var_7)) : ((min(var_3, var_7))))) % (((var_6 ? var_4 : ((var_7 << (var_2 - 39207))))))));
                }
                for (int i_5 = 2; i_5 < 15;i_5 += 1)
                {
                    arr_19 [2] |= (min((min((max(var_8, var_9)), var_3)), (((min(var_5, var_8)) * (((var_6 ? var_9 : var_3)))))));
                    var_18 = (min((((((min(var_7, var_1))) || (((var_8 ? var_1 : var_9)))))), ((((min(var_0, var_8))) ? (((max(var_6, var_9)))) : ((var_1 ? var_8 : var_9))))));
                    var_19 -= (((((var_8 == var_1) > var_5)) ? (max(var_0, (var_4 << var_3))) : var_2));
                    arr_20 [3] [i_1 - 2] [i_1] = max((min((var_8 / var_9), ((var_0 ? var_5 : var_2)))), ((((max(var_1, var_3))) * ((var_1 ? var_5 : var_6)))));
                    var_20 = var_2;
                }
            }
        }
    }
    #pragma endscop
}
