/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~((-7230585243789812608 ? 5818092342501247311 : 7044201567145787311)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_0] = (~(~7044201567145787311));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] = ((~((~(max(var_11, (arr_6 [i_0])))))));
                                arr_17 [0] [18] [0] [i_2] [18] [12] &= ((arr_10 [12] [i_1] [i_1] [i_1] [i_1 - 3] [i_1 + 2]) ? ((~(arr_10 [12] [i_1 + 2] [12] [12] [i_1 + 3] [i_1 + 3]))) : (~2545610415));
                            }
                        }
                    }
                    var_19 = (((((((8516115480814744940 ? var_16 : (arr_8 [3] [i_0] [i_0])))) != ((-(arr_14 [i_1 - 1] [i_2]))))) ? ((11402542506563764292 ? 2305280059260272640 : 8516115480814744938)) : ((1784814331 ? 8817553868085535104 : 2043366252))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_25 [i_1 - 3] [i_5] &= arr_19 [i_0] [i_0] [i_5] [i_6];
                                arr_26 [i_0] [i_0] [i_0] [i_5] [i_5] [i_0] &= ((((2251601044 < (11402542506563764310 ^ 2043366252)))));
                                arr_27 [i_0] [i_0] [1] [2] [i_6] = (min((arr_7 [i_0] [i_1 - 3] [i_2] [i_6]), (((var_7 ? var_10 : 8008297337983358019)))));
                            }
                        }
                    }
                    var_20 = (min((min((~var_5), -8008297337983358015)), (arr_2 [5])));
                }
            }
        }
    }
    #pragma endscop
}
