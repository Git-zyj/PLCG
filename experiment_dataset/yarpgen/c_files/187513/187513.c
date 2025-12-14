/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((min((min(2482620941101000060, -21229)), ((min(-32759, 2355314808))))), ((min(5822837765915614776, 1939652510)))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_16 ^= (max((max((max(1939652493, 4294967295)), 1939652526)), 2355314765));
        arr_2 [i_0] = (max(8796088827904, (((((33423360 ? 1939652526 : 1939652516))) ? ((max(1939652475, 2355314769))) : ((2097151 ? 1364254072524040117 : -1855427610))))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_17 = (min(var_17, 2355314785));
        var_18 = (max((min((((3426538296 ? (-2147483647 - 1) : -7001))), ((166 ? 62151 : 3426538296)))), ((1939652526 ? 1939652526 : -29178))));
    }
    #pragma endscop
}
