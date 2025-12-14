/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        var_20 = ((~(min((arr_8 [i_3] [i_3 + 1] [i_3 - 1] [17]), var_17))));
                        arr_10 [i_0] [i_1] [13] [i_1 + 1] [i_2] = (arr_1 [i_2] [i_2]);
                    }
                    arr_11 [i_0] [i_1] [i_2] |= ((3 && ((((arr_7 [4] [3] [i_2] [i_1] [i_1 - 1] [i_1]) ? ((((arr_6 [i_0] [i_0] [i_2]) ? -21345 : (arr_1 [i_0] [i_0])))) : 19)))));
                    var_21 = (min((arr_6 [i_1] [i_1] [i_1 + 1]), (max((arr_2 [i_0] [i_0]), ((max((arr_9 [i_2] [2] [i_1] [i_0]), (arr_9 [i_1] [1] [i_2] [i_1]))))))));
                    var_22 |= (((max(((((arr_7 [i_0] [i_1 - 1] [i_1 + 1] [i_1] [i_2] [i_2]) * (arr_0 [i_0])))), 36265387))) ? ((4294967292 ? (arr_6 [i_0] [i_1 + 1] [i_2]) : (arr_1 [i_1 - 1] [i_1 - 1]))) : (arr_4 [i_1 + 1]));
                    var_23 = (min((min((arr_6 [i_1 + 1] [i_1 + 1] [i_1 + 1]), (arr_6 [i_1 - 1] [i_1 + 1] [i_1 - 1]))), -9223372036854775794));
                }
            }
        }
    }
    var_24 *= var_2;
    var_25 = (max(var_25, (!var_17)));
    var_26 = ((var_11 - (min(226960171, ((3824301922 ? var_4 : 4294967292))))));
    var_27 &= var_16;
    #pragma endscop
}
