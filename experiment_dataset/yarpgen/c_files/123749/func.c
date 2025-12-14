/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123749
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
    for (signed char i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_5 [(unsigned char)22] [(unsigned char)22] [i_0] = ((/* implicit */unsigned char) var_2);
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_4 [i_0 + 2] [i_0 + 2]))) ^ (((/* implicit */int) (_Bool)1))));
                arr_6 [i_0] = ((/* implicit */unsigned char) (_Bool)1);
                arr_7 [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_1] [i_1]);
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((max(((_Bool)1), ((_Bool)1))) || (((/* implicit */_Bool) ((((/* implicit */int) min(((unsigned char)31), (((/* implicit */unsigned char) (_Bool)1))))) * (((/* implicit */int) min((var_3), ((unsigned char)238)))))))));
}
