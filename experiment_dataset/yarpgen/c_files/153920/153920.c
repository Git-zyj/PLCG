/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (-65 * var_2);
    var_13 += (min((min(-106, 4294967293)), var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (((((((arr_2 [i_0] [i_1 + 4]) * ((~(arr_3 [11])))))) ? ((~(arr_1 [i_1 + 4]))) : (((((min(1, (arr_0 [i_1])))) <= (((!(arr_2 [i_0] [i_1]))))))))))));
                var_15 += (arr_0 [i_1]);
                var_16 += (arr_1 [i_1 + 3]);
                var_17 += min((min((arr_2 [i_1 + 4] [i_1 - 1]), (-6548296015558238158 <= 12202110843227186101))), (arr_2 [i_1 + 3] [i_1 + 1]));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_18 += (arr_1 [i_1 - 3]);
                    var_19 = (min(var_19, (((min((arr_2 [i_1 - 1] [i_1 - 2]), (arr_2 [i_1 + 3] [i_1 + 3])))))));
                    var_20 += ((((((-19 <= 12202110843227186081) ? ((min((arr_6 [i_0] [16] [i_1] [i_2]), (arr_1 [i_1])))) : 1))) ? (arr_7 [i_1 + 1] [i_2]) : ((((arr_5 [i_1 + 3] [i_1 - 3] [i_2]) <= (arr_7 [i_1 - 3] [i_1 - 2]))))));
                    var_21 += (arr_6 [i_0] [i_0] [i_0] [i_0]);
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_22 += ((min(((-(arr_9 [i_0] [i_0] [8] [i_0]))), (arr_1 [i_0]))));
                    var_23 = (min(var_23, ((min(((((arr_8 [i_0] [i_0] [i_0] [i_0]) || (arr_2 [i_3] [i_1])))), ((((min(25165824, (arr_9 [i_0] [i_0] [16] [i_1])))) ? (arr_8 [i_0] [i_1 - 1] [i_1] [i_3]) : (arr_0 [i_0]))))))));
                }
                for (int i_4 = 2; i_4 < 16;i_4 += 1)
                {
                    var_24 += (arr_6 [i_0] [i_1] [i_1] [i_4]);
                    var_25 += ((((min((arr_6 [i_1] [i_1 + 1] [i_1 + 1] [i_4 - 1]), (arr_6 [15] [i_1 + 2] [i_1 + 4] [i_4 - 1])))) <= ((-(arr_3 [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
