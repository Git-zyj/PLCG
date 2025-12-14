/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(((-(var_10 != var_1))), (((var_0 <= (max(4, 8596623218414698762)))))));
    var_13 = (!var_2);

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_14 &= var_6;
        var_15 = min(-var_9, (arr_0 [i_0] [i_0 - 1]));
    }
    var_16 = ((61 ? (((((max(54, -22073))) << ((((4 ? 1711414079 : -12)) - 1711414062))))) : -750561718911875917));
    #pragma endscop
}
