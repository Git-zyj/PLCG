/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (min(-448344802, -var_2));
                arr_7 [i_1] [i_0] = arr_0 [i_1];
                arr_8 [i_1] [i_0] [i_0] = ((min(-29358267, var_7)));
                arr_9 [i_1] = ((((max(var_9, 2619192940))) ? -761497874 : (min((((-(arr_1 [i_0] [i_1])))), (min(-832460557, 4294967295))))));
            }
        }
    }
    var_10 = (((+(((-120 + 2147483647) << (((var_1 + 1841687380305508496) - 11)))))));
    var_11 = (max(var_3, var_4));
    #pragma endscop
}
