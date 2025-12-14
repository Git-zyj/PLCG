/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((0 ^ 65535) * 0)) % (((((31 * 225) >= (!var_12)))))));
    var_16 += (((((var_5 ^ var_12) / (var_8 - var_2))) / (((!(86 < -1))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        arr_12 [i_3] [i_1] [i_3] = ((((((var_3 + var_7) / var_13))) ? (((-var_8 + ((var_7 ? var_12 : var_8))))) : ((549755813887 ? -7044662604466788721 : 1504183440888378837))));
                        arr_13 [i_0] [i_3] [i_3] [i_1] = (((((((var_14 ? var_11 : var_5))) ? ((29725 << (214 - 198))) : (max(var_8, var_12)))) >= (((((var_0 ? var_11 : var_10))) ? var_3 : (!var_7)))));
                        var_17 ^= (((~(min(var_0, var_11)))));
                        arr_14 [i_0] [i_1] [i_2] [i_0] [i_0] [i_3] = (max((((((max(40659, 33542)))) + -9223372036854775795)), ((-1 ? (max(var_1, var_2)) : var_1))));
                        arr_15 [i_3] [i_3] [i_2] [i_3 + 1] = (min(var_4, ((~(min(var_13, var_8))))));
                    }
                    var_18 = ((3401331271453533977 && ((var_7 || (var_6 || var_0)))));
                }
            }
        }
    }
    var_19 = -var_11;
    var_20 = ((((((min(var_11, var_6))) + (var_2 <= var_3)))) ? (var_2 + var_4) : (((((max(var_3, var_13)))) ^ (var_5 ^ var_14))));
    #pragma endscop
}
