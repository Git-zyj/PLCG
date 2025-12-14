/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_18 = ((13227 ? (max(((var_5 ? var_15 : 51186)), ((max(4033311874, 3808944055))))) : 261655421));
        arr_2 [i_0] [i_0] = (max(((min((min(1, var_4)), (!var_16)))), 3405045978));
        var_19 = var_3;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_20 = 7573576841086888902;
        var_21 = min(((-(min(var_2, 41)))), 5160675977732402317);
    }
    for (int i_2 = 2; i_2 < 23;i_2 += 1)
    {
        arr_9 [22] = ((3450904535 ? -14883 : 10));
        var_22 ^= ((12584 ? (((((var_5 ? var_16 : 736064431))) ? 52264 : 59360)) : -1));
        var_23 = ((776635961 ? -6499837329892407657 : 112));
    }
    var_24 = (min(var_24, (((29843 ? 4033311879 : 14883)))));
    #pragma endscop
}
