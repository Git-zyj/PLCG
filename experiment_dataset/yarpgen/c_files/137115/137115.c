/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_12 = (max((max((max((arr_2 [i_2] [i_1]), var_4)), (((var_0 ? var_3 : 61647))))), ((var_7 ? -4470 : (var_11 + 61647)))));
                    var_13 = (min(var_13, ((min(((((max(var_6, 240))) ? (var_2 ^ 61650) : 0)), (arr_0 [i_2]))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            {
                var_14 = 240;
                /* LoopNest 3 */
                for (int i_5 = 4; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_15 = 14755413056767122894;
                                var_16 = (min(var_16, var_4));
                                var_17 = (min((((1215958486687223798 & 38) % var_10)), ((((max(17, var_4))) ? (((6142444737223547871 ? var_9 : var_5))) : ((var_2 ? -255759472 : var_11))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        {
                            var_18 = (min((((-((-(arr_9 [i_3])))))), (min(-17651776751733280815, (min(16585350639666576073, 2832420773232627740))))));
                            var_19 *= (max(15, var_4));
                            var_20 = var_3;
                            var_21 = (max(var_21, (!var_9)));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 16;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            {
                var_22 |= ((+((((~var_1) || (((-14 ? 16585350639666576073 : 2040))))))));
                /* LoopNest 3 */
                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        for (int i_14 = 4; i_14 < 14;i_14 += 1)
                        {
                            {
                                var_23 = (max(var_23, (((!(arr_12 [i_11] [i_13] [i_13]))))));
                                var_24 ^= 16711680;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
