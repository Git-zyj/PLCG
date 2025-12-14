/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 += 4294967295;
        arr_2 [i_0] [i_0] = 9721659718970692263;
    }
    for (int i_1 = 3; i_1 < 22;i_1 += 1)
    {
        var_21 = ((~(min((arr_5 [i_1 - 3]), (arr_5 [i_1 - 1])))));
        var_22 = (arr_4 [i_1]);

        for (int i_2 = 4; i_2 < 21;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        arr_15 [5] [i_2] [i_3] [i_4] = ((~(arr_6 [1] [i_2])));
                        var_23 -= (~(((~(arr_4 [i_1 - 3])))));
                    }
                }
            }
            var_24 = ((min(var_6, -121)));
            var_25 = (min((((127 <= ((min(27, 55690)))))), (arr_4 [14])));
        }
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_26 ^= ((~((min(65535, ((((arr_7 [i_5]) <= (arr_5 [i_5])))))))));
            var_27 = ((!((min((arr_8 [i_5]), (arr_13 [i_1 - 2] [i_1 + 1] [i_1 - 1] [i_1 - 2]))))));
            arr_18 [i_5] [13] [i_1] = (arr_8 [i_1 - 2]);
        }
        arr_19 [i_1 - 1] = 32767;
        var_28 ^= var_4;
    }
    #pragma endscop
}
