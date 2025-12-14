/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_15 -= 8438599424900324087;
                var_16 = ((((7709 && ((max(10008144648809227510, 23))))) ? (max(var_9, 10)) : (~19)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_1] [i_2] [i_3] |= var_10;
                            var_17 = (min(var_17, ((!(((var_2 ? var_13 : (93 == 22))))))));
                            var_18 = (max(18446744073709551615, (arr_8 [i_0] [i_0] [i_2] [i_2])));
                            var_19 += (min(((1 ? -109 : (min(4350506428375543819, (arr_5 [i_0] [i_3]))))), (8438599424900324117 - 1196894228)));
                        }
                    }
                }
                var_20 = ((!((min(-1359375611115312241, var_10)))));
            }
        }
    }
    var_21 -= ((var_10 ? (((22 ? (var_7 < -11) : (min(1729886405, 27))))) : var_13));
    #pragma endscop
}
