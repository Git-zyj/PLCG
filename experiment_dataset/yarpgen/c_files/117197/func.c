/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117197
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_11 += ((/* implicit */signed char) var_3);
                    arr_8 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)-105)))))) : (((arr_6 [i_0 - 1] [(short)18]) << (((((/* implicit */int) var_3)) + (21499)))))));
                    var_12 = ((/* implicit */int) var_10);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned char) var_0);
}
