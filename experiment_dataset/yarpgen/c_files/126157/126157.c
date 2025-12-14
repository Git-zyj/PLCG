/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    var_19 = (((((-(((-4384730610108160086 && (arr_6 [i_1] [i_0]))))))) ? ((((min(var_13, (arr_7 [13])))) ? (~82) : (arr_4 [i_1 + 1] [i_0]))) : ((((((((arr_8 [i_0] [i_2]) ? var_3 : (arr_4 [i_0] [i_0])))) && 30))))));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_20 = ((46 || (arr_6 [i_0] [i_0])));
                        var_21 = (((((var_1 < (max(1, 21125832))))) < (arr_2 [i_0])));
                    }
                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {
                        arr_15 [i_0] [i_1] [1] [i_4 + 1] = ((min((arr_2 [i_0]), ((var_8 * (arr_3 [i_1 + 1]))))));

                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_22 = (max(var_22, (((-42 > (((((var_11 << (26752 - 26736)))) ? (~42945) : (arr_13 [i_0] [i_1 - 1] [i_4 + 1] [i_2]))))))));
                            var_23 -= (((arr_9 [i_0] [i_4 + 2] [i_4 + 2] [i_5]) < -964757244));
                            arr_18 [i_0] [i_0] [i_2 - 1] [i_0] [i_0] = (!-8548568508985546934);
                            arr_19 [i_5] [i_0] [i_2] [i_0] [i_0] = ((+(((arr_12 [i_0] [i_2] [i_1 - 1]) ? 40 : (arr_12 [i_0] [i_1] [i_1 - 1])))));
                            arr_20 [i_0] [i_0] [i_0] [i_4 - 1] = (arr_4 [i_1] [i_0]);
                        }
                    }
                    var_24 = (((!13) || (((~(arr_6 [i_0] [i_0]))))));
                    var_25 = (arr_17 [i_2] [i_2] [i_1] [i_1] [i_0]);
                }
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    arr_24 [i_6] [i_0] [i_0] [i_0] = (((((-(arr_7 [i_1 - 1])))) ? 19921 : (arr_9 [i_0] [i_0] [i_6] [i_0])));
                    var_26 *= ((var_6 < ((min((arr_16 [i_0]), (arr_16 [i_6]))))));
                }
                arr_25 [i_0] [i_0] = -2142148764;
            }
        }
    }
    #pragma endscop
}
