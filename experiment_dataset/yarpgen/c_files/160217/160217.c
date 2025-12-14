/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_11 = -27;
                    arr_9 [i_0] [i_1] [9] = ((-32 ? ((-(min(18446744073709551613, 768837658784619453)))) : (35 ^ 1518212130)));
                    arr_10 [4] [2] [2] [i_2] = ((((max((var_8 ^ 1), -1518212107))) ? 243 : -724841997));
                    var_12 ^= 448812237756451230;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            {
                arr_18 [5] [5] [i_4] = ((var_8 ? ((57443 ? 254629902718455441 : var_0)) : -var_3));
                var_13 = -1442428939;
                arr_19 [10] [5] = ((((((((-1134502613 ? 50651 : var_6))) ? (!var_9) : ((35 ? 137 : 1518212130))))) ? (max(var_9, (-9223372036854775807 - 1))) : (min(1084991208996312638, -448812237756451225))));
                var_14 = (min(6996321557583059006, ((min(((-50 ? 245 : 255)), -1518212107)))));
            }
        }
    }
    #pragma endscop
}
