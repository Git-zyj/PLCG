/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = (((((~(max((arr_4 [i_1] [i_0] [i_0]), 3936522797584381148))))) ? (((-20221 ? -20200 : -20243))) : (arr_3 [i_0] [i_0])));
                arr_6 [i_1] = ((((max(var_3, (arr_4 [i_1] [i_0] [i_0])))) ? -var_10 : ((((!(((20188 ? 20204 : (arr_4 [i_0] [i_0] [i_0]))))))))));
                arr_7 [i_0] [i_0] [i_0] = ((+((min((arr_4 [i_0] [3] [3]), ((1 > (arr_2 [i_0] [i_1]))))))));
                var_19 = ((-((min(1, 1)))));
            }
        }
    }
    var_20 = 10517435462064380175;
    #pragma endscop
}
