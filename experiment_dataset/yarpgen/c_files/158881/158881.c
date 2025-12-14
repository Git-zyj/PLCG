/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= var_2;
    var_20 = (((-2147483647 - 1) - 6954964357376741877));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_21 -= (((((var_8 ? (arr_1 [1]) : var_17))) ? (arr_1 [i_0]) : (((arr_2 [i_0] [i_1]) | (arr_2 [i_0] [i_0])))));
                arr_5 [i_0] [i_0] [i_0] = (((arr_2 [i_0] [i_1]) ^ ((var_10 ? (arr_2 [i_0] [i_1]) : (arr_2 [i_0] [i_0])))));
                arr_6 [i_0] [i_1] [i_1] = (min(654006945, ((63155 ? 617969763 : 13951))));
                arr_7 [10] [10] [i_1] = (max((31 < 32767), (max((arr_1 [i_0]), var_17))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_22 += 10024;
                                var_23 = ((var_12 / (var_14 ^ 0)));
                                var_24 = (max(var_24, ((min(((((((-32760 ? 31 : 10024))) ? ((max((arr_10 [i_2]), (arr_11 [i_2])))) : 15360))), (((4294967270 * 37) ? ((var_9 ? (arr_16 [i_2 + 1] [i_2 + 1] [14]) : 62663)) : var_16)))))));
                                var_25 = (min(var_25, ((min(((((var_10 ^ var_7) ? (min(30584, (-2147483647 - 1))) : 2229))), ((-1 ? var_18 : (arr_15 [i_2 - 1]))))))));
                            }
                        }
                    }
                }
                arr_25 [i_3] = (((((var_17 ? var_8 : 12238219485914785947))) ? ((0 ? 1601249478 : 15360)) : (((arr_9 [i_3] [i_3 - 1]) ? (arr_9 [i_3] [i_3 + 1]) : 55))));
                var_26 = 11002599768127054133;
            }
        }
    }
    #pragma endscop
}
