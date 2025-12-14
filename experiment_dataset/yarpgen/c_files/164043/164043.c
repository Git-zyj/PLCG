/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((((1 == 1) ? (!64714) : (min(var_3, var_1)))), (min((min(10754430083536424624, var_0)), var_5))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] |= ((!(((((((((arr_4 [i_0] [i_1]) + 9223372036854775807)) << (((var_6 + 62) - 7))))) ? var_0 : ((max((arr_3 [i_0] [i_1]), (arr_3 [i_0] [i_1])))))))));
                var_14 = (min(var_14, 9598618126679046777));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_15 = (min(var_15, (arr_5 [i_0] [i_1])));
                            var_16 = (min(var_16, ((((((var_2 * (var_2 <= var_7)))) ? (((((!1) >= (arr_5 [i_0] [i_2]))))) : ((-((65535 ? 44 : -1)))))))));
                        }
                    }
                }
                var_17 &= ((((var_1 ? (arr_3 [i_0] [i_0]) : var_6)) == (arr_3 [i_0] [i_1])));
            }
        }
    }
    var_18 = ((max(((var_2 ? 65535 : var_1)), -99)));
    #pragma endscop
}
