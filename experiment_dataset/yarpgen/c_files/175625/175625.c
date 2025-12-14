/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 17;i_4 += 1)
                            {
                                arr_18 [0] [i_4 - 1] [i_0] [i_4 + 1] [i_0] [i_4] = (((((((var_1 % var_11) <= var_17)))) & ((-((21325 * (arr_8 [i_0] [i_0])))))));
                                var_18 ^= ((((((arr_6 [i_1 + 4] [i_3 + 1] [i_4 + 1]) >= 3314660112))) < ((((-127 - 1) || 0)))));
                                arr_19 [i_0] [i_0] [i_3] [4] = (((-(var_11 + var_16))));
                                var_19 = (((~var_15) - (5343 % 2199023255551)));
                            }
                            arr_20 [i_0] [i_1] [i_2] [12] [i_0] [i_1 - 1] = ((-980307184 & ((var_5 * (((~(arr_15 [i_0] [i_1] [2] [i_0] [i_3] [i_3]))))))));
                            var_20 *= ((-(((!(arr_5 [8] [i_3 + 1]))))));
                        }
                    }
                }
                arr_21 [i_0] = ((((~(arr_6 [i_1 + 3] [i_1] [i_1]))) >> ((~(~0)))));
                var_21 = (max(var_21, 2040));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_22 = (((~1439067313) >= (!2011)));
                            var_23 = (1 + -18446744073709551615);
                            var_24 = (((var_3 & 102) * (!1888928080)));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_25 = (((((~(var_6 * 4294965284)))) >= ((var_2 | (arr_14 [i_1] [i_0] [i_1 + 1])))));
                                var_26 = (102 * 134217727);
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = -var_7;
    #pragma endscop
}
