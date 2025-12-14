/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (min(((min((var_4 || var_3), (var_11 <= 399419139)))), var_5));
    var_17 = (min(var_12, ((~((24321 ? 18446744073709551611 : 65507))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (((((~((min(-8, 75)))))) ? (!1) : (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))));
        arr_2 [i_0] = 1;
        arr_3 [i_0] = (max((((arr_1 [i_0] [i_0]) ? 1 : 14086213964457944881)), 11333718122261807297));
        arr_4 [i_0] = ((((max(65, 2147483647))) ? (min(2251799813685247, (arr_0 [i_0] [i_0]))) : (min((arr_0 [i_0] [15]), -65))));
    }
    #pragma endscop
}
