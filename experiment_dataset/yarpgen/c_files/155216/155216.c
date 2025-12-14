/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_8 ? ((192 ? 127 : 50232)) : var_11));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_21 *= (((((var_0 & (arr_0 [i_0] [i_1]))) & (((arr_5 [8]) >> (((arr_0 [i_0] [12]) - 4347394214323272772)))))));
                var_22 = (((var_0 + var_14) > -63));
                arr_6 [i_0] [i_1] = ((~(((7123680102431264237 == 89) ? (19152 / var_7) : (~215)))));

                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_2] [i_2] = (((-(arr_8 [i_2] [i_0 - 3] [i_2] [i_2 - 1]))));
                    var_23 = (min(((min(-var_5, (63 & var_8)))), ((max((-127 - 1), 97)))));
                }
            }
        }
    }
    var_24 = (max(var_24, -3));
    var_25 = max(((~((63 >> (55311 - 55282))))), var_0);
    var_26 = (min(3045199232859300047, 66));
    #pragma endscop
}
