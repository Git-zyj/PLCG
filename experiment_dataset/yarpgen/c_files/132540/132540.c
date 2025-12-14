/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 48;
    var_18 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (max(-955502432593554127, (((arr_3 [i_0] [i_0]) ? (max(var_14, 2176723921901449631)) : (var_0 && 2147483647)))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 11;i_4 += 1)
                            {
                                arr_14 [i_2] [i_2] [1] [i_2] [i_4] [i_1] [i_4] = ((21 + 13987949244783037587) && ((min((!var_13), 13987949244783037587))));
                                arr_15 [i_0] [i_0] [i_2] [i_3] [4] [i_4] = var_1;
                                arr_16 [i_0] [i_1] [i_2 - 2] [i_3] [i_3] [i_4] [i_3] = ((192 >> (-2176723921901449633 + 2176723921901449656)));
                            }
                            for (int i_5 = 2; i_5 < 8;i_5 += 1)
                            {
                                var_20 += ((-(arr_12 [i_0] [i_1] [i_2 + 1] [i_1] [i_5 + 2])));
                                var_21 += (((((((((arr_1 [i_0]) / 1))) ? var_16 : (((144115188042301440 != (arr_3 [i_2 - 1] [i_3]))))))) && var_8));
                                arr_19 [7] [i_1] [i_1] [8] [i_3] [1] [i_5] = 2176723921901449631;
                                var_22 = (min(var_22, ((((6 * (arr_4 [i_0] [i_0] [10] [i_5 - 2])))))));
                            }
                            for (int i_6 = 0; i_6 < 11;i_6 += 1)
                            {
                                arr_22 [i_0] [i_1] [i_2] [i_1] [i_6] = var_16;
                                var_23 -= (((((((1 ? 1455211054 : 26945))) + (466768815 & var_12))) <= -25580));
                            }
                            /* vectorizable */
                            for (int i_7 = 1; i_7 < 7;i_7 += 1)
                            {
                                var_24 = var_13;
                                arr_25 [i_0] [3] [3] [i_0] [i_0] [i_0] = (((arr_1 [i_2 - 2]) < 26943));
                                var_25 = ((109152165 - (arr_13 [i_2 - 1] [i_2] [i_2 - 2] [i_3 + 2] [i_7 + 2] [5])));
                                arr_26 [i_0] [i_3 - 2] [2] [i_0] [i_0] = (-1 % 1);
                                var_26 ^= var_16;
                            }
                            var_27 ^= ((-((49714 ? var_4 : ((6873701550070618086 << (255 - 255)))))));
                            var_28 = (((min(((-(arr_18 [7] [i_1] [i_2] [i_3] [i_3]))), (arr_20 [i_3]))) / ((min((arr_13 [i_0] [3] [8] [i_0] [i_0] [i_0]), 6792615699075852189)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
