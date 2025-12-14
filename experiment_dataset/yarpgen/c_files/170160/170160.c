/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, ((max((max((((arr_4 [i_0] [i_0]) % var_12)), var_9)), ((max((~12342), (arr_4 [i_0 + 3] [i_0])))))))));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_14 = 9;
                        var_15 &= (((((var_3 ? (0 % var_1) : var_7))) ? ((((arr_8 [i_0]) ? (min(-23802, 1450017265)) : ((~(arr_0 [i_0])))))) : 12924753882331531859));
                        var_16 = (((max(-112, (arr_8 [i_2]))) >> (((min(-2844950021, -3266057033880658744)) + 3266057033880658761))));
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {

                        for (int i_5 = 2; i_5 < 20;i_5 += 1)
                        {
                            var_17 = ((~((((arr_9 [i_5 + 2] [i_5] [i_2] [i_5] [10] [i_5]) != var_11)))));
                            var_18 = ((((((min(1, 9223372036854775807))) ? var_2 : (~1))) <= var_12));
                            var_19 *= ((!(arr_8 [i_0])));
                        }
                        var_20 = (min(var_20, (arr_8 [i_0])));
                    }
                }
            }
        }
    }
    var_21 = (max(var_9, ((var_6 ? 2844950021 : (!var_7)))));
    #pragma endscop
}
