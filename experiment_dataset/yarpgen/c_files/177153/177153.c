/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-(5509 - 2592727176490656625)));
    var_13 = (((5187283306163969981 + var_4) ? -31164 : 0));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0 + 1] [i_0] [i_2] = ((-(max(1048575, -1))));
                    var_14 = var_2;
                    var_15 = min((max(66, var_9)), 9);
                    arr_9 [i_0] [i_1] = (min((max(32767, 1037661395), var_0)));

                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        var_16 = (((((5066076885481514661 ? 5066076885481514639 : 1153411712))) ? (arr_7 [i_0] [11] [i_0] [i_3 + 2]) : ((((max(3153546202, var_0))) ? ((6800092384232265047 >> (-5372950366445843104 + 5372950366445843136))) : var_0))));
                        arr_12 [i_1] [i_3] = ((!(((var_9 ? 1718746371 : (arr_1 [i_0 + 1]))))));
                    }
                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        var_17 = (((((((max(var_5, var_1))) ? (arr_6 [i_0] [i_0] [i_2] [1]) : (max(var_7, var_9))))) ? (arr_1 [i_2 - 1]) : (var_3 && -var_7)));
                        var_18 = (((((4 ? 5066076885481514639 : 5))) ? ((((((((arr_13 [i_4] [i_1]) << (((arr_7 [i_4] [1] [1] [i_4]) - 116564210))))) && ((((-127 - 1) ? -5066076885481514629 : 99))))))) : ((var_9 ? var_8 : 2094971152))));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_19 [i_0] [i_5] = -0;
                        arr_20 [i_0] [i_5] [i_2] [i_5] = ((!(((arr_16 [i_5] [i_1]) && (((var_10 ? var_2 : (arr_14 [i_0] [i_0] [i_5] [i_1] [1] [i_5]))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
