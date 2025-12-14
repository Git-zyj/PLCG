/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= ((var_8 ? ((max(var_8, (max(32767, 536346624))))) : ((~((var_11 ? var_12 : (-9223372036854775807 - 1)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] = (min(((-32755 ? (max((arr_2 [i_0]), (arr_1 [i_2]))) : ((var_4 ? 32767 : (arr_1 [i_0 - 1]))))), (arr_2 [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_16 = (max(var_16, ((max(((max(-28835, (arr_2 [i_4])))), (((arr_1 [i_2]) ? (((arr_9 [i_0] [i_1] [i_2] [i_3] [20]) ? (arr_5 [16]) : (arr_8 [11] [i_1] [i_2] [6] [i_3]))) : ((1121501860331520 ? (arr_5 [0]) : (arr_7 [i_3] [i_0] [4] [14]))))))))));
                                var_17 &= (0 ? -174819486 : 32749);
                                arr_11 [i_0] [i_1] [i_4 - 3] [i_3] [i_0 + 4] [i_3] = (max((-2147483647 - 1), ((((max(8191, (-32767 - 1)))) ? (((arr_4 [i_3] [i_4] [i_0] [i_2]) ? 1 : -45)) : ((-1744043970102268562 ? (arr_4 [i_0] [i_0] [i_0] [i_0]) : 15))))));
                            }
                        }
                    }
                    var_18 = ((max(((max(2147483639, (-9223372036854775807 - 1)))), 536870911)));
                    var_19 = (min(-2147483643, 32763));
                    var_20 = (min(var_20, ((max((((1 ? var_5 : (arr_9 [8] [i_1] [i_1] [i_0] [20])))), (min((((0 ? 183 : -512186424))), 349653433551334219)))))));
                }
            }
        }
    }
    var_21 = max(((min(104, var_6))), var_14);
    var_22 = (max(var_22, 1));
    #pragma endscop
}
