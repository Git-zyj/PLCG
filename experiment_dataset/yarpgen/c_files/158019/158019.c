/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= var_1;

    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = ((((max(2716117034343649961, (arr_1 [i_0 - 3])))) ? 10966 : -1));
        var_12 = ((((-1 > (!-8969820323774458554))) ? (((!(arr_1 [i_0 - 2])))) : (((!(((arr_0 [i_0]) < var_1)))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    {
                        var_13 = 100;
                        var_14 = (((max((arr_9 [15] [i_1] [i_1] [24]), (((-4112205945916649236 ? 0 : 1))))) / (((((arr_3 [i_0 - 4] [i_0 - 1]) || (arr_10 [i_3] [i_3 - 1] [i_0 - 2] [i_0 - 3])))))));
                        var_15 = (min(var_15, ((min(-23881, ((((arr_3 [i_0 - 3] [i_0 - 1]) || (arr_3 [i_0 - 2] [i_0 + 1])))))))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            {
                var_16 ^= var_4;
                arr_19 [i_4] [i_4] [i_4] &= ((var_9 ? (-9223372036854775807 - 1) : (!var_6)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 13;i_7 += 1)
        {
            {
                var_17 ^= (min((max((-127 - 1), 1891747648)), (arr_0 [i_6])));

                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_18 = (max(-8969820323774458554, ((max(23881, (arr_4 [i_7 + 1]))))));
                    arr_26 [i_6] [1] = (((~var_3) ? (((arr_22 [i_6] [i_7] [i_8]) ? var_7 : (((((arr_10 [i_6] [i_7] [i_8] [i_8]) != (arr_9 [i_6] [i_6] [i_8] [i_6]))))))) : (((arr_21 [i_7 + 1] [i_7]) ? (arr_21 [i_7 + 2] [i_7]) : (arr_21 [i_7 - 2] [i_6])))));
                    var_19 *= (2964869809718813670 >= 10966);
                    var_20 += var_1;
                }
                arr_27 [i_7] = 1;
                var_21 ^= ((0 == ((((((-10763 != (arr_22 [i_6] [3] [14]))))) % (arr_20 [i_6])))));
                var_22 = (arr_25 [i_6] [i_7] [5] [i_7 + 2]);
            }
        }
    }
    #pragma endscop
}
