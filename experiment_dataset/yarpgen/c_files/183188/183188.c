/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-(680288323 == 8630294660106187817)));
    var_15 = ((((((~var_1) > -var_7)))) + (((min(5985192828576491331, var_6)) - (~1))));
    var_16 = (max(var_16, (((+((((!var_5) || (!var_4)))))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_17 = (((((((((arr_0 [i_0] [i_1]) && -27888))) < ((max((arr_7 [i_0] [17] [i_2]), (arr_7 [i_0] [i_1] [i_0]))))))) <= (max(((-(arr_2 [i_1]))), ((min(var_6, 27871)))))));
                    arr_8 [i_0] [i_1] [i_2] = (min((arr_1 [i_0]), (((max(-27888, (arr_0 [9] [1])))))));
                    arr_9 [i_1] [i_1] [i_2] = ((((((((arr_7 [i_1] [i_1] [i_0]) << (((arr_2 [i_1]) + 482937216)))) * ((((arr_1 [i_2]) <= (arr_1 [i_1]))))))) <= (min((max(var_8, 2147483647)), (!var_3)))));
                    var_18 = (((~3749) - (min(((((-1609408179 + 2147483647) << 1))), (min(var_13, var_10))))));
                    arr_10 [6] [i_1] [1] &= ((!((!(((~(arr_5 [15]))))))));
                }
            }
        }
    }
    var_19 = (-(((var_5 * var_7) + -var_0)));
    #pragma endscop
}
