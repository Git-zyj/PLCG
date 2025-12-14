/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= ((-17575 | ((-(-98 && 3283521468)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_2] [i_2] = (((max((max(2064375477, var_13)), (((-10913 ? 28866 : -29157))))) / (+-65408)));
                    var_21 = ((-((-(arr_8 [i_0] [i_1] [i_2])))));
                    var_22 = (~238);
                    var_23 = (+-1325759205);

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        arr_13 [i_1] = (min(0, (2101092888 + -69)));
                        var_24 = (--4503462188417024);
                    }
                    for (int i_4 = 2; i_4 < 18;i_4 += 1)
                    {
                        arr_17 [i_1] [8] = (--796227223860932452);
                        arr_18 [i_0] [i_1] [i_1] [i_4] [i_1] = 5867309166704380489;
                    }
                }
            }
        }
    }
    #pragma endscop
}
