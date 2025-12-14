/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = ((!((max((arr_2 [i_0] [i_0] [i_0]), -119)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_4] = (!(arr_5 [i_1 + 1] [i_1 + 1] [i_1] [i_1]));
                                var_17 &= (min(((-((var_8 ? (arr_11 [i_0] [i_1] [i_2] [4] [6] [i_0 - 1]) : var_10)))), (arr_1 [13])));
                            }
                        }
                    }
                }
                arr_14 [i_0] [i_0] = (min(7165168456433888726, 7165168456433888724));
            }
        }
    }
    var_18 *= ((((max(11281575617275662894, 7165168456433888741))) ? (((var_6 ? ((max(9535, 22971))) : var_2))) : (((var_8 ? var_10 : -784966309)))));
    var_19 = (min(var_19, ((((!4095) ? (((max(32, 12)))) : (((1272267080 ? 2 : (-9223372036854775807 - 1)))))))));
    var_20 = (min((--250), (max((((2 ? var_14 : -17993))), var_10))));
    #pragma endscop
}
