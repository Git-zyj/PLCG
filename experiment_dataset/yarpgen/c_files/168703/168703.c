/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [1] [i_1] = (4522814644463913610 + 4522814644463913629);
                    arr_10 [9] [9] = (102 % 999103907931632390);
                }
            }
        }
    }
    var_10 = (min((max(-31332, 629011268074410140)), (((((min(-13255, var_8))) && ((min(var_8, var_0))))))));
    var_11 = (max(var_11, (9109657304564173272 / -1006450212751532396)));
    var_12 = (max(var_12, ((min((((min(var_7, var_4)) >> (((min(10060066654451072931, -7155182880524182080)) - 10060066654451072900)))), (((min(13706627721319766387, 1580140485)) | (123 | 7155182880524182080))))))));
    var_13 = (min(((min(((max(-39, var_7))), (min(-96, var_1))))), (min(((min(var_3, var_9))), (var_4 + var_1)))));
    #pragma endscop
}
