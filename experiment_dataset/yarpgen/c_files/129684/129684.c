/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(2919782145426438243, var_5));
    var_14 = ((-((min(191, 0)))));
    var_15 = (max(156, (~-38)));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_16 ^= 15526961928283113377;

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                var_17 = var_4;
                var_18 = var_10;
            }
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                var_19 += 836989553;
                var_20 = (max(var_20, 836989553));
                arr_12 [8] [i_0] [5] = -217;
                var_21 = (arr_6 [i_3] [i_0]);
                var_22 = (max(var_22, (((~(arr_11 [i_3]))))));
            }
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                var_23 = ((-(arr_13 [4] [i_1] [7] [i_0])));
                var_24 = var_6;
            }
            arr_16 [i_1] = -7617607707833817612;
            arr_17 [9] = -4;
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            var_25 = (min(62500, (arr_10 [i_0] [i_0] [i_0] [1])));

            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                arr_23 [i_6] [i_0] &= (min((1225317620 || -269324621), 65535));
                var_26 = (min((max(((max(28106, (arr_20 [i_5] [1])))), (min((arr_11 [i_0]), var_7)))), (arr_13 [9] [1] [4] [9])));
                arr_24 [5] [i_5] [i_5] [i_0] = (min(23129, (!274877906943)));
            }
        }
        arr_25 [4] [i_0] = (min((arr_7 [i_0] [9] [i_0] [i_0]), (!var_5)));
    }
    #pragma endscop
}
