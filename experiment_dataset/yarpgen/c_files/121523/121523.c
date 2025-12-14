/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_0, -2283480569014307662));
    var_21 = ((((max(7936, 2283480569014307659)) / var_8)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 6;i_2 += 1)
            {
                {
                    var_22 += ((((((max((arr_1 [5] [i_0]), (arr_4 [i_2 + 4] [i_1] [i_0])))) ? (arr_1 [i_0] [i_0]) : (((((arr_6 [i_2] [i_2] [i_2]) && (arr_6 [1] [1] [i_2 + 2]))))))) == ((((min(2283480569014307643, (arr_7 [i_0 + 3] [i_1] [i_1] [0])))) & (max(8191, 111))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_3] [i_2] [i_2] = (((((arr_4 [i_2 + 4] [i_1] [i_0 + 1]) - 22)) >> (((arr_3 [5] [5]) - 57))));
                                var_23 = (arr_9 [i_2] [i_2]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_24 = (((((((((arr_12 [i_5]) - 65514))) ? (arr_2 [i_6]) : (((((arr_14 [i_0] [i_0] [i_2] [i_5]) > -2283480569014307684))))))) ? (((((arr_16 [i_0]) < (arr_2 [i_5]))) ? (((15 ? (arr_12 [i_1]) : 16384))) : (arr_10 [i_0] [i_0] [5] [i_0]))) : -2283480569014307694));
                                var_25 = (max(16384, (arr_17 [i_0] [i_0] [i_0] [i_6] [i_0] [i_2])));
                                var_26 += (min(7939, (((((32767 % (arr_4 [i_0] [i_2] [i_6])))) ? (arr_7 [i_0 + 1] [i_2 + 1] [i_2 - 1] [i_2 + 3]) : (min((arr_6 [i_5] [i_1] [i_2]), -26171))))));
                                var_27 = 32775;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
