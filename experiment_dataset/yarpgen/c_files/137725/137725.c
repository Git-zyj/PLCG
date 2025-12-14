/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    var_12 = 20515;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = ((((var_0 ? (arr_4 [i_0 - 2]) : 55019))) ? ((244 ? 8672961520956806714 : 75)) : ((((((arr_4 [i_0]) ? 4294967295 : (arr_1 [i_0]))) << (arr_2 [i_1])))));
                var_14 = (4294967291 > 255);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = ((!((((8170466564584133356 != 1037179301852656250) ? 9223372036854775807 : (~0))))));
                            var_15 = (((((((592951296 ? 49 : 1))) ? ((max(1, 13117))) : ((((arr_0 [i_0]) != (arr_1 [i_0 - 1]))))))) ? (((((arr_10 [i_3] [i_3] [i_3] [5] [2] [6]) ? 1732065878 : 17591649173504)) + 8346291703797147717)) : (((1 >> ((((~(arr_1 [i_0]))) - 4125760686))))));
                            arr_12 [i_0] [i_0] [i_0 - 2] [i_0] [i_0 + 1] [i_0 + 1] = (((((((arr_5 [i_1]) && (arr_3 [i_0] [i_0] [i_0]))) && 1022926184)) ? (((!0) ? (var_3 && var_7) : (1116357952 || 4051866472))) : (((!(0 && var_5))))));
                        }
                    }
                }
            }
        }
    }
    var_16 |= (min((((((max(var_10, 1)))) * ((-1253071799 ? var_7 : var_6)))), (((var_0 ? (2147483647 % var_2) : ((min(var_1, 1))))))));
    #pragma endscop
}
