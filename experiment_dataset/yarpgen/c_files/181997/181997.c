/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (+-120);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((!(arr_1 [i_0])));
        arr_4 [i_0] [i_0] = ((-5344708936099261807 != (arr_2 [i_0] [i_0])));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        arr_9 [i_1 + 1] = ((!((!(arr_5 [3])))));
        var_16 = -1054494919;
        var_17 = arr_7 [i_1 - 1];
    }
    for (int i_2 = 2; i_2 < 23;i_2 += 1)
    {
        var_18 += ((~(((arr_11 [i_2 - 2] [i_2 - 2]) ^ var_5))));
        arr_13 [i_2] = (255 ^ 10010441401399051362);
        var_19 = 5344708936099261801;
    }
    var_20 = 301511856;
    var_21 += (var_9 > var_0);
    #pragma endscop
}
