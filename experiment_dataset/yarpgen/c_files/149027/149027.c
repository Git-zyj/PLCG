/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_19 = (-((var_13 ? 8700484887661949413 : (arr_0 [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, var_5));
                    var_21 = arr_9 [i_0];
                    arr_12 [i_1] = max(var_17, (max(var_15, var_14)));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        arr_16 [i_3] = (((3012447184207137182 | 5776057374969119607) != (3665190738 / 2191720386)));
        var_22 = var_11;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 2; i_5 < 16;i_5 += 1)
        {
            arr_24 [0] |= (32640 | (~1565941313));
            var_23 = ((((7525028550175137950 ? 3012447184207137207 : 3665190714)) | (var_6 & var_13)));
            var_24 = ((~(var_11 ^ var_16)));
            arr_25 [i_4] [i_5] = (arr_9 [i_4]);

            for (int i_6 = 3; i_6 < 16;i_6 += 1)
            {
                var_25 = (var_0 / (arr_6 [i_5] [i_6 + 1]));
                var_26 = ((((var_14 ? 1565941323 : var_15))) ? ((var_16 << (var_1 - 3335305961))) : (((((arr_8 [i_4] [i_6 + 1]) || var_12)))));
            }
        }
        var_27 = (arr_28 [i_4] [i_4]);
        var_28 = (((arr_13 [i_4]) ? (arr_13 [i_4]) : 706325064));
    }
    var_29 = ((-var_9 ? var_13 : var_8));
    var_30 = var_11;
    var_31 = ((min(((33554368 ? 449813662180363013 : 15434296889502414432)), ((2 >> (4294967271 - 4294967244))))) << ((((var_12 ? var_8 : var_2)) - 1607986865)));
    #pragma endscop
}
