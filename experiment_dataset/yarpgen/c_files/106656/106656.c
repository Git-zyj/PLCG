/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-579504353245154809 ? 5160966679913812247 : 17722971448024274313));
    var_15 = (max(var_15, 5908026129334681471));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_1] = ((0 ? -579504353245154823 : 0));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_16 ^= (arr_2 [i_0 - 3]);
                            var_17 = ((((((var_0 + var_0) ? ((-(arr_6 [i_0] [i_1]))) : (arr_1 [8])))) ? (((arr_9 [i_0 - 1] [i_0 - 2] [i_0 - 1]) - (arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1]))) : ((-(min(var_3, (arr_1 [i_3])))))));
                        }
                    }
                }
                var_18 = (-579504353245154809 != 579504353245154809);
                var_19 = (((((var_6 | var_12) ? (max(var_13, (arr_3 [2] [i_1]))) : ((min((arr_5 [i_0] [i_1] [i_1]), var_10))))) <= (((((max(529857383906377730, 2910425645)) > (((var_7 >> (((arr_11 [i_0] [1] [7] [3]) + 1306652773)))))))))));
            }
        }
    }
    var_20 = var_2;
    #pragma endscop
}
