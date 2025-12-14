/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_0] [15] [i_0] [15] = (!2515418343);
                    var_13 = (max(var_13, var_6));
                    arr_8 [i_0] [10] [i_0] [i_0] = 1779548952;
                    var_14 = arr_0 [i_1];

                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        var_15 = ((~((3064724671 ? 512 : 1779548949))));
                        var_16 = (max(var_16, ((max(var_8, (((2515418343 || 39059) & (arr_4 [i_2] [i_2]))))))));
                        var_17 *= ((var_4 % ((-((1779548953 ? 32767 : 62))))));
                        var_18 -= (1779548965 - 2515418343);
                        var_19 = -var_7;
                    }
                }
            }
        }
    }
    var_20 = (max(var_20, var_6));
    var_21 = 2515418336;
    var_22 = (((((-8 < (var_7 > var_12))))) ^ (max(var_12, var_1)));
    var_23 += (-1014135158 <= var_7);
    #pragma endscop
}
