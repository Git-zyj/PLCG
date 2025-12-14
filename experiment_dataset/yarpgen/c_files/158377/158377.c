/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 14;i_2 += 1)
                {
                    var_13 = ((1186338899232902299 ? (arr_1 [i_2]) : ((-(arr_5 [i_2])))));
                    arr_6 [i_2] [i_1] [i_0] = ((-((((((arr_4 [i_0] [i_1] [i_0] [i_0]) ? var_6 : var_7))) ? (((-(arr_1 [i_1])))) : ((11658160242615852152 ? 32 : (arr_0 [i_0])))))));
                    arr_7 [i_0] [i_1] [i_1] [i_2] = (var_12 * var_7);
                    arr_8 [i_2] [i_1] = (max((((arr_2 [i_2 + 1] [i_1] [i_2]) - 8846096471206424121)), (((arr_2 [i_0] [i_1] [i_2 + 3]) ? (arr_4 [i_2 + 1] [i_1] [i_2] [i_1]) : ((-1485049145 ? 9600647602503127492 : 0))))));
                    arr_9 [i_0] = (((arr_1 [i_0]) ? ((((((min(127, (arr_4 [i_2] [i_1] [i_1] [i_0]))))) == 9600647602503127510))) : (arr_2 [i_1] [i_1] [i_2])));
                }

                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    var_14 += ((((max((!31139), var_11))) <= ((((arr_0 [i_0]) && (arr_0 [i_0]))))));
                    arr_12 [i_0] [i_1] [i_3] = -65533;
                    arr_13 [i_0] [i_1] [i_3] = -1;
                }
            }
        }
    }
    var_15 = 34397;
    #pragma endscop
}
