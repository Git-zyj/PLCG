/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_0] = -1;
                    var_11 = 191;
                    var_12 = min(var_5, ((max((min(var_2, -5)), ((max(65535, -15675)))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            {
                var_13 = (min((min(12096954257658115761, var_7)), ((max(0, var_6)))));
                var_14 = (arr_1 [i_3 + 1]);
                arr_11 [i_3] [i_3] [i_3] = 13;
                var_15 = ((var_1 | ((((min(1392675613, (arr_7 [i_4]))) >> (((arr_2 [i_3 + 2] [i_3 + 2]) - 3574033351)))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_16 = (max((8170826890046555576 || 65535), (arr_5 [i_3] [i_3] [i_3] [i_3])));
                            var_17 *= (min((min((min(0, (arr_16 [i_5] [i_5] [i_6]))), 18)), (((4431099436021317559 || (arr_16 [i_5] [i_3] [i_3 + 1]))))));
                            var_18 *= (min(-29, (((-23 & (arr_10 [i_3 + 1] [i_6 - 2] [i_3 + 1]))))));
                            arr_17 [i_6] [i_5] [i_6] = 9223372036854775807;
                        }
                    }
                }
            }
        }
    }
    var_19 = var_7;
    #pragma endscop
}
