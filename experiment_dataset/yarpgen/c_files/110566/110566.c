/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= var_4;
    var_12 = (var_10 == var_8);
    var_13 = (451963321600981266 * (4238691079411416038 / var_8));

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = min((min((arr_1 [i_0 - 3]), var_1)), 17994780752108570349);
        var_14 += 4238691079411416038;
        arr_3 [i_0] [i_0 - 3] = ((~var_6) & (max((arr_0 [i_0 - 3]), var_4)));
        arr_4 [14] = (14208052994298135578 ? 14208052994298135578 : 17676701854452854696);
    }
    for (int i_1 = 2; i_1 < 7;i_1 += 1)
    {
        var_15 = 451963321600981266;
        arr_8 [i_1] = var_1;
    }
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 3; i_3 < 15;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    {
                        arr_19 [i_2] [i_3] [i_3] [i_3] = 18446744073709551615;
                        arr_20 [i_2] = 536870911;
                    }
                }
            }
            var_16 = 4238691079411416038;
            var_17 = 7033371985297334607;
        }
        var_18 += 2381841039192680787;
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        var_19 = min((~17994780752108570349), 18446744073709551604);

        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            arr_27 [i_6] [i_7] [i_7] = min(var_3, (((min(648989040100918940, 14208052994298135601)) | var_1)));
            var_20 = max(288230376151711743, 18446744073709551615);
        }
    }
    #pragma endscop
}
