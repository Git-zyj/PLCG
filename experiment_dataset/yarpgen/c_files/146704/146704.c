/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += (min((max(var_12, (~var_12))), ((853030216 << (47273 - 47272)))));
    var_15 = var_4;
    var_16 += (min(((min(var_12, var_5))), 18446744073709551602));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (min(((max((max((arr_1 [9]), (arr_4 [3]))), (6029 - 24266)))), ((-(min(1, 9223372036854775805))))))));
                arr_5 [i_0] [i_0] [i_0] = (((arr_3 [i_1] [1]) - (127 != 39046)));
                var_18 *= ((((min(-65534, 35053))) % ((10 ? 17633211731862068977 : (((((arr_0 [i_1]) == 1))))))));
                arr_6 [i_0] [i_0] = (min(13, 59484));
            }
        }
    }
    var_19 += (max(var_7, 169));
    #pragma endscop
}
