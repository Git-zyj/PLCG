/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_3;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] [i_0] &= (((((~(arr_1 [i_0] [i_0 + 2])))) || (((84 ? ((255 ? 16169165805069897451 : 10043)) : (((0 ^ (arr_1 [i_0] [i_0 + 3])))))))));
        var_17 = ((1998371383 == (min(8550187711972461121, -1539176221567964039))));
        var_18 = ((-1468075681883267445 ? 72057594035830784 : 1125899906842616));
        var_19 += var_13;
        arr_3 [5] = (arr_1 [i_0] [i_0 + 3]);
    }
    var_20 = (((((((1468075681883267448 ? 1998371372 : 50902))) ? ((25504 ? 465769417 : -1468075681883267449)) : (min(-1468075681883267470, var_7)))) >> (((!(3556819491601720592 / var_7))))));
    #pragma endscop
}
