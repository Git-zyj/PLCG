/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = 1001316747;
                    var_15 = (((3314841001849173256 / (max(var_10, 3071982005)))));
                    arr_9 [i_1] [i_0] = -2642914310640416291;
                    var_16 = ((3 / (((-var_10 >= ((15803829763069135325 ? var_6 : 2642914310640416291)))))));
                    var_17 = (max(var_17, ((max((max(var_4, 1222985301)), (max(3071982005, 1222985279)))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            {
                var_18 &= ((var_5 >= var_7) > var_9);
                arr_15 [15] [i_4] = (min((var_6 < var_4), ((100 + ((max(var_2, var_7)))))));
                arr_16 [i_3 - 1] = 4294967295;
            }
        }
    }
    var_19 += var_9;
    var_20 = ((((min((max(var_10, (-32767 - 1))), (2192479143758426062 && var_4)))) && 2192479143758426036));
    var_21 = ((!((min(var_9, 3071982001)))));
    #pragma endscop
}
