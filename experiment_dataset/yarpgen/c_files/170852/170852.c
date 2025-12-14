/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] = (~(((arr_1 [i_0]) ? (arr_1 [i_0]) : var_5)));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_19 = (max(var_19, (arr_1 [i_2])));
                            var_20 = (max(((((((2118181337138234288 ? 2118181337138234286 : 2118181337138234288))) ? (!var_1) : ((min(65393, (arr_1 [12]))))))), 2561467895));

                            for (int i_4 = 1; i_4 < 13;i_4 += 1)
                            {
                                arr_14 [i_3] [i_1] = (min(((min((arr_7 [i_2 - 1] [i_4 + 1] [i_2] [i_3]), (arr_7 [i_2 - 1] [i_4 - 1] [i_2] [i_2])))), (2118181337138234285 - 48)));
                                var_21 = arr_9 [i_2];
                                arr_15 [i_3] = (((((arr_8 [i_0] [i_1] [i_2 + 1]) & (((arr_13 [i_3] [i_4 - 1]) ^ 1)))) - (arr_7 [i_2] [i_2 - 2] [i_2 + 1] [i_2])));
                                arr_16 [i_0] [i_3] [i_0] [i_0] [i_0] = (((((min((arr_9 [i_0]), (arr_8 [i_3] [i_1] [i_1])))) ? (arr_3 [i_0]) : (min(16328562736571317331, 2118181337138234286)))) % ((((var_13 / (arr_11 [i_0] [i_0] [i_3] [3] [i_3] [i_4]))) << ((((arr_12 [i_0] [i_1] [i_2 + 2] [i_3] [i_4] [i_3] [i_4]) >= (arr_8 [i_1] [4] [i_3])))))));
                                var_22 = 16440703938535850358;
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 14;i_5 += 1)
                            {
                                arr_19 [i_0] [9] [i_2] [i_3] [i_2] = var_16;
                                var_23 = (arr_0 [i_2 + 2]);
                                var_24 = 2118181337138234293;
                                var_25 = 2118181337138234292;
                            }
                            var_26 = (12497072642118315113 - ((2118181337138234293 << (((16328562736571317330 ^ -755748964) - 2118181337590879120)))));
                        }
                    }
                }
            }
        }
    }
    var_27 = (~32319);
    #pragma endscop
}
