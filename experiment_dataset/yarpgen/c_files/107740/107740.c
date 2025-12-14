/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        var_11 = (arr_1 [i_0]);
                        var_12 = (((((2147483392 ? (arr_5 [1] [i_1] [i_2] [i_3]) : (((arr_8 [i_0]) ? (arr_0 [i_3] [i_2]) : (arr_5 [i_0] [17] [i_2] [i_3 + 2])))))) ? (((arr_4 [i_2] [i_1]) ? (arr_3 [i_2] [i_3]) : (((arr_9 [i_0] [i_0] [i_2] [12] [14]) ? 18347 : (arr_8 [i_2]))))) : ((((arr_3 [i_0] [1]) ? (((18338 ? 18334 : (arr_5 [i_0] [i_1] [i_2] [i_3])))) : (arr_9 [i_1] [i_2 - 1] [i_3 - 2] [i_3] [i_3 + 2]))))));
                        var_13 ^= (arr_3 [i_0] [i_0]);
                    }
                    var_14 = (min(var_14, (((var_3 % (((arr_4 [i_0] [i_0]) ? (arr_8 [i_2 + 1]) : (arr_4 [i_1] [i_2]))))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 16;i_5 += 1)
                        {
                            {
                                arr_15 [i_4] [i_2] [i_4] = 1293327488;
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] = (((arr_0 [i_0] [i_1]) ? (((63146 ? 6925 : ((1293327509 ? var_3 : 63144))))) : (((((63135 ? (arr_1 [i_2]) : (arr_6 [i_5 + 1] [i_1] [i_1] [i_0])))) ? (((arr_0 [i_0] [i_0]) ? 3001639797 : (arr_4 [i_1] [i_2 - 2]))) : (((arr_4 [i_2 - 2] [i_0]) % (arr_3 [i_4] [i_5])))))));
                            }
                        }
                    }
                    arr_17 [i_2 - 1] [i_1] [i_1] [i_0] = 12;
                    arr_18 [i_2] [i_1] [i_0] = (arr_14 [i_1] [i_1] [i_2 + 1] [i_0] [i_2 - 1] [i_2] [i_2]);
                }
            }
        }
    }
    var_15 -= var_0;
    var_16 = ((var_7 ? var_10 : 67108848));
    var_17 = var_8;
    var_18 = ((var_10 || ((((((var_2 ? var_7 : 141))) ? (((1293327488 ? 1 : var_2))) : var_1)))));
    #pragma endscop
}
