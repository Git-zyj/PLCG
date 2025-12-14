/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_13 = (max(var_13, 7093223531857300180));
                                var_14 += ((((~((-(arr_8 [i_0])))))) ? (((23631 % ((((arr_3 [i_0] [i_4]) < 20932)))))) : ((((var_0 ? 22472 : 3479333252328281902)) - (arr_11 [i_0] [i_1] [9] [i_3] [i_4] [i_4]))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [14] = -2867532731090337645;
                            }
                        }
                    }
                    arr_14 [i_1] = -3803893419176520420;
                    var_15 ^= var_8;
                    var_16 = var_2;
                }
            }
        }
    }
    var_17 ^= ((((min(((min(-6661, 8654))), ((22466 ? -957752070622147438 : 957752070622147440))))) || (-25198 / 21581)));
    #pragma endscop
}
