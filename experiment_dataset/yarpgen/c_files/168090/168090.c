/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] = 0;
                var_17 = 254;
                var_18 -= (~4);
                var_19 = (((((-((4594338860527840138 ? 0 : var_9))))) ? (((arr_3 [i_0]) ? 5737890523128700766 : (arr_3 [i_0]))) : ((max((((!(arr_2 [i_0])))), (((arr_0 [i_0]) & (arr_2 [i_0]))))))));
                arr_5 [i_0] [i_1] = (((max(-2934265491833289845, 29) ^ (((255 ? (arr_3 [i_0]) : var_6))))));
            }
        }
    }
    #pragma endscop
}
