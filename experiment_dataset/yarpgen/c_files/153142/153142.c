/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((((63431 < -660266939) ? (((((-2043280619 ? var_7 : var_12))) ? ((min(-1678393984, var_12))) : -var_2)) : ((((min(8365159730011133294, var_0))))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_21 *= ((min((max(-23774536, -551284980208736924)), (((var_6 ? 0 : 255))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_22 = -478027029;
                            var_23 &= var_14;
                            arr_10 [i_0 + 2] [i_0] [i_1] [i_2 + 1] [i_2] [i_0] = ((var_18 == ((((arr_3 [i_0] [i_1 + 2] [i_3]) && var_9)))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    var_24 = (min(var_24, ((max((min(1152921504606715904, var_7)), (arr_6 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_1 + 2]))))));
                    var_25 = (max(var_25, ((max((((-256 / 2147483647) ? 15535826702785720371 : (arr_13 [4] [i_4]))), (max((max(15535826702785720371, var_11)), (arr_12 [i_1] [6] [i_1] [i_1 + 1]))))))));
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    arr_18 [5] [i_0] [i_0] [i_0] = ((!((min(((min(var_18, var_16))), var_14)))));
                    var_26 -= (min((-2147483647 - 1), ((((-2147483647 - 1) >= -1918267191)))));
                }
            }
        }
    }
    #pragma endscop
}
