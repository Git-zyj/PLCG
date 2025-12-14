/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((min((~var_10), -var_7)) <= 1));
    var_15 = var_2;

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = (-26786 & 6811510456451336586);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_3] [i_2] [i_3] &= ((((((((!(arr_0 [i_1] [i_1])))) << var_8))) ? (((~(~var_1)))) : var_10));
                        var_16 = 26785;
                        var_17 = ((!((((((16274137571934610946 ? 3003468757 : 4294967293))) ? var_11 : (((3996403896 ? 26785 : var_4))))))));
                        arr_12 [i_0] [i_0] [i_2] [i_0] [i_3] [i_3] = var_1;
                        var_18 &= ((((((26785 ? var_0 : 3996403896)))) >= var_3));
                    }
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        var_19 = max(1959248845, 26793);
        arr_16 [i_4] = (((((var_7 ^ (min(978119265, 3316848030))))) ? var_11 : (((min(var_2, 25))))));
        var_20 = var_9;
    }
    #pragma endscop
}
