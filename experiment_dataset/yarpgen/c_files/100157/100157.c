/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 = (max(((2031040870366166404 ? ((18446744073709551615 ? 302693849057006665 : 16415703203343385212)) : (-10329 - 16415703203343385212))), ((-(max(var_4, 302693849057006665))))));
        var_17 = (min(var_17, 32));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_2] [i_2] = -19128;
                    arr_8 [i_2] [i_0] [i_0] [3] = (max((((arr_1 [i_1 + 1] [i_2 + 2]) + var_11)), ((max((arr_1 [i_1 + 2] [i_2 + 2]), -90)))));
                }
            }
        }
        var_18 += min((arr_5 [i_0] [12] [i_0] [i_0]), ((((arr_5 [i_0] [i_0] [i_0] [i_0]) || 19130))));
        arr_9 [i_0] = 11325573500114053758;
    }
    for (int i_3 = 3; i_3 < 19;i_3 += 1)
    {
        var_19 = ((16415703203343385206 ? -19136 : 161));
        arr_12 [i_3] = ((arr_10 [i_3] [i_3]) ? (min((arr_10 [i_3] [i_3 - 1]), 1152921504606846975)) : (((max(116, (arr_10 [i_3] [i_3]))))));
        var_20 &= (min(((0 ? 7869219492666611678 : -19128)), (((-116 * (arr_10 [1] [i_3]))))));
        var_21 = (max(var_21, (max(7539006473922955892, (((((~(arr_11 [i_3] [18])))) ? 9768709390060643989 : (arr_10 [1] [i_3 - 1])))))));
        var_22 = arr_11 [i_3 - 1] [1];
    }
    var_23 = (min((max((var_15 % var_5), var_0)), (254 || 1491456761809434494)));
    #pragma endscop
}
