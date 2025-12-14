/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_16 = (min(var_16, ((min((min((arr_1 [i_0] [0]), (arr_6 [3] [i_1] [i_2]))), (min((arr_6 [9] [i_1] [11]), (arr_6 [i_0] [i_1] [i_2]))))))));
                    arr_10 [i_0] [i_1] [i_0] = (((min((min((arr_6 [i_0] [i_0] [i_0]), var_6)), (arr_2 [i_1])))) ? (min(((32767 ? 2 : 7902967456508526340)), (((var_15 ? (arr_5 [i_0] [i_2]) : (arr_1 [i_0] [i_0])))))) : (arr_2 [i_0]));
                }
                var_17 = ((min((min(10543776617201025276, (arr_2 [i_0]))), var_2)) * (17907 / 10543776617201025276));
                arr_11 [i_0] [i_0] = var_6;
            }
        }
    }
    var_18 = (var_14 == var_4);
    var_19 = 16187178491204200968;
    #pragma endscop
}
