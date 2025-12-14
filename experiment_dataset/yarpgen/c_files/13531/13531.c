/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((max(((var_6 ? -28130 : 28132)), var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    var_15 = (min(var_15, (((27518588 % (arr_1 [i_1] [i_2 + 1]))))));
                    arr_7 [i_2] = 1;
                }
                arr_8 [i_0] [i_1] = (((((((arr_3 [i_0]) / (arr_0 [i_1]))) % (arr_3 [i_0]))) % ((((9961 != ((1 ? 7 : -27518590))))))));
                var_16 = ((!1) / ((max(3816, 9976))));
                arr_9 [i_0] [i_1] = ((-(((((32761 * (arr_1 [i_0] [i_1])))) ? (((((arr_5 [i_1]) && -28101)))) : (arr_1 [i_1] [i_0])))));
                var_17 = (min(var_17, (((((((arr_0 [i_1]) - -7166))) ? (((!((((-2147483647 - 1) / (arr_0 [i_0]))))))) : (((arr_3 [i_1]) ^ (arr_2 [i_0] [i_1] [i_1]))))))));
            }
        }
    }
    #pragma endscop
}
