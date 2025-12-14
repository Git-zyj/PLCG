/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (min((((arr_0 [i_0] [i_1]) ? ((18446744073441116160 ? var_5 : -5103952724960625993)) : var_9)), (((var_4 - (((arr_1 [i_0]) / 57)))))));
                arr_5 [i_0] [1] = (min((arr_0 [i_0] [i_0]), (((arr_0 [i_0] [i_1 - 3]) ? (((arr_2 [i_0] [i_1 + 1]) ? 1 : var_11)) : ((var_7 ? var_8 : (arr_2 [i_0] [i_1])))))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] [i_1] = min((min((109 - var_12), (arr_1 [i_1 - 3]))), var_2);
                    var_18 = (max(var_18, var_9));
                }
                for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                {
                    arr_13 [i_0] [1] [22] = 1;
                    var_19 = (min(var_19, ((((~var_7) | ((((min(1, -1679739898139422985))) + ((var_17 ? 1 : 18446744073709551601)))))))));
                    var_20 = ((!(((4294967295 ? (arr_3 [14] [i_1 - 2]) : (arr_9 [i_1 + 2] [i_1 + 2]))))));
                }
                for (int i_4 = 2; i_4 < 20;i_4 += 1)
                {
                    arr_17 [i_0] [i_0] [1] [i_0] = (min(var_5, (((!((min(4294967280, var_1))))))));
                    var_21 = (9223372036854775803 >= -1);
                    var_22 = ((var_7 ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : (((arr_16 [i_0] [i_0] [1] [i_4]) * (min(11239824288430449836, 1))))));
                    arr_18 [i_4 - 2] [1] [i_4] = (arr_10 [i_0] [i_1] [i_4 - 2] [i_4]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 18;i_6 += 1)
        {
            {
                var_23 = (min((max(-24, 1)), ((max(-7, (arr_21 [0] [i_6]))))));
                arr_25 [i_5 + 3] [i_6] [i_6] = ((min(13137812512918501827, 1)));
                var_24 = (!53367);
            }
        }
    }
    var_25 = ((((min((!var_16), var_6))) ? (var_3 && var_9) : (((~var_1) % (var_1 | var_5)))));
    var_26 = (((((2147483644 ? ((min(1, 569507016))) : ((var_15 ? 569507024 : var_5))))) ? (min(-1986373783, -79)) : var_0));
    var_27 = ((var_0 == ((-(var_17 * var_4)))));
    #pragma endscop
}
