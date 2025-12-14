/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0 - 2] = ((((-((6272358722071322742 ? 33224 : -73)))) | 244));
        var_21 = (((((25922 <= ((min(25923, 25914)))))) & 12));
        var_22 = (((((-25913 ? 25930 : 1049952689594560887))) ? -25913 : 9595588593274737843));
        var_23 = ((!(512 | -1049952689594560877)));
        var_24 = (max((max((((1 ? 21810 : 254))), (max(5605, 13804064313652369711)))), -16384));
    }
    var_25 &= 43726;
    var_26 = var_9;
    #pragma endscop
}
