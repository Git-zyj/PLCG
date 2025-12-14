/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = (!var_0);
                var_14 = 8741155508094167792;
                var_15 = (max(var_15, 15822770644959499391));
                var_16 = (max(var_16, ((((min((8741155508094167795 > 0), 325635027)) + ((min(((-979065210 >= (arr_5 [i_1]))), 1))))))));
                arr_6 [i_0] [i_1] [i_0] = (min((!-1), (min((((~(arr_1 [i_1])))), -var_4))));
            }
        }
    }
    var_17 = ((((max(((10 ? -8741155508094167787 : 8741155508094167807)), 48579))) ? var_4 : ((min(-var_2, 1)))));
    var_18 = (max((!-29938), 28));
    #pragma endscop
}
