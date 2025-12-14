/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((258 != -833493957) ? 109 : 1)));
    var_16 *= ((var_13 >> (((((~var_4) ? (~255) : (((-99 + 2147483647) >> (45090 - 45085))))) + 286))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_17 &= ((-((3287617177393058058 ? (((arr_10 [i_3]) ? 1 : (arr_11 [i_0] [i_0] [i_0]))) : var_9))));
                                var_18 = (((arr_9 [i_0] [i_0]) / (arr_2 [i_0])));
                            }
                        }
                    }
                    var_19 = (max((((arr_13 [i_2] [i_0] [i_1] [i_1] [i_0] [i_0]) ? 5651340493856221143 : (arr_1 [i_0]))), 1));
                    var_20 = ((((max(-1, (~17666572764673088498)))) || (((~(min(463065061229773787, (arr_10 [i_0]))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_21 = (max((arr_13 [i_0] [i_0] [i_1 + 2] [i_0] [i_0] [i_6]), ((((var_1 - (arr_15 [i_0] [i_0] [i_0] [14] [14])))))));
                                var_22 = (((~-100) >> (((~255) + 260))));
                                arr_23 [i_0] [i_1] [i_0] = ((((~(~var_1))) / ((~(var_10 <= var_2)))));
                                var_23 = ((~(~29950)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = ((((min((~106), (max(var_2, var_14))))) ? (((245 ? 247 : ((min(-116, -99)))))) : var_13));
    #pragma endscop
}
