/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = (max(var_14, var_9));

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_15 = var_1;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_3] [i_2] [i_1] [i_0] = (((((((((arr_10 [i_0] [i_0] [1]) >> (17330202914413516978 - 17330202914413516949)))) / (max(5821701981703607022, (arr_8 [i_0] [i_0] [10] [i_0])))))) ? (~9) : 9));
                                var_16 = ((~(((65535 && ((min((arr_7 [2] [i_0]), (arr_3 [i_0] [i_1] [i_1])))))))));
                                var_17 = (min(var_17, (arr_10 [i_0] [14] [i_4])));
                            }
                        }
                    }
                    arr_13 [i_0] [i_1] [i_1] = var_2;
                    var_18 = (max(var_0, (((!(((var_9 ? 17330202914413516978 : var_1))))))));
                }
                var_19 = 32601;
            }
        }
    }
    var_20 = ((580968549345376486 ? var_5 : -var_4));
    #pragma endscop
}
