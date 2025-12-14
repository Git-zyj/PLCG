/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!649131523);
    var_13 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_14 = (arr_5 [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_15 = ((((max(((((arr_12 [i_0] [i_1] [i_2] [i_3] [i_1]) ? 1593073570 : (arr_9 [i_0] [9] [i_2])))), (arr_8 [i_0])))) ? (max((arr_1 [i_0]), var_8)) : -11033));
                            var_16 = (max(var_16, (((((((max(-11033, 11050))))) == ((((-227441861 ? 18446744073709551615 : -351843395)) * ((min(18, -9))))))))));
                        }
                    }
                }
                arr_14 [i_0] [16] &= ((((((var_6 ? 11033 : (arr_5 [10] [10]))))) ? ((((13 || (arr_10 [i_0] [i_0]))) ? 351843421 : (((arr_10 [i_0] [i_0]) ? (arr_5 [i_0] [10]) : (arr_10 [i_1] [i_0]))))) : (((max((arr_0 [i_1]), (arr_8 [i_0])))))));
                var_17 = ((min((max(14799874964890980834, 3646869108818570802), (((arr_3 [7] [7]) ? 18 : (arr_10 [16] [i_1])))))));
                var_18 |= 490128716756563211;
            }
        }
    }
    #pragma endscop
}
