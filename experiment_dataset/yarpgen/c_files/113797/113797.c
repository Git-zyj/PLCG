/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((min((!var_12), (min(var_10, var_2)))));
    var_15 |= (!var_7);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_16 += ((-32767 - 1) ? (arr_0 [2]) : 32767);
                    arr_9 [i_0] [i_0] [i_2] = (+(((arr_1 [i_2]) & -1553358239)));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    arr_12 [i_0] [i_0] = (arr_10 [i_0] [i_1 - 1] [i_1] [i_3]);
                    arr_13 [14] |= ((((arr_6 [i_0 + 1]) > 32767)) ? 544169019 : (arr_3 [i_1 + 2] [8]));
                    var_17 -= ((arr_1 [i_0 + 1]) ? (arr_1 [i_0 + 1]) : 0);
                }
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    var_18 += (min((var_8 <= var_12), (((arr_7 [10] [i_0 + 1]) ? 14273 : (arr_4 [i_0] [i_0 + 1] [i_1 + 2])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_19 = (max(var_19, (min((arr_17 [i_0] [6] [i_5] [i_6]), (arr_6 [i_0 + 2])))));
                                var_20 = (((arr_11 [i_0] [i_0] [i_0 + 2] [i_1 + 2]) >= (min(-32745, 9223372036854775807))));
                            }
                        }
                    }
                }
                var_21 = ((((max((arr_8 [i_1 - 1] [i_1] [i_0] [i_0]), (((7918688028397911703 > (arr_1 [i_0]))))))) & (((arr_0 [i_0]) ? (~var_6) : (21869 & 7918688028397911703)))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_22 += (min((min(var_8, (arr_24 [i_0] [i_0 - 1] [i_0] [i_7] [i_7]))), ((((arr_24 [i_0] [i_0 - 1] [i_7] [i_0 - 1] [i_0 - 1]) != 54)))));
                            var_23 ^= (arr_15 [i_0] [i_1 - 2] [i_7] [i_8]);
                            var_24 = ((((max(var_12, ((-32763 ? 14275 : 405568372))))) % (arr_10 [i_0] [i_1 - 2] [i_1 - 2] [i_1 - 2])));
                            arr_26 [i_0] [i_1] [i_1] [i_0] = (min(((((arr_25 [i_0] [i_0] [i_0] [i_1 + 1]) ? (arr_25 [i_0] [1] [i_0] [i_1 - 2]) : (arr_25 [i_1] [i_1] [9] [i_1 + 1])))), (arr_25 [i_1] [i_1] [i_1 - 2] [i_1 - 2])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
