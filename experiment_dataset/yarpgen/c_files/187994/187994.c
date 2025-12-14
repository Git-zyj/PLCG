/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] = 122;
                    arr_10 [i_1] = ((-(max((-23 + -28), (!677330017)))));
                    var_12 = (max(var_12, (((((min((arr_2 [i_2]), (arr_2 [i_0])))) ? (max(255, 97846276)) : 29)))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_13 = 373418229;
                                var_14 = ((1051175261 != (((arr_8 [i_4 + 3] [8] [i_3 - 1]) ? (arr_8 [13] [13] [i_0]) : 0))));
                                var_15 = ((!((min(((min(255, 876286775276209046))), (max(14715365188291638700, -373418230)))))));
                                arr_16 [i_1] = (((((-96 ^ ((-32753 ? 64 : 255))))) ? ((~(arr_14 [i_0] [6] [14] [i_3 + 1] [i_2]))) : 1686821048));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            {

                /* vectorizable */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_16 = ((arr_21 [14] [i_6] [i_6]) ? (arr_21 [i_5 + 1] [i_6] [i_7]) : (arr_13 [i_5] [i_5] [i_6] [i_7] [i_7]));
                    var_17 ^= arr_3 [i_5 + 1];
                }
                var_18 = ((max(373418231, 1051175282)));
            }
        }
    }
    var_19 = -2;
    var_20 = (var_4 && -var_9);
    #pragma endscop
}
