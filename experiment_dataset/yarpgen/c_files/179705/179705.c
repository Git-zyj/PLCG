/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!0);
    var_12 = (--34230);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    var_13 = ((32704 & (((((min(0, -1))) ? (max(-576, 7469489555729319073)) : (((arr_6 [17] [i_1] [8] [5]) ? var_1 : (arr_1 [i_1] [i_2]))))))));
                    var_14 = ((~((min(var_8, 576)))));
                }
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_15 = ((~((var_0 ? (arr_6 [i_0] [i_3] [i_4] [i_5]) : var_9))));
                                arr_17 [i_0] = ((204017122 || (((max(2685462918, 13600))))));
                                var_16 ^= (min((arr_1 [9] [i_4]), ((~((var_5 ? (arr_10 [1] [1] [3] [6] [1] [i_3]) : (arr_13 [6] [6] [9] [14] [2] [i_5])))))));
                                var_17 *= (((!var_9) ? (((~((min((arr_6 [i_1] [i_3] [i_4] [15]), (arr_2 [i_0]))))))) : (max(65011712, -576))));
                                var_18 *= 4090950173;
                            }
                        }
                    }
                }
                var_19 = (min(var_19, ((max(((((((var_3 ? (arr_10 [i_0] [i_0] [i_0] [2] [i_0] [i_0]) : var_5))) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : ((max(var_8, 255)))))), (max((max(-8737934471859995386, var_0)), 239)))))));
            }
        }
    }
    #pragma endscop
}
