/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((~(max(0, 4188930484))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_21 = ((~(arr_3 [i_0])));
                var_22 |= (((~68) ? (((arr_0 [i_0]) ? (arr_3 [i_0]) : 2897)) : -62));
                arr_5 [i_0] [i_0] [i_0] |= (((-32767 - 1) - ((-12 ? 68 : ((min(68, -64)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                var_23 = -7486700898650578887;
                                arr_13 [i_0] [i_0] [i_3] [i_0] = -69;
                                var_24 = (((((~(arr_0 [i_3 + 1])))) ? (((arr_0 [i_3 - 1]) ? (arr_0 [i_3 + 1]) : (arr_0 [i_3 + 1]))) : (((arr_0 [i_3 + 1]) << (-8784966151061358569 + 8784966151061358583)))));
                                var_25 -= var_8;
                            }
                            var_26 = (((((arr_10 [i_0] [i_3 - 1] [i_2]) == (arr_10 [i_0] [i_3 + 1] [22]))) ? ((((arr_4 [i_0] [i_1] [i_2]) ? (arr_4 [i_0] [i_1] [i_2]) : (arr_4 [9] [i_1] [9])))) : (max(((max(var_8, (arr_4 [1] [i_1] [1])))), -7693826358749158210))));
                            var_27 &= (min(((1 ? 0 : -37)), var_0));
                        }
                    }
                }
            }
        }
    }
    var_28 = (((var_18 << var_1) ? (((var_0 ? var_18 : var_0))) : ((~((var_8 ? (-9223372036854775807 - 1) : -1))))));
    #pragma endscop
}
