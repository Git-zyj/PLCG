/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12223
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_14 = ((/* implicit */int) var_0);
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                arr_8 [i_0] [i_0] = ((/* implicit */int) (short)-1);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            arr_13 [13] [i_0] [i_3] [i_3] [i_3] = ((/* implicit */short) -1481940599);
                            var_15 = ((/* implicit */int) 524287ULL);
                            arr_14 [(short)10] [i_0] [(unsigned short)9] = ((/* implicit */int) (unsigned char)24);
                            arr_15 [i_0 + 2] [(unsigned short)20] [i_1] [i_2] [i_3] [i_0] = -1481940599;
                            arr_16 [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) 0);
                        }
                    } 
                } 
                arr_17 [i_0] [i_1] [i_0 + 4] = ((/* implicit */int) (short)9428);
                arr_18 [i_0] [i_0] [i_1 - 1] = -1481940599;
                arr_19 [i_0] [i_0] = ((/* implicit */_Bool) 496097045832163545ULL);
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_7);
    var_17 = ((/* implicit */int) var_3);
}
