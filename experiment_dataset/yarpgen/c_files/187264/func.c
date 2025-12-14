/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187264
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
    var_17 = ((unsigned char) (unsigned char)0);
    var_18 = ((/* implicit */short) ((unsigned char) (short)-11078));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) (short)7217);
                    arr_10 [i_1] [i_2] &= (short)-21208;
                    arr_11 [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */short) (unsigned char)220);
                    arr_12 [i_0] [i_1] [i_0] [i_0] = var_10;
                }
            } 
        } 
    } 
    var_19 = var_4;
    var_20 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)16))));
}
