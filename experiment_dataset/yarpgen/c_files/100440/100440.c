/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((max(var_9, var_0))))) <= ((17688 ^ ((var_7 ? var_6 : var_3))))));
    var_12 = (!2350206440);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_13 = (max(var_13, (1944760855 & 3280685708)));
                        var_14 -= ((((var_5 ? 110 : var_6)) + 3733338149714270984));
                    }
                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        var_15 = (min(var_15, (var_9 - var_0)));
                        arr_11 [i_1] [i_2] [i_4] = (arr_2 [i_0] [i_0]);
                        arr_12 [i_1] = (((((14713405923995280655 ? 4 : 10438152228276364360))) ? (((var_5 >> (var_0 - 8566534771806688251)))) : ((1 + (arr_7 [i_4 - 1] [7] [7] [i_0])))));
                    }
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        var_16 = (arr_9 [i_0] [6] [i_0]);
                        arr_17 [i_0] [i_1] [i_1] [i_5] = ((((max((max(var_2, (arr_5 [i_0] [i_1] [i_2] [i_5]))), (arr_9 [i_0] [i_2] [i_5])))) ? (((((min(var_4, 10677))) || 255))) : (arr_16 [i_1])));
                        arr_18 [i_0] [i_0] [i_2] [i_1] = 2;
                        var_17 = (173771686767731377 <= 18446744073709551615);
                        var_18 = ((arr_3 [i_1]) ? ((-((var_5 ? var_9 : 3733338149714270958)))) : (((+(((arr_1 [i_0]) - (arr_9 [i_0] [i_1] [i_1])))))));
                    }
                    arr_19 [10] [i_1] [i_1] [i_2] = ((!((max((((var_0 ? 0 : (arr_15 [i_0] [i_0] [i_2] [i_2] [i_0])))), (((arr_13 [i_0]) ? var_1 : 4294967295)))))));
                }
            }
        }
    }
    #pragma endscop
}
