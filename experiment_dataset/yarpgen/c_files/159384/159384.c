/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((min(-21027, var_8))) ? var_8 : 133));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = (max(var_14, ((((((21826 << (var_6 - 8480)))) ? (((arr_5 [i_0 - 2]) % (arr_5 [i_0 + 1]))) : (((arr_5 [i_0 + 1]) >> (var_5 - 4347133964663257006))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1] = var_1;
                            var_15 = ((((~(arr_8 [i_3 - 1] [i_3]))) % (arr_4 [i_1 + 1] [i_3 + 1])));
                            arr_14 [i_0 - 2] = var_11;
                            var_16 = (max(var_16, (((-(((!((var_4 < (arr_11 [i_0] [i_0] [i_0] [i_0] [i_1 + 2] [i_0])))))))))));
                        }
                    }
                }
                var_17 = (160 | ((-((min(90, 115))))));
            }
        }
    }
    var_18 = ((-4279614 ? (!8039113618254725787) : ((((min(140, var_8))) << (((-1352549624 - var_12) - 792749451))))));
    #pragma endscop
}
