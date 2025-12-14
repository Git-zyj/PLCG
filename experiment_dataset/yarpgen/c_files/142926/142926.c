/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_10 += (!255);
                    arr_9 [7] [7] = 1859019089;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [2] [i_2] [2] [i_4] = ((((6632846428450143922 ? 172 : -1859019099)) < ((min(1, ((141 ? 1 : 4739934913640885953)))))));
                                arr_18 [i_1] [i_1] [7] [i_1] [i_4] [3] [3] = ((((min(21061, (65535 < 185)))) == 55));
                            }
                        }
                    }
                }
            }
        }
    }
    var_11 = (max(var_11, ((((((2826158590 ^ (128 | 1859019094)))) ? ((((~21064) < 1073479680))) : 42540)))));

    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_12 = (((((!86) ^ 1)) <= ((-(!21061)))));
        arr_21 [3] = 9;
    }
    var_13 = 4194303;
    var_14 *= ((((((((3 ? 1 : 112))) ? ((40968 ? 27 : -116)) : 281474976710655))) ? (min(18320, (~28544))) : 1728));
    #pragma endscop
}
