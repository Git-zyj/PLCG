/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181563
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
    var_20 = ((/* implicit */unsigned int) var_10);
    var_21 = ((/* implicit */signed char) (+(((/* implicit */int) var_19))));
    var_22 = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)105))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_6 [i_0] [(unsigned char)5] [i_0] = ((/* implicit */long long int) min(((~(((/* implicit */int) ((((/* implicit */int) (unsigned char)127)) > (((/* implicit */int) var_9))))))), (max((((/* implicit */int) (unsigned char)125)), (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)121))))))));
                var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)135)))))));
            }
        } 
    } 
}
