/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (min(var_2, ((((((arr_0 [i_0]) - var_2)) > (((arr_1 [i_0] [i_0]) - 2147483647)))))));
        arr_4 [i_0] = ((((max(((var_6 / (arr_0 [i_0]))), (2147483647 / 204)))) ? 209 : ((((var_1 / 55690) >= (!-24))))));
        arr_5 [i_0] = (var_6 / 51);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_11 = (max(var_11, var_8));
        var_12 = (min(var_12, ((max((((32 || 209) ? ((max(var_6, 31))) : (~208))), 48)))));
    }
    for (int i_2 = 2; i_2 < 8;i_2 += 1)
    {
        var_13 *= ((((((((~(arr_0 [i_2])))) ? var_4 : (max(2514047430569252916, 4885113559770768711))))) ? (((((max(-463374861, 2764706947281251735))) || ((23 && (arr_8 [i_2] [1])))))) : (max(var_0, (arr_8 [i_2 - 2] [i_2 + 3])))));
        var_14 = ((-(!var_8)));
        arr_10 [i_2] [i_2] = (max(124, (max(((-2514047430569252916 / (arr_2 [i_2 + 1]))), (arr_7 [i_2 + 2] [i_2])))));
    }
    for (int i_3 = 2; i_3 < 21;i_3 += 1)
    {
        arr_13 [2] = (((3 > (arr_12 [i_3 + 1]))));
        arr_14 [i_3] = (min(2514047430569252916, 2147483647));
    }
    var_15 = -var_5;
    #pragma endscop
}
