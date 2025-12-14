/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136847
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
    var_17 = ((/* implicit */unsigned char) ((unsigned short) ((unsigned int) ((int) var_8))));
    var_18 = ((/* implicit */unsigned char) ((unsigned int) ((long long int) ((_Bool) var_0))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 12; i_1 += 2) 
        {
            {
                var_19 -= ((/* implicit */int) ((signed char) ((unsigned short) ((unsigned int) 784234060U))));
                arr_4 [i_1] = ((/* implicit */int) ((unsigned short) ((int) ((signed char) (unsigned char)233))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_8 [10] [i_1] = ((/* implicit */signed char) ((_Bool) ((_Bool) ((int) (unsigned short)65535))));
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((long long int) ((_Bool) ((long long int) -296159)))))));
                }
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((long long int) ((int) ((int) arr_0 [i_0])))))));
                arr_9 [i_1] [i_0] = ((/* implicit */int) ((_Bool) ((int) ((signed char) (unsigned short)54908))));
            }
        } 
    } 
}
