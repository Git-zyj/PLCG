/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= ((((((!19725) | 0))) ? ((((var_1 * var_3) != (954213925 != 0)))) : (var_13 ^ var_1)));
    var_19 = var_14;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_0 [i_0]) ? (-32767 - 1) : 1));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_20 = (max(var_20, ((5833455427781156428 || (arr_2 [i_0])))));
            arr_8 [22] [i_0] [i_1] = (arr_2 [1]);
        }
        arr_9 [i_0] = (!-4613501526394721882);
        arr_10 [i_0] = (!var_7);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                {
                    var_21 = (((~5765589945304180089) << ((((-954213924 ? var_14 : (arr_5 [i_0] [i_0]))) - 11580716115026999475))));
                    var_22 *= (~(arr_7 [i_0] [22]));
                    var_23 *= 8452617976222190818;
                    var_24 *= (((~var_4) ? 17419730122009173537 : 584631423));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        arr_20 [i_4] = (max((arr_16 [i_4] [i_4] [2] [i_4]), (((!(-954213926 <= 1))))));
        /* LoopNest 3 */
        for (int i_5 = 4; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 14;i_7 += 1)
                {
                    {
                        arr_30 [i_6] [i_6] [i_6] [i_6] = ((+(((!((max((arr_5 [i_5] [i_5]), (arr_18 [i_5] [1])))))))));
                        arr_31 [i_6] [i_7] [i_7] = ((+(((((arr_19 [i_4]) >= 50078)) ? 1877989864 : 1))));
                    }
                }
            }
        }
        arr_32 [i_4] = ((~((var_3 >> (954213934 - 954213920)))));
    }
    var_25 = -4613501526394721882;
    #pragma endscop
}
