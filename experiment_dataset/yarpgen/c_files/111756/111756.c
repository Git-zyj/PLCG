/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_15 ^= (min((max((arr_6 [i_0] [i_3 + 2] [i_2] [i_3]), var_1)), ((((arr_6 [i_0] [i_3 + 2] [i_3 + 2] [i_3]) <= (arr_6 [i_0] [i_3 + 2] [i_2] [1]))))));
                            var_16 = (!var_10);
                            var_17 = ((((var_0 > ((var_9 ? 0 : (-127 - 1)))))));
                        }
                    }
                }
                var_18 = (((var_2 <= 65520) < (~var_12)));
                var_19 = ((((!(arr_3 [i_0] [i_0]))) && ((((!25123) ? ((((arr_0 [i_1] [i_0]) || 17779993251299090730))) : (arr_7 [i_1] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
