/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164566
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
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) arr_2 [i_0] [i_0]))));
                arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) (short)18868)) | (((/* implicit */int) (short)2805)))));
                var_21 = ((/* implicit */unsigned int) ((short) var_9));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) var_4);
    var_23 += ((/* implicit */short) var_17);
    var_24 = ((/* implicit */signed char) (unsigned short)0);
}
