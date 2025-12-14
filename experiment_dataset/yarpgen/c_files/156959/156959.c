/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_14 ? -37 : (~37)));
    var_21 = (~var_1);

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_22 = -37;
        var_23 = (--4762567456991615926);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_24 = (-4762567456991615928 + 8989197016238731104);
            arr_6 [i_0] [i_0] [i_0 + 3] = (arr_0 [i_1]);
        }
        for (int i_2 = 1; i_2 < 24;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                var_25 = var_3;

                for (int i_4 = 3; i_4 < 24;i_4 += 1)
                {
                    var_26 = 4762567456991615926;
                    var_27 = ((((((arr_12 [i_4 - 3] [i_4 + 1] [i_4] [i_4 + 1]) ? var_14 : var_5))) ? var_13 : (2929043153 / var_4)));
                    arr_14 [i_0] [i_2] [i_4] [i_4] = (((((4762567456991615918 ? 32766 : (arr_8 [i_0 + 3] [i_2 + 1])))) ? (!-1875257537) : (~-39)));
                }
            }
            for (int i_5 = 1; i_5 < 22;i_5 += 1)
            {
                arr_17 [i_0] [i_0] [i_5] [i_0] = ((-4762567456991615928 ? (((1 ? (((!(arr_13 [i_0 - 2] [i_5 + 3] [i_5] [i_2] [i_5 - 1])))) : (~var_5)))) : ((((63830 + (arr_11 [i_0] [i_0] [i_5] [i_5 + 1]))) - (min(38, 31))))));
                arr_18 [i_5] = (!((!(arr_5 [i_5] [i_5] [i_5]))));
            }
            var_28 = (!4762567456991615904);
            arr_19 [i_0 - 1] = var_4;
        }
    }
    #pragma endscop
}
