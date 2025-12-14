/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!var_2);
    var_12 = ((~(((var_7 & 3237844669441341220) >> (((var_7 ^ 186) - 179))))));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = ((((((arr_0 [i_0 + 1]) >> (((arr_0 [i_0 - 1]) - 6887994653340723226))))) || (arr_1 [i_0 + 1])));
        var_13 = (((arr_0 [i_0 - 1]) <= (var_4 <= 0)));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = ((-((~(!-2771)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_14 = var_1;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 9;i_5 += 1)
                        {
                            {
                                var_15 |= ((-2770 | (arr_9 [3] [i_2] [4] [i_4])));
                                var_16 = ((-((((arr_14 [i_1]) <= (arr_12 [i_1 - 1] [i_3] [i_3] [i_5] [i_5 - 1]))))));
                                var_17 = (max(var_17, ((((2777 % (arr_12 [i_5 - 2] [i_5] [i_5 + 1] [i_1 - 1] [i_1 - 1])))))));
                                arr_17 [i_1] [i_1] [i_1] [i_3] [i_4] [i_4] [1] = (min((~var_9), (((!(-2078533835 ^ 1073741824))))));
                                var_18 = (((((var_3 / var_6) < ((var_5 ? 26 : 1))))) >> 1);
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 9;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_19 = 1;
                        var_20 = (min(var_20, (((-229 <= (max((2758 || -559394222), (-72 | 0))))))));
                        arr_27 [i_8] [i_1] [i_7 + 1] [i_8] [i_8] = (!-2769);
                    }
                }
            }
        }
    }
    var_21 = ((255 ^ (var_6 & 1)));
    #pragma endscop
}
