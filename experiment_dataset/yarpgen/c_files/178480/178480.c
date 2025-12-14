/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((max(((max((-127 - 1), 53773))), -1757080847))), ((min(-1827758034, 119449748616366812)))));
    var_15 &= (min(49984, (min((~-1827758032), -255))));
    var_16 = (min(var_16, 1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_17 = 3310218018;
                    var_18 = (min((min(-1421283830, ((max(1, 0))))), (max(51, 2028263011))));

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_19 = (max((~-1), ((max(((min(51, -1600035062))), (min(-1827758044, 1121743549)))))));
                        var_20 = ((((!((max(420255032, 32752)))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
