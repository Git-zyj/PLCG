/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += var_12;

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_15 = (min(var_15, ((min((((((min(-1906920385, (arr_1 [i_0])))) ? (arr_1 [i_0 + 2]) : 1))), (((((min(var_2, (arr_1 [i_0]))))) | ((var_10 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0]))))))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_16 = (min(var_16, (arr_0 [i_0] [i_1])));
            var_17 = (min(var_17, ((((arr_1 [i_1]) ? ((var_2 ? 7720028077353246298 : var_7)) : -16384)))));
            var_18 = (min(var_18, ((((arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? (arr_0 [i_1] [i_0 + 1]) : (((((arr_5 [i_0]) <= (arr_2 [i_0] [i_0 - 2] [i_1]))))))))));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_19 = (min(((-(((arr_6 [i_2] [i_2]) ? (arr_0 [i_0] [i_2]) : 7720028077353246290)))), var_13));
            var_20 ^= (((((arr_0 [i_2] [i_0 + 2]) ? (arr_0 [i_0 - 1] [i_0 + 3]) : (arr_0 [i_0] [i_0 - 1]))) * (min((arr_0 [i_0 + 2] [i_0 + 2]), (arr_0 [i_2] [i_0 - 1])))));
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_21 += ((((((arr_10 [i_3] [i_3]) != var_9))) - (min((arr_6 [i_0] [i_0 + 2]), (arr_6 [i_0] [i_0 + 2])))));
            arr_12 [i_3] [i_3] [i_3] = -126;
            var_22 *= (((((arr_3 [i_0] [i_0 - 1]) < (var_3 + var_5))) ? 7720028077353246296 : (min((-7720028077353246276 + var_9), (arr_9 [i_0 + 2])))));
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 11;i_5 += 1)
            {
                {
                    var_23 = (min(var_23, ((((arr_2 [i_0] [i_4] [i_5]) ? ((((max(var_9, (arr_3 [i_0] [i_4])))) - ((var_12 ? (arr_6 [i_4] [i_5 + 4]) : (arr_2 [i_0] [i_0] [i_0 - 1]))))) : (((arr_0 [i_4] [i_0 - 1]) ? (arr_4 [i_0 - 1] [i_0 + 3] [i_0]) : 126)))))));
                    var_24 = (~(min((min(var_5, (arr_13 [i_0 - 1] [i_4] [i_5 - 1]))), ((min((arr_8 [i_4]), (arr_2 [i_5 + 3] [i_5 + 1] [i_5])))))));
                    arr_19 [i_4] [i_4] [i_0 + 1] [i_4] = ((((max((arr_14 [i_4]), -1293192936))) ? (((arr_5 [i_4]) ? (arr_5 [i_4]) : (arr_5 [i_4]))) : var_4));
                    var_25 = (max(var_25, (((!((((arr_5 [i_0]) + (max(var_1, 13))))))))));
                    var_26 = 255;
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            var_27 = ((var_3 ? (arr_22 [i_7]) : (arr_0 [i_6] [i_7])));
            var_28 = ((0 ? (arr_5 [i_7]) : var_11));
            var_29 = (arr_1 [i_7]);
        }
        var_30 = (min((~var_7), 16600));
        var_31 = (max(var_31, (((((((arr_22 [i_6]) ? (arr_22 [i_6]) : 16588))) ? (arr_22 [i_6]) : (((arr_22 [i_6]) ? (arr_22 [i_6]) : (arr_22 [i_6]))))))));
        var_32 = (min(var_32, ((((min((arr_6 [i_6] [i_6]), ((min(var_10, (arr_10 [i_6] [i_6])))))) <= (((arr_11 [i_6] [i_6] [i_6]) ? (arr_2 [i_6] [i_6] [i_6]) : (arr_8 [i_6]))))))));
    }
    for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
    {
        var_33 = (min(var_33, ((max(((~(arr_17 [i_8]))), (min((((arr_20 [i_8] [i_8]) ? (arr_8 [i_8]) : var_4)), (arr_15 [i_8] [i_8] [i_8]))))))));
        var_34 = ((((((arr_20 [i_8] [i_8]) * (((arr_7 [i_8] [i_8] [i_8]) / var_2))))) && (((((max(-126, (arr_0 [i_8] [i_8])))) ? (((arr_10 [i_8] [i_8]) - (arr_2 [i_8] [i_8] [i_8]))) : (((arr_3 [i_8] [i_8]) - 114)))))));
        arr_27 [i_8] = ((((((arr_4 [i_8] [i_8] [i_8]) || ((((arr_22 [i_8]) ? var_1 : 1)))))) << ((((var_5 ? (min(4294967295, (arr_9 [i_8]))) : (((1 ? var_8 : 16))))) - 412789453))));
    }
    #pragma endscop
}
