/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    var_15 = ((!((max(((9138 ? 76 : 9141)), var_11)))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-(min(((812743518 ? 95 : -9139)), (-9151 - -2147483627)))));
        arr_3 [0] [i_0] = ((((max(812743518, 812743520))) ? (((-2147483618 ? 536870400 : 1))) : (max(10023747660916848226, ((812743521 ? 4286627030091715121 : 8422996412792703389))))));
        arr_4 [i_0] = ((((!((max(812743521, -17))))) && ((max((-1527447978 & 70), 10023747660916848227)))));
    }
    var_16 = var_9;
    #pragma endscop
}
