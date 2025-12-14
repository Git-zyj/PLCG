/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_11 ^= ((((((((6829858466846879045 ? 127 : 816556554))) ? ((((!(arr_3 [i_0]))))) : ((-(arr_4 [i_1])))))) ? var_4 : (arr_0 [i_0 - 2] [i_0 - 2])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_12 = (max(var_12, (min((((-(arr_2 [i_0 + 3])))), (arr_11 [i_4 + 1] [i_3] [i_3] [i_2] [i_1] [i_0 + 2] [i_0 + 2])))));
                                var_13 = (-6829858466846879045 < -816556555);
                                arr_14 [i_4] [i_1] &= (min(124, 723669327634913929));
                                var_14 = (118 - -816556555);
                            }
                        }
                    }
                }

                for (int i_5 = 2; i_5 < 22;i_5 += 1)
                {
                    var_15 = ((var_10 ? 73 : ((741587403 ? (((var_1 >= (arr_12 [i_0] [i_0 + 3] [i_0 + 3] [i_1 - 1] [i_1] [i_5] [0])))) : (var_6 + var_9)))));
                    var_16 += ((+(max((((arr_6 [21] [i_0 - 2] [i_0 - 2]) ? 501227249 : -816556546)), 223655946))));
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                var_17 = (((min((((arr_17 [i_7] [i_7] [i_7]) + var_4)), (!1))) <= (arr_11 [i_8] [i_8] [i_7] [i_6] [i_1] [i_1 - 2] [i_0])));
                                arr_25 [i_0 - 1] [i_6] [i_7] = (arr_24 [i_8] [i_7] [i_6] [i_0] [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (min((min((((96 ? 0 : var_5))), (-1 % -8255057792448907262))), (816556555 <= 1361386238)));
    var_19 = (((var_10 * var_5) ? (var_10 == var_4) : (var_1 > -1361386238)));
    #pragma endscop
}
