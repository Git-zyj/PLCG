/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = max(((min(51, 71))), (((~var_1) ? (max(1497419536, var_9)) : (~var_4))));
                var_16 *= ((min((min(var_1, var_1)), var_4)));
                arr_4 [i_1] = ((((max(((var_12 ? 11466337232794140606 : 26488)), var_13))) || 1));
                arr_5 [i_0] [i_0] &= var_9;

                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    var_17 = (min(var_17, (((-((46 >> (-50 + 76))))))));
                    arr_9 [i_1] [i_1] = ((((min((max(var_14, var_8)), (!var_7)))) / ((var_9 ? (min(2147483647, 14118891837731464792)) : (((max(var_5, -66))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_18 &= max(17400, 78);
                                arr_15 [i_0] [i_0] [i_1] [i_3 - 1] [i_4 + 3] [i_3 - 1] = (max(var_0, (max(var_3, 2908628))));
                                arr_16 [i_0] [i_1] [i_2] [i_0] [i_4] |= (((max(4294967288, var_4)) >= ((((((var_8 ? 243 : var_2))) ? ((max(var_0, var_1))) : 51028)))));
                                arr_17 [i_0] [i_1] [i_1] [i_3 + 1] [14] [1] [i_3] = max(var_0, (((~((0 ? var_2 : var_4))))));
                            }
                        }
                    }
                    var_19 ^= (max((!var_1), ((var_7 || ((min(126, var_8)))))));
                }
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    var_20 = (max(var_20, (((((3361 + (min(4327852235978086841, var_11))))) ? (24 + 65) : (max(4072539291433982284, 4294967295))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_21 -= var_6;
                                var_22 = (min(var_22, ((min(var_9, -var_14)))));
                                arr_27 [i_0] [i_1] [i_1] = var_10;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        for (int i_9 = 3; i_9 < 7;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                {
                    arr_36 [i_8] [i_8] [i_10] [i_8] = (max(var_3, var_2));
                    arr_37 [i_10] [i_9 - 3] = ((((max((max(var_11, var_12)), (max(var_11, var_9))))) ? ((-((max(var_12, var_10))))) : ((~(~var_1)))));
                    var_23 = (max(var_23, ((max((((max(4327852235978086838, -35)) ^ var_4)), var_5)))));
                }
            }
        }
    }
    var_24 = (~5);
    var_25 += (min((~1816590588), 562189332825927848));
    #pragma endscop
}
