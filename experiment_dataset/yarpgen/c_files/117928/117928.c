/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((min((var_5 ^ var_8), -var_10)) + var_0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_14 -= (!2728078157543438089);
                        var_15 = (min(var_15, (arr_9 [i_1] [i_1] [i_2 - 1] [i_3] [i_0] [i_0])));
                        arr_11 [i_0] [i_1] [i_2] [i_3] = (((arr_9 [i_0] [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_2]) < 6685354247562461786));
                        var_16 = (((arr_3 [i_2 - 1]) ? 6685354247562461797 : 1));
                    }
                    var_17 = (-9223372036854775807 - 1);
                    var_18 = arr_7 [i_2 + 2] [i_0];
                }
            }
        }
    }
    var_19 = ((((max(6685354247562461778, (min(var_1, var_4))))) ? var_0 : var_0));
    var_20 = (min((max((1522150971 < 9094567900270257027), -6685354247562461777)), ((var_4 ^ (var_6 < var_8)))));
    #pragma endscop
}
