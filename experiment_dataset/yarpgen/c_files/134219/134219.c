/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((max(var_12, var_11))) || var_1));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    var_21 = (max(((max((arr_1 [i_1 - 3] [i_2 + 2]), var_5))), ((((arr_5 [i_0] [12] [i_1 - 1] [i_2 + 2]) != (((((arr_3 [i_0] [i_1 - 3] [i_2 - 2]) || -9038766340286220095)))))))));
                    arr_6 [i_0] [i_1] [i_2] = -7077013678973367287;
                    var_22 = (max(var_22, (((!(!-var_8))))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_11 [2] [i_3 - 1] [i_3] [10] [i_1] = arr_7 [11] [i_1 + 1] [11] [11];
                                arr_12 [i_1] [i_2 - 1] [i_2 + 1] = (arr_2 [i_1 - 1] [i_2 - 2] [i_4]);
                                arr_13 [i_1] = (((1297604381 - -9038766340286220095) >= ((((arr_5 [10] [6] [i_4 - 1] [i_3]) ? (arr_10 [i_0] [i_0 + 2] [i_0] [i_0 + 4] [i_0]) : var_4)))));
                                var_23 = (((max(var_18, (!6410061475777996402))) / -4830906892174250501));
                            }
                        }
                    }
                    arr_14 [i_0 + 4] [i_1 - 3] [i_1 - 3] [i_1] = (min(((((arr_4 [i_0] [i_1 + 1] [i_2] [i_2]) ^ (max(var_2, (arr_5 [i_0] [i_1] [i_2 + 2] [i_1 + 1])))))), 9123729518359883802));
                }
            }
        }
    }
    var_24 |= var_16;
    var_25 = (max(var_25, var_0));
    #pragma endscop
}
