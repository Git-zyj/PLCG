/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = (16384 / -2);
                var_19 = (!var_4);
                var_20 = 2147483630;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        {
                            var_21 = ((207630755 & ((((((arr_12 [i_1] [i_1] [i_1] [i_1] [i_1]) ^ var_4))) ? ((~(arr_3 [i_0] [i_1]))) : var_6))));
                            arr_14 [i_2] [i_1] [i_2] [i_3] = 2637529844;
                        }
                    }
                }
            }
        }
    }
    var_22 = (~4133497622);
    var_23 = (max(((-(-3361728023198770755 || -1140353377359679488))), (!var_10)));
    var_24 = 2147483630;
    var_25 = var_1;
    #pragma endscop
}
