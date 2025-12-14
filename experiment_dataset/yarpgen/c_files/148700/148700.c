/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!-661743602);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_20 = var_16;
        arr_3 [i_0] [i_0] = (max((((max((arr_2 [i_0] [i_0]), var_4)) >> (!496532690))), ((((arr_0 [i_0]) ? ((2822712830572995960 ? var_6 : 528482304)) : (arr_2 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_21 &= 10392318381934507296;
                    var_22 = (min(var_22, ((((arr_7 [i_0] [i_0]) ? (min((3089569326 + 0), (((~(arr_1 [i_1])))))) : 9042368678813273591)))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
                    {
                        var_23 = arr_1 [i_3];
                        var_24 -= ((((((arr_1 [i_2]) >> (var_17 - 16)))) ? ((~(arr_6 [i_0]))) : (arr_7 [i_3] [i_1])));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [i_0] [i_2] [i_4] = ((159 ? 15624031243136555647 : 5163386993126624362));
                        var_25 = ((971854644 ? 10392318381934507292 : (arr_2 [i_0] [i_1])));
                        arr_14 [i_2] [i_2] [10] [i_2] = ((((794422407 ? -4878007189891863146 : (-9223372036854775807 - 1))) > var_17));
                        var_26 = (~var_9);
                    }
                }
            }
        }
        var_27 += 47;
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 21;i_7 += 1)
            {
                {
                    var_28 = var_5;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                arr_30 [i_5] [17] [i_7 - 1] [i_8] [i_5] [i_8] [10] = 8537421093111612547;
                                arr_31 [i_5] [i_5] [i_5] [i_5] [i_7 - 1] [i_6] = ((min(((min(1198771954, 211))), 8537421093111612531)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = ((-1107905117 + 2147483647) >> 0);
    var_30 += var_12;
    #pragma endscop
}
