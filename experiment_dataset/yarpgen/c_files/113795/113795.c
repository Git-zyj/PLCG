/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [1] = ((60071 != (((-1824734333 <= (((arr_5 [i_0] [i_0] [i_1] [i_1]) ? 5476 : (arr_3 [i_0] [i_0]))))))));
                    var_14 -= (((arr_1 [i_1] [i_2 + 1]) >= (arr_2 [i_2 - 1] [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_15 = (min(var_15, ((((arr_4 [i_2] [i_2] [i_2 - 2]) ? (arr_9 [i_3]) : (((29788 ? 60067 : 1))))))));
                                var_16 = 5;
                                var_17 = (min(var_17, ((((((arr_5 [i_0] [i_4 + 2] [i_2 - 2] [i_0]) || 36028797018963967)) ? ((5469 ? 0 : -1824734349)) : ((7895596626292354037 ? (arr_5 [i_0] [i_4 + 1] [i_2 - 1] [i_0]) : 5463)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 4; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {
                    var_18 = 19;
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 21;i_9 += 1)
                        {
                            {
                                var_19 = (max(var_19, (arr_17 [i_8] [i_7])));
                                var_20 |= (((arr_16 [i_5 - 4]) == (((arr_22 [12] [i_7] [i_9 + 1]) ? (arr_16 [i_8]) : (arr_16 [i_5 - 1])))));
                                var_21 = ((((((arr_21 [i_5] [i_5] [i_5 + 1] [i_5] [i_8 - 1] [4]) ? 5441 : (arr_21 [i_5] [9] [i_5 + 1] [i_5] [i_8 - 1] [i_5 + 1])))) ? (((((arr_21 [i_5] [i_5] [i_5 + 1] [i_5] [i_8 - 1] [i_9]) <= (arr_21 [i_5] [10] [i_5 + 1] [i_5] [i_8 - 1] [i_8 - 1]))))) : (arr_21 [i_5 - 3] [i_5] [i_5 + 1] [i_5] [i_8 - 1] [i_9])));
                                var_22 = (arr_12 [i_5] [i_7]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = var_7;
    var_24 = (max(var_24, (((-4748194221659884945 & (var_1 || -1662557766))))));
    #pragma endscop
}
