/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_15 = (1 ? (((((arr_3 [i_0]) && 0)) ? (arr_0 [i_0]) : (min(1, 4294967295)))) : (((var_10 ^ (((arr_0 [i_0]) << (9999489984831464621 - 9999489984831464617)))))));
                            var_16 = (max(var_16, (((+((0 ? (var_4 && 1) : (arr_3 [i_0]))))))));
                            var_17 = (min((((0 ? 0 : (arr_6 [i_1] [i_1 + 1] [i_1 - 1] [1] [1] [i_2 - 3])))), (3221225472 ^ 4294967295)));
                        }
                    }
                }
                var_18 &= ((!((((12 ? -18538 : -36)) < (arr_1 [i_1 + 1] [i_1 + 1])))));
            }
        }
    }
    var_19 = (max(var_19, (max((((244 ? 1 : 0))), ((10583324256740126382 ? var_1 : var_1))))));
    var_20 = ((var_13 || ((!(!var_1)))));
    #pragma endscop
}
