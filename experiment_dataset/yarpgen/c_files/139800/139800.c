/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (((((var_10 >> (-var_0 + 5135505229057097542)))) || ((-807419824805790059 < (max(var_11, -807419824805790063))))));
    var_20 = ((-((((((max(var_5, 254)))) < (max(var_12, var_6)))))));
    var_21 = (max(var_21, ((max((((((max(var_10, 1)))) / (min(var_16, 61)))), ((((807419824805790059 - 230) > (var_18 <= var_12)))))))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_22 &= ((((((~(arr_1 [10] [i_0]))) != 45325)) && ((!(!16462735097206872775)))));
        var_23 = (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                var_24 = ((-(arr_6 [1])));
                var_25 = (min(var_25, ((((max(61, 16462735097206872796)) | 32439)))));
                var_26 = (!1);
                var_27 = (((((((~807419824805790068) / ((((arr_8 [i_0 - 1] [i_1]) + 247))))) + 9223372036854775807)) << (((16462735097206872775 >= 807419824805790074) - 1))));
            }
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                var_28 = (arr_9 [i_0 - 1] [i_1] [5] [i_3]);
                var_29 = -16462735097206872796;
            }
            var_30 ^= (((!1) <= ((((arr_10 [i_1] [4]) != 6590)))));
        }
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_31 = (((!-74359012) - ((~(arr_11 [i_4])))));
        var_32 = ((~(((((arr_12 [i_4] [i_4]) || (arr_12 [i_4] [i_4])))))));
    }
    #pragma endscop
}
