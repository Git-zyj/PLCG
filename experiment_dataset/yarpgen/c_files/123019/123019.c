/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -37356;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = (((arr_1 [4] [i_0 - 1]) ? ((37356 ? -74 : 1)) : ((~(arr_5 [i_0] [i_0 - 1] [i_1 + 3])))));
                var_17 = ((18 ? 1 : 0));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 14;i_4 += 1)
                            {
                                var_18 = (((1 / 30) ? -31 : (25 * 18047)));
                                var_19 = ((-84 ? 16032993086121907336 : (((arr_10 [i_0 + 1] [i_2 + 1] [i_3 - 4] [i_4 - 1]) / 3406009932223290005))));
                                var_20 = ((-78 != 836057599) % 1);
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                arr_15 [i_5] [i_2] [i_3] [i_2] [i_2] [i_0 + 1] = ((63 ? 0 : 0));
                                var_21 = (arr_6 [i_1] [6]);
                            }
                            for (int i_6 = 1; i_6 < 16;i_6 += 1)
                            {
                                var_22 = ((532088271 != ((((arr_5 [i_3 - 4] [1] [1]) || 224)))));
                                var_23 -= (224 > -1399194023);
                            }
                            for (int i_7 = 1; i_7 < 1;i_7 += 1)
                            {
                                var_24 = ((9044312563312989134 * 0) ? ((532088273 ? ((var_5 ? 1724886040 : -1086287345)) : ((252 ? 6929 : (arr_8 [i_2]))))) : -964555690);
                                var_25 = ((9876509452307489549 ? ((((248 ? 28 : 1)) / (((-1119583149 + 2147483647) << (var_3 - 14005744987931220221))))) : (-19658 < var_9)));
                            }
                            arr_22 [i_0] [i_2] [16] [i_2] = -27047;
                        }
                    }
                }
                var_26 = ((+(((~-1185600083242370773) ? -27 : (arr_7 [i_1 - 2] [i_0 - 2])))));
                var_27 |= 19653;
            }
        }
    }
    #pragma endscop
}
