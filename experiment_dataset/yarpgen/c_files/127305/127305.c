/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((795 != var_9) >= (var_10 | var_0)))) >> (((max((min(202, 2346681484)), (32441 > var_18))) - 181))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = (min((min((max(59144, (arr_6 [i_0] [i_0] [i_1]))), (((arr_4 [i_0]) >> (var_2 - 1629288798))))), (((((arr_0 [i_0]) | 149)) - ((((arr_6 [i_0] [i_0] [i_1]) <= var_18)))))));

                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    arr_10 [i_0 - 1] [i_2] [i_1] = (min(((max(7, 2095040007))), (((max(36028797018963964, 7)) & (((((arr_5 [i_1] [i_1] [i_0]) || var_9))))))));
                    arr_11 [i_1] [i_1] = (((((var_5 ^ var_13) / (max((arr_9 [i_0] [i_1] [i_2]), (arr_1 [i_1]))))) + ((((((0 - (-32767 - 1)))) <= (max(1119057849402419898, var_16)))))));
                    arr_12 [i_0 - 1] [i_1] [i_2] = (((max(((var_15 & (arr_4 [i_0 + 1]))), (((54 != (arr_2 [i_2])))))) * (((202 ^ var_7) * (((var_6 >> (var_19 - 10399))))))));
                }
            }
        }
    }
    var_21 = ((((((32442 >= var_5) <= (var_10 && var_19)))) > (((36719 && 32432) / (min(var_1, var_8))))));
    var_22 = ((((((var_16 > var_1) | (var_14 ^ var_2)))) >= (((((max(var_3, var_14)))) * (min(var_19, var_10))))));
    #pragma endscop
}
