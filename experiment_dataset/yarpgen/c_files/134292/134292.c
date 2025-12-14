/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_1] = (((((~(arr_4 [i_0])))) ? (((-1 ? 1 : (arr_1 [6])))) : (arr_3 [i_0] [i_1] [i_1])));
            var_18 = 15014475363863655686;
        }
        arr_6 [i_0] = (((arr_2 [i_0] [i_0]) >> (((arr_2 [i_0] [i_0]) - 6973914913810405037))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] [i_2] |= (((arr_1 [i_2]) ? (arr_1 [i_2]) : (arr_1 [i_2])));
        arr_11 [i_2] = (((((arr_2 [6] [i_2]) >> (((arr_0 [i_2] [i_2]) - 850468235))))) ? (1477842426846156005 <= -1477842426846155997) : -1);
        arr_12 [i_2] = ((-(arr_1 [i_2])));
        var_19 = var_1;
        arr_13 [8] = -824599586;
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_20 -= (+-1477842426846156006);
                                var_21 = (max(var_21, (((-404 == ((+(min((arr_16 [2] [i_4] [i_5]), var_11)))))))));
                            }
                        }
                    }
                    var_22 -= ((((((((-(arr_21 [i_3])))) ? (((var_8 ? 524287 : -81))) : 130240048))) != ((var_10 / (arr_2 [1] [12])))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                arr_28 [i_5] = (-824599579 ? (((12037 ? 517227410 : 742))) : ((((13129 % 742) != -1))));
                                arr_29 [i_5] [9] [i_4] = ((var_10 ? ((((~7227) != ((-4672969147513910145 ? 1 : 0))))) : 2147483629));
                                arr_30 [i_5] [i_4] [i_5] [i_8] [i_9] [i_9] = min(4806552178767327799, var_5);
                                var_23 = (min(var_23, ((((~var_7) ? ((-19670 ? (arr_17 [i_5]) : (~-524296))) : (((((arr_20 [i_8] [i_5] [9]) ? (arr_16 [2] [i_5] [i_8]) : var_1)))))))));
                            }
                        }
                    }
                }
            }
        }
        arr_31 [11] [i_3] = -1;
    }
    var_24 = var_4;
    var_25 = (min(-4672969147513910130, (((min(var_8, var_0)) & (((var_11 ? -24 : -40)))))));
    #pragma endscop
}
