/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_0] [8] [i_1] = (min(-2147483644, 16533));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_18 = ((((((!(arr_1 [i_0]))))) < (min(((-120 ? (arr_1 [i_0]) : 41273)), (((var_8 / (arr_0 [i_2]))))))));
                                arr_12 [i_1] = (arr_2 [i_0] [i_1]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_19 *= (((((arr_2 [i_0] [i_1]) / (((arr_6 [i_0] [i_1] [16]) ? 4013252354584095798 : 18446744073709551615)))) << ((+((((arr_2 [i_0] [i_1]) || (arr_10 [i_0] [i_1] [i_1] [i_5] [i_6] [1]))))))));
                                var_20 = (max(var_20, ((~(4013252354584095795 < 6173784775096593917)))));
                            }
                        }
                    }
                    var_21 *= ((~((min(4013252354584095774, 15)))));
                }
            }
        }
    }
    var_22 = (min(var_22, var_6));
    #pragma endscop
}
