/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131705
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
    var_12 = var_0;
    var_13 = ((/* implicit */unsigned long long int) var_4);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (+((~((~(((/* implicit */int) var_5)))))))))));
        var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((long long int) arr_0 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((unsigned long long int) (+(((/* implicit */int) arr_2 [i_0])))));
        /* LoopNest 2 */
        for (short i_1 = 4; i_1 < 21; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)22374)))))))));
                    var_16 = ((/* implicit */short) var_9);
                }
            } 
        } 
    }
}
