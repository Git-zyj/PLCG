/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_15 += 0;
        var_16 -= (((min(-5616136162373091204, (~9223372036854775807)))) ? (((6173352282028745650 == ((9223372036854775807 & (-2147483647 - 1)))))) : ((((1 < 1) != (arr_0 [i_0])))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            {
                var_17 = (min(var_17, ((min(0, (arr_7 [i_1] [i_1]))))));
                arr_9 [8] &= 0;
                var_18 += (((((arr_5 [6]) ? (arr_5 [4]) : 3503019781967285364)) < ((1 ? 7746584487124457546 : (arr_5 [4])))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            arr_16 [i_1] [i_1] [i_3] [i_4] = (((((max(-218442350, (arr_10 [i_1]))))) + 1));

                            for (int i_5 = 0; i_5 < 18;i_5 += 1)
                            {
                                var_19 ^= (~-7746584487124457547);
                                var_20 = (1568944107824675400 < -807106114);
                                var_21 = 807106113;
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 1;i_6 += 1)
                            {
                                var_22 = (((4294967040 ? -7746584487124457547 : 1)));
                                var_23 = (-933163664 * 0);
                            }
                            for (int i_7 = 1; i_7 < 14;i_7 += 1)
                            {
                                arr_27 [i_1] [i_2] [i_1] [i_1] [i_1] = 6293426602092912278;
                                var_24 = (max(var_24, ((0 ? (-9223372036854775807 - 1) : 1))));
                                var_25 += (((min((arr_23 [i_1] [16]), 6780123070548998440)) < (-2073511277 < 7746584487124457547)));
                            }
                            var_26 = (max(var_26, (((3770382761080872899 ? 1 : (((-1809685002 + 1463452714) ? (arr_12 [6] [6]) : (arr_20 [1] [i_2] [i_3] [1] [i_4] [i_4]))))))));
                            arr_28 [i_2] [i_1] = (-7746584487124457527 & (min((((arr_19 [i_1] [i_1] [i_3] [i_3] [i_1]) ^ -807106107)), (arr_24 [i_1] [i_2] [i_2] [i_4] [i_4] [i_2] [4]))));
                        }
                    }
                }
            }
        }
    }
    var_27 = (0 ? 1 : 1);
    #pragma endscop
}
