/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 4494803534348288;
    var_12 = (35206 ? ((((-37 & -1073741824) ? var_9 : ((var_3 << (846844314 - 846844312)))))) : ((((max(-54, -93))) ? ((107 ? 1073741823 : 4227)) : 186009289)));
    var_13 = (max(var_13, (((-23751 ? var_6 : -var_6)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [2] [13] = var_2;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_16 [i_3] [i_0] [i_3] [i_2 - 1] [i_1] [i_0] [i_0] = ((-((-1168538668 | ((var_1 ? 3999461185138066759 : 1165821024))))));
                                var_14 ^= ((((((arr_2 [i_4]) || ((((arr_12 [i_0] [i_1] [i_2 - 1] [i_3] [1] [1]) / (arr_14 [i_0] [i_0] [i_0 - 2] [5] [5] [i_0] [i_0 + 1]))))))) / (((10097299648306481747 == var_8) ? (arr_13 [10] [i_1] [i_2] [10] [10]) : (((arr_14 [2] [2] [i_2 + 3] [i_2 + 3] [i_2 + 3] [i_2 + 3] [2]) ? (arr_4 [13] [i_1] [i_0]) : 32768))))));
                            }
                        }
                    }
                    arr_17 [i_0 - 1] [i_1] [i_0 - 1] [i_1] = (min(((-115 ? (arr_12 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 1]) : var_9)), (((~(arr_15 [i_0] [i_0] [10] [i_1] [i_2 + 2] [i_2]))))));
                }
            }
        }
    }
    var_15 = (449314305207515608 * 1);
    #pragma endscop
}
