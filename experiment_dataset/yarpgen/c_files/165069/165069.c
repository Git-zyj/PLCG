/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((((var_2 ? var_8 : var_9))), var_10));
    var_14 = (min(var_14, var_5));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] [18] [i_2] = ((((((arr_5 [i_2 + 2] [i_1] [i_0] [i_1]) ? var_7 : (((min(3353, var_0))))))) ? ((((((arr_6 [i_0] [i_0]) ? var_4 : var_9))))) : (max((min(var_7, 26085)), (min(var_5, (arr_2 [i_0] [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_15 |= (((4247949316 >= (arr_4 [7] [i_4 - 1]))));
                                var_16 = (((((((max(var_0, 2410094245643855258))) ? (arr_3 [i_4 - 2] [i_2 + 1]) : 4188320384))) ? (!var_11) : (arr_13 [16] [i_0] [i_0] [3] [7] [15])));
                                var_17 = (((arr_12 [i_0] [i_4]) ? (max((((-16 ? 0 : var_9))), 6429803927798766393)) : (((0 ? 4111372724 : 483311733)))));
                            }
                        }
                    }
                    var_18 = -216172782113783808;
                    arr_14 [i_1] [i_1] = ((+(max(var_2, ((2410094245643855281 ? (arr_10 [i_0]) : 47017982))))));
                }
            }
        }
    }
    var_19 = (max(var_19, ((var_7 ? ((max(((var_7 ? 18936 : var_1)), 47017982))) : var_1))));
    #pragma endscop
}
