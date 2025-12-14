/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [20] = ((!(arr_0 [i_0])));
        arr_3 [i_0] = (min((min((min(var_5, (arr_1 [i_0]))), var_8)), ((max(var_18, (770467707453182085 ^ -11899))))));
        arr_4 [3] = (max(((max((arr_0 [i_0]), ((var_11 / (arr_0 [i_0])))))), (((max(var_9, var_1)) * var_1))));
        arr_5 [i_0] = (((max(var_11, (arr_1 [i_0])))));
        var_20 &= (((max(-11899, (~0))) <= ((~((var_18 >> (var_3 - 42787)))))));
    }
    var_21 |= var_17;
    var_22 = ((!(!-11887)));

    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 4; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 12;i_4 += 1)
                {
                    {
                        arr_15 [i_1] [i_1] [i_1] [i_1] = (max(((15292820657027062069 & (arr_0 [i_3]))), var_14));
                        arr_16 [i_1] = (max(var_17, (((!1) / (min(var_9, 63759))))));
                        arr_17 [i_1] |= (min((max(((max((arr_9 [i_4 - 3] [1] [i_1]), var_11))), (~15292820657027062073))), (max((arr_1 [i_2 - 2]), ((min((arr_7 [i_1] [i_1]), (arr_0 [i_2 - 2]))))))));
                        arr_18 [i_3 + 1] [i_3] [3] [i_3] = (min((arr_8 [i_4 + 1] [i_2]), (((arr_9 [i_2 + 1] [i_2 - 2] [i_2 + 2]) / (arr_9 [i_2 + 2] [i_2 + 2] [i_2 + 1])))));
                        var_23 ^= (max((min((max(var_1, var_8)), var_18)), (max((min(var_11, var_6)), (min((arr_8 [i_3] [i_3]), var_10))))));
                    }
                }
            }
        }
        arr_19 [i_1] [i_1] = (max((min(((-1042859611292266512 / (arr_13 [i_1] [10] [i_1] [i_1] [i_1] [i_1]))), (arr_7 [i_1] [i_1]))), ((((arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [4]) * (arr_8 [i_1] [i_1]))))));
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
    {
        var_24 |= (max((((arr_12 [i_5]) && (arr_12 [i_5]))), (!var_15)));
        arr_22 [i_5] = (max((arr_9 [i_5] [i_5] [5]), (min((var_16 ^ var_14), (~var_6)))));
        var_25 = (max(var_25, ((max(((((((max((arr_13 [i_5] [i_5] [i_5] [i_5] [i_5] [1]), (arr_12 [i_5]))))) | ((~(arr_14 [1] [i_5])))))), ((~(max((arr_6 [i_5]), (arr_1 [i_5]))))))))));
        var_26 -= (min(11899, (((max((arr_13 [i_5] [i_5] [i_5] [6] [i_5] [i_5]), (arr_1 [i_5]))) >> (((arr_20 [i_5]) - 49630))))));
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
    {
        var_27 += max((max(((max((arr_20 [i_6]), (arr_6 [7])))), (((arr_11 [i_6] [i_6] [i_6] [i_6]) / -31026)))), var_3);
        var_28 = (min(((min((~1496555853), (~var_17)))), (min(((min(696663760133431630, -1496555853))), (min((arr_24 [i_6]), (arr_11 [i_6] [i_6] [i_6] [i_6])))))));
        var_29 = (max((min(var_10, (~var_14))), (min((min(var_5, 5)), ((max(1496555873, 2078162020)))))));
        arr_25 [i_6] = ((!((!(!1551955607)))));
    }
    #pragma endscop
}
