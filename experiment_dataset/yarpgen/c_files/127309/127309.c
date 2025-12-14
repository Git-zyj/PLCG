/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((min((70931694131085312 == 0), ((65526 ? (arr_1 [i_0] [i_0]) : 15)))) + 2147483647)) >> (255 - 239));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_16 = ((((min((arr_6 [i_0] [i_1 - 1]), (arr_3 [17])))) ? (((var_6 ? 37524 : 65535))) : (min((arr_6 [i_0] [i_0]), (arr_0 [i_0] [i_1 - 1])))));
                            var_17 = (max(var_17, (((+(((~var_13) >> ((min(1, 65535))))))))));

                            for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                            {
                                var_18 ^= var_7;
                                arr_13 [i_4] [i_3] [i_0] [i_1] [16] = (995502023 && 28034);
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                            {
                                arr_18 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0] = ((min((arr_17 [i_3 + 4] [i_3] [i_3 - 1] [i_3 + 4] [i_3 + 2] [i_0]), (arr_17 [i_3] [i_3] [i_3 + 1] [i_3] [i_3 + 2] [i_0]))));
                                var_19 = (min((((13102928415230680352 && ((min((arr_8 [i_0] [i_2] [i_1] [i_0]), var_13)))))), (((arr_6 [i_0] [i_0 - 1]) << (var_13 - 4428728738589095549)))));
                            }
                            for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                            {
                                var_20 = 3417629955;
                                var_21 = (min(var_21, ((min((((((var_4 ? (arr_0 [i_0] [i_1]) : (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0])))) && (arr_8 [i_0] [i_0] [i_2] [4]))), ((((var_4 ? 5343815658478871280 : (arr_5 [20] [4] [1]))) >= -var_12)))))));
                                var_22 = (min(5343815658478871270, 1));
                                var_23 = (max(var_23, var_0));
                            }
                        }
                    }
                }
                var_24 = (5343815658478871270 && 130560);
            }
        }
    }
    var_25 |= (min(var_1, (~var_15)));
    var_26 -= var_0;
    #pragma endscop
}
