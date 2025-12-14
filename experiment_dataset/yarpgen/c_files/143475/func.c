/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143475
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
    var_12 = ((/* implicit */unsigned short) var_10);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_12 [i_1] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-28721)))))));
                                arr_13 [i_0 - 1] [i_1] [3ULL] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)6))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_1] [i_1 + 1] = ((/* implicit */unsigned short) arr_6 [i_1] [i_0] [i_1] [i_0]);
                arr_15 [(unsigned short)6] &= ((short) (short)-6);
            }
        } 
    } 
    var_13 = ((/* implicit */short) (~(((/* implicit */int) min((((/* implicit */unsigned short) max(((short)6), ((short)-11373)))), ((unsigned short)16284))))));
}
