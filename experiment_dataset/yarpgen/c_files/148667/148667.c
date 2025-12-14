/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_3 && (((var_8 * (max(4294967269, 3213881907)))))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] [i_0 - 1] = var_1;

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_11 = (6 / 249);
            arr_7 [i_1] = (~2136367278);
            arr_8 [i_1] [i_1] = 3955403947;
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
            {
                var_12 = (((((max((arr_0 [i_0] [i_0 + 2]), 104)))) % (arr_5 [12] [i_2])));
                var_13 = -14;
            }
            for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
            {
                var_14 = 248;
                arr_19 [12] [i_2] [i_2] [i_2] = (arr_16 [3] [i_2] [i_0]);
                var_15 = ((((arr_5 [i_0] [i_0 + 3]) > (((max((arr_16 [i_4] [i_2] [i_0]), (arr_0 [i_4] [i_0]))))))) ? (max(((min(var_2, 7))), (min(62, (arr_1 [i_0] [i_2]))))) : (~14));
            }
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 9;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    {
                        var_16 = (max(var_16, (((-(arr_22 [i_0] [i_0 + 3] [i_5 + 4] [i_6] [i_6] [i_0 + 2]))))));
                        arr_24 [i_6] [i_2] [i_5] [i_6] |= (-(min(32760, 2147450880)));
                        arr_25 [i_2] [i_2] = (((arr_5 [i_0] [8]) ? (((-(arr_20 [i_0] [i_2] [i_5] [i_6])))) : ((var_0 >> ((((~(arr_6 [i_2] [i_5] [i_6]))) - 356972087))))));
                    }
                }
            }
            var_17 ^= (-(arr_1 [i_2] [12]));
        }
    }
    #pragma endscop
}
