/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= (3759489419 <= var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    var_12 = (max(var_12, ((max((535477867 | var_0), (~4590))))));
                    var_13 = ((+(((var_7 - 4608) ? (32 / var_3) : ((60931 ? (arr_4 [i_0] [i_0] [i_1] [i_2]) : var_0))))));
                }
                var_14 += (((((((4806 >= (arr_2 [i_0]))) ? ((min(4590, -120))) : ((var_2 ? 127 : var_9))))) ? (min((max((arr_4 [1] [i_1] [i_1] [i_0]), -108)), (~1))) : (arr_2 [i_0])));

                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    var_15 = min((~var_8), -64);

                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_16 = ((((1 | (119 & var_6))) | (((((var_6 ? 1853520867 : 1)) ^ ((-9223372036854775806 ? 535477876 : var_3)))))));
                        var_17 = (min(var_17, ((max((((((((arr_7 [i_0] [0] [i_3] [15]) + var_5))) != ((var_8 << (var_4 - 8878263522728785845)))))), (max((arr_0 [i_0]), (arr_0 [i_0]))))))));
                        var_18 = var_7;
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_19 &= (max(2147450880, (((arr_12 [i_0] [i_3] [i_1] [i_0] [i_0]) % (arr_12 [i_3] [6] [i_3] [i_0] [i_0])))));
                        var_20 = (((((arr_10 [i_0] [i_1] [i_3] [i_5]) + 2147483647)) >> (60928 - 60912)));
                        arr_15 [5] [1] [i_3] [i_5] = (((((~-2967585715620662021) ? -121 : (~var_6))) / var_9));
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_21 = ((((max(((var_3 ? var_1 : 1)), ((min((arr_12 [i_0] [i_1] [6] [0] [i_6]), -58)))))) ? 20 : ((var_7 ? (((var_7 << (var_5 - 166779186)))) : ((7004 ? (arr_9 [18]) : var_4))))));
                        var_22 = (max(var_22, (((((min(-120, 106))) - (1 - -150))))));
                    }
                    var_23 *= (arr_12 [i_0] [i_1] [i_3] [i_3] [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
