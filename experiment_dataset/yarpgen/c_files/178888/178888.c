/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((-((-((-(arr_1 [i_0])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_20 ^= ((~(!2420777696)));
                            var_21 = ((-((-((-(arr_3 [i_0] [i_1])))))));
                            arr_9 [i_0] [i_0] [i_1] [i_2] [i_2] = ((!((!(((-(arr_2 [i_1]))))))));
                            var_22 = ((!(((~((-(arr_3 [i_0] [i_3]))))))));
                            var_23 ^= ((~(-9223372036854775807 - 1)));
                        }
                    }
                }
            }
        }
    }
    var_24 = ((-(!-2420777696)));
    var_25 = ((~(~-6780536717647708746)));
    #pragma endscop
}
