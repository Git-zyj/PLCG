/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((903628502 ? ((((min(5606888662203042613, 46001))) ? (var_4 - 28265) : (var_3 | 0))) : (((((var_9 >= 112) <= ((140 ? 109 : 116))))))))));
    var_14 = 28272;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_15 |= (arr_1 [i_0 + 1]);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_16 = (min(var_16, (1 / 903628502)));
                            var_17 = (min(var_17, ((min(((127 ? (-2147483647 - 1) : ((max(4294967295, 53583))))), ((((((1 ? 52617 : var_1))) && ((max(var_9, 109)))))))))));
                            var_18 = (min(((-(min(var_1, 9829641383234746978)))), (((!(((-5539939422312892464 ? (arr_8 [i_0 + 1] [i_1 + 2] [i_2 - 1]) : 451416408))))))));
                            var_19 = max((arr_11 [i_0 + 1]), (min((~17897), 45025)));
                            arr_14 [i_0 + 1] [i_0 + 1] [i_1] [i_1 + 1] [i_2 - 2] [i_3 - 2] = ((((min(255, (248 >= var_11)))) ? 1 : -981684738));
                        }
                    }
                }
            }
        }
    }
    var_20 = 1;
    #pragma endscop
}
