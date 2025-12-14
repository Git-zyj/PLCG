/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = max((((var_10 ? (!2849154528) : (!0)))), 2849154528);
    var_16 = (-(~var_1));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = ((((max(0, (arr_0 [i_0])))) < ((((min((-32767 - 1), var_9))) ? ((~(arr_2 [i_0]))) : (arr_0 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 += (arr_0 [i_1 - 1]);
                    var_18 *= ((~((+((0 ? (arr_1 [i_0] [i_1]) : 10225263547344658182))))));
                }
            }
        }
        arr_8 [i_0] &= (arr_7 [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_19 = (arr_0 [i_3]);
        var_20 = ((arr_4 [i_3]) ? ((~((var_4 ? (arr_6 [i_3] [i_3] [i_3] [i_3]) : (arr_5 [i_3] [i_3]))))) : ((((var_14 != (arr_0 [i_3]))))));
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        var_21 = var_1;
        var_22 -= (min(((-((~(arr_13 [0] [i_4]))))), (max((((arr_7 [i_4] [i_4] [i_4] [i_4]) / 11)), 1))));
    }
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        arr_18 [i_5] = (min((((arr_4 [i_5 + 1]) >= (arr_4 [i_5 + 1]))), (!0)));
        arr_19 [i_5] [i_5] = 0;
        var_23 *= (((!var_14) ^ var_7));
    }
    #pragma endscop
}
