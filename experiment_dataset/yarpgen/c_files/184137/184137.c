/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= (min((((~var_13) ? (12488532762159775631 - -3453507133970059163) : var_1)), ((~((var_12 ? var_2 : var_7))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 = (i_0 % 2 == 0) ? ((((((13555 ? ((645011397 >> (((arr_5 [i_0] [i_1] [i_0]) + 707856700)))) : (((255 != (arr_6 [i_0] [14] [i_2] [i_2]))))))) ? ((~(min((arr_3 [i_0] [i_1] [i_2]), 3453507133970059162)))) : var_5))) : ((((((13555 ? ((645011397 >> (((((arr_5 [i_0] [i_1] [i_0]) - 707856700)) - 1085224817)))) : (((255 != (arr_6 [i_0] [14] [i_2] [i_2]))))))) ? ((~(min((arr_3 [i_0] [i_1] [i_2]), 3453507133970059162)))) : var_5)));
                    var_20 = 255;
                }
            }
        }
    }
    var_21 = var_17;
    var_22 = var_2;
    var_23 &= ((((3453507133970059170 ? var_10 : var_6)) & ((var_14 ? ((var_10 >> (-8725140991820407132 + 8725140991820407195))) : ((min(-1639077185, var_14)))))));
    #pragma endscop
}
