/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= 7117379544249738147;
    var_12 = (min(var_12, ((((max(((var_3 ? 7117379544249738165 : var_5)), (~var_5))) / (((max(var_10, var_6)))))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (min(((~(arr_1 [i_0]))), (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        arr_3 [i_0] = ((~(max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))));
        var_13 += (((var_3 / 1) ? ((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) : ((+((var_4 << (((arr_0 [i_0] [i_0]) - 3073156262))))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_14 = (max(var_14, (~122)));

                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            var_15 = (min(var_15, (arr_13 [i_3] [i_3])));
                            var_16 = ((1548268691 ? 132 : 7992598610217854890));
                            arr_18 [i_2] [i_3] [i_2] [i_1] [i_2] = (!7117379544249738147);
                        }
                        arr_19 [i_0] [i_1] [i_2] [i_3] = (((((((133143986176 ? -6620531242234881511 : 2788729725066095325))) || (((1948810402 ? 1 : 1))))) ? ((~(arr_6 [i_3]))) : (max((arr_9 [i_1 + 1] [i_1] [i_1]), (arr_9 [i_1 + 1] [i_1] [i_1])))));
                        var_17 = (min(var_17, (((min((((arr_17 [i_0] [i_1] [i_2]) / (arr_12 [i_3]))), ((((arr_13 [i_3] [i_3]) ? (arr_9 [i_3] [i_2] [i_0]) : (arr_1 [i_0]))))))))));
                    }
                }
            }
        }
    }
    var_18 = ((min((var_7 | var_3), var_4)));
    #pragma endscop
}
