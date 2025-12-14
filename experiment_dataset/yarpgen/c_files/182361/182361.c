/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_10 [7] [7] [i_1] [i_2] = (arr_2 [i_2]);
                    arr_11 [i_0] [i_2] [i_0] = ((((((arr_4 [i_1] [i_1]) ? (arr_4 [i_0] [i_2]) : (arr_4 [i_2] [i_0])))) ? (((min((arr_7 [i_0] [i_2] [i_1] [i_2]), (4096 != 205))))) : (max((arr_3 [i_0] [2] [i_2]), (arr_2 [i_0])))));
                    arr_12 [i_2] [i_2] = (3698726694385660557 / 17);
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    var_11 = (((~(arr_14 [i_0] [13] [i_3]))));
                    arr_15 [i_0] [i_0] [i_0] = -262143;
                }
                var_12 = (min(var_12, ((min((((!(arr_1 [i_0])))), (max((arr_5 [i_0] [i_1]), (arr_13 [i_0] [i_0] [i_1]))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_30 [i_4] [i_5] [i_6] [i_4] [i_8] = (max(4114, 1761396978046876362));
                                arr_31 [0] [i_5] [i_4] [i_7] [i_8] = (min((min((-114 <= 117), (arr_14 [i_8] [i_5] [i_4]))), ((max((arr_16 [i_4]), (arr_16 [i_4]))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        {
                            var_13 = (((max(-32, (arr_24 [i_4] [i_4] [i_4] [i_10]))) ^ (arr_28 [i_4] [i_4] [i_9] [i_4])));
                            var_14 *= (arr_3 [i_4] [i_9] [i_10]);
                            var_15 = (arr_19 [i_4]);
                            var_16 = (min(((((((arr_26 [i_4] [6]) ? (arr_14 [i_4] [i_5] [i_9]) : (arr_2 [i_5])))) ? -1887666704 : (min((arr_26 [i_9] [2]), (arr_24 [i_4] [i_4] [0] [i_10]))))), (arr_16 [4])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
