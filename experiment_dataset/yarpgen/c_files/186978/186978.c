/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_11));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_15 *= ((((!((min(-55, -117))))) ? var_9 : (max(var_3, (~-734446681)))));
        var_16 = ((((((min(384772009, -734446681))) && ((min(var_10, var_10))))) ? (max(-var_9, (min(var_7, var_11)))) : var_11));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_4 [i_1] = -1;

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                var_17 = (((-100 && 1415132625) | var_2));
                arr_9 [i_2] [i_2] = (-384772009 || ((-734446681 != (!934783634))));
                arr_10 [i_1] = (~384772009);
                arr_11 [i_1] [i_2] [i_3 + 1] = var_0;
                var_18 = var_5;
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {
                        var_19 = max(1, (~var_0));
                        arr_17 [i_5] [i_5] [i_5] = (max(-934783635, 1));
                        var_20 = ((-934783634 ? 1 : 1));
                    }
                }
            }
            arr_18 [i_1] = (1 ? 1 : 1);
        }
        arr_19 [i_1] = 145074382;
        arr_20 [i_1] = var_10;
    }
    var_21 = ((1 ? var_3 : var_0));
    #pragma endscop
}
