/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140410
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
    var_10 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) min((((/* implicit */unsigned short) var_0)), ((unsigned short)21218))))))));
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_5)))) ? ((+(((/* implicit */int) (short)15538)))) : ((+(min((((/* implicit */int) var_6)), (-708899280)))))));
    var_12 = ((/* implicit */unsigned short) var_9);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 24; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_11 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) 708899290);
                    var_13 = ((/* implicit */short) ((2188227741U) * (((/* implicit */unsigned int) (+(-708899280))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((short) var_4))) ? (((/* implicit */int) (unsigned short)55129)) : (((/* implicit */int) (unsigned short)44318)))), (((int) 2188227740U))));
}
