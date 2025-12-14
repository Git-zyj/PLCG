/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!(!var_7)));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (!3111838867700212396);
        var_13 = (~var_3);
    }
    var_14 = ((((var_7 || (((352842686315217670 ? -120796202 : var_0)))))));
    var_15 = (((((16234320282201900791 ? -8839164223065635893 : 158280234979562580))) ? var_6 : (((!var_3) ? (~-6492007755768288081) : (8191 - var_1)))));
    #pragma endscop
}
