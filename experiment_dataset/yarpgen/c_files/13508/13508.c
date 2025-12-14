/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_13 += ((((max((((arr_2 [i_0] [i_0]) | (arr_3 [i_0] [i_0] [i_1]))), (((arr_4 [i_0] [i_1] [i_1]) << (60001 - 59976)))))) ? (min(246088872980590168, (arr_2 [i_0] [i_0]))) : (arr_2 [i_0] [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_14 = ((var_8 << ((((var_10 ? (~86) : (arr_6 [i_0]))) + 99))));
                            var_15 |= (min(13167197166182370413, ((min(((max(var_0, var_9))), 32174)))));
                            var_16 = (((((~(arr_0 [i_0] [i_0])))) ? ((min((~var_3), (min(1293356528, -87))))) : ((((min(0, 88))) | (arr_5 [i_0] [1] [i_2] [i_3])))));
                            var_17 = ((var_8 % ((-var_6 ? var_1 : 0))));
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {

        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            var_18 -= (((((min(var_3, var_2)) < var_3)) ? (((((86 != (arr_5 [i_4] [7] [i_4] [i_5])))) % var_8)) : ((-(!var_12)))));
            var_19 += ((min(139, (arr_4 [i_4] [i_5 - 1] [i_5 + 1]))));
        }
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            var_20 = (min(var_20, -32458));
            var_21 = (max(var_21, var_8));
        }
        var_22 = (min(var_22, (((~((-88 & (~var_2))))))));
        var_23 = ((max(-1838854792, 875162276)));
        arr_15 [i_4] = (arr_3 [i_4] [i_4] [i_4]);
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        var_24 = (max(var_24, 32756));
        arr_20 [i_7] [i_7] = ((var_7 ? var_10 : ((((arr_7 [i_7] [i_7] [i_7] [i_7]) <= (min((arr_1 [i_7]), (arr_0 [i_7] [i_7]))))))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        var_25 = (max(var_25, ((((arr_6 [i_8]) ? 0 : (arr_6 [i_8]))))));
        var_26 = 1215622707;
    }
    var_27 = ((-(((var_9 & var_5) / (~var_11)))));
    #pragma endscop
}
