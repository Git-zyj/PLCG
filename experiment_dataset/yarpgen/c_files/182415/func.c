/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182415
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */short) (unsigned short)62621);
                arr_5 [(short)10] [(short)10] [i_1] = ((/* implicit */short) (_Bool)0);
                var_13 += ((/* implicit */short) ((max((((/* implicit */int) var_5)), (((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_0)))))) * ((+(((/* implicit */int) arr_1 [i_0 + 2]))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) var_8);
}
