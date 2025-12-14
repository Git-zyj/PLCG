/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += (min(var_9, (min(((23191 ? var_12 : 405034985)), var_3))));
    var_17 = var_0;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 = (max(((var_14 ? (arr_0 [i_0] [i_0]) : var_9)), (arr_0 [i_0] [i_0])));

        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            var_19 = ((-((((min(70511705, -107))) % (min(2820603969, (arr_2 [i_0])))))));
            arr_4 [i_1] [i_0] [4] = ((((min((arr_3 [i_1 - 1]), var_2))) ? ((((arr_3 [i_1 - 3]) ? -70511705 : -35))) : (max((arr_3 [i_1 - 1]), (arr_3 [i_1 - 4])))));
            arr_5 [i_0] [i_1 - 2] = (min(((((max(var_10, 2047831447))) ? ((max((arr_2 [i_0]), 26))) : 5)), (min((((!(arr_0 [i_0] [i_0])))), (max(200, -432708709))))));
        }
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            var_20 = (max(var_3, ((max(var_9, (arr_0 [i_0] [i_2]))))));
            var_21 = (max(var_21, (((((min((max(var_11, var_2)), -16))) ? (((arr_3 [i_0]) ? ((min(var_10, (arr_6 [i_2 + 1] [9])))) : 2197)) : 15478)))));
            var_22 ^= (min(((min(var_1, 2479474590264778455))), (((3724841872 ? ((15241 & (arr_2 [i_0]))) : ((((arr_2 [i_0]) > -122))))))));
        }
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {

            for (int i_4 = 4; i_4 < 14;i_4 += 1) /* same iter space */
            {
                arr_12 [i_0] [i_3 + 1] [i_4 + 1] [i_4 + 3] = ((((-1891556792 % ((-(arr_1 [i_0])))))) ? ((58109377 ? (max((arr_11 [i_0] [i_3 - 1] [i_4] [i_4 - 3]), var_7)) : ((((arr_3 [i_0]) ? 204923856 : var_3))))) : ((42332 ? (max(-8154536722787012823, 70511705)) : -12312)));
                arr_13 [7] [13] = ((((min(54608, 4090043434))) ? (min((!192), ((var_12 ? 73 : (arr_3 [i_0]))))) : (((min((arr_11 [i_4 + 4] [i_3 + 1] [i_0] [i_0]), (arr_11 [i_4 - 1] [i_4] [i_3 + 1] [i_0])))))));
                arr_14 [i_0] [i_3] [i_4] = var_13;
            }
            for (int i_5 = 4; i_5 < 14;i_5 += 1) /* same iter space */
            {
                arr_18 [i_3 - 1] [i_3 - 1] = ((((max(var_7, var_10))) ? (arr_16 [i_5] [i_5 - 2] [i_5 + 1]) : (((arr_17 [i_5 + 3] [i_3 - 1] [i_0]) ? (max((arr_3 [16]), var_15)) : (((max(183, (arr_17 [i_0] [i_3 + 1] [i_5])))))))));
                arr_19 [i_5] [0] [i_0] = (min(((((min((arr_8 [i_5 - 3] [i_5 - 3]), 124819279))) ? 19326 : var_0)), (max((((arr_15 [i_0] [i_3] [i_5] [i_0]) ? var_13 : 25214)), 113))));
                var_23 -= var_2;
                arr_20 [i_0] [14] [i_0] [i_0] = (max(((~(arr_17 [9] [6] [i_5 - 4]))), (((max((arr_10 [9] [i_5] [9]), var_3))))));
            }
            for (int i_6 = 4; i_6 < 14;i_6 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        {
                            var_24 &= min(8639072938493296576, ((((arr_7 [i_3 + 1] [i_3] [i_3 - 1]) ? var_12 : (arr_23 [i_6 + 2] [i_6] [i_0] [i_6])))));
                            arr_30 [i_0] [i_3] [i_7] = ((max(var_9, (arr_7 [i_7 + 1] [4] [i_6 + 3]))));
                            var_25 = (min((!var_11), (max((arr_24 [i_0] [i_0] [i_7 + 1] [i_3 + 1] [i_8]), 2153))));
                        }
                    }
                }
                var_26 = (max((max((((var_8 ^ (arr_22 [9])))), (min(3981101309, (arr_7 [i_6 - 4] [i_0] [i_0]))))), (((max((arr_28 [i_0] [i_0] [i_6] [i_0] [i_6] [i_3]), var_12))))));
            }
            arr_31 [i_0] = ((((((min((arr_11 [i_0] [i_0] [i_0] [i_0]), 12304))) ? (((arr_10 [6] [i_3 - 1] [i_3]) ? -3 : (arr_1 [i_3]))) : (arr_2 [i_0])))) ? var_4 : ((-(((arr_10 [1] [i_0] [i_0]) | (arr_27 [i_0] [i_0]))))));
            arr_32 [i_3 - 1] = (min(((((min((arr_7 [5] [5] [i_0]), var_13))) ? ((max((arr_7 [i_0] [i_0] [i_0]), var_0))) : (arr_15 [i_3 - 1] [i_3] [i_3] [i_3 - 1]))), (((((var_12 ? var_6 : (arr_26 [i_0] [i_3] [i_3] [i_0] [i_3] [i_0]))) >= ((max((arr_26 [i_0] [i_0] [i_0] [13] [i_0] [i_3]), (arr_29 [14] [14] [i_3 + 1])))))))));
        }
        var_27 = -3;
        arr_33 [i_0] = max(((+(((arr_15 [i_0] [12] [i_0] [i_0]) ? 114 : var_0)))), ((((max((arr_7 [i_0] [3] [i_0]), var_11))) ^ var_3)));
    }
    #pragma endscop
}
