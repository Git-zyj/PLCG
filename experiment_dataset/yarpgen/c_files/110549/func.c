/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110549
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
    var_16 = ((/* implicit */short) (~(((/* implicit */int) (short)13093))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */int) ((1875438535) <= ((-(551534190)))));
                var_18 &= ((/* implicit */unsigned char) ((max((((((/* implicit */int) (unsigned short)49285)) != (((/* implicit */int) (unsigned short)64849)))), (((((/* implicit */int) (unsigned short)48)) != (((/* implicit */int) (unsigned char)222)))))) && (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 1220168761))))) | (-685276508))))));
                arr_6 [(signed char)2] [i_0] [(signed char)2] = ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (4945526860353791592LL)))) || (((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-25820)), ((unsigned short)20239)))))) && (((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned short)32197)) ^ (0)))))));
                arr_7 [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (((+(((/* implicit */int) (unsigned short)21449)))) != (((((/* implicit */int) (short)32767)) | (((/* implicit */int) (unsigned char)196)))))))));
            }
        } 
    } 
}
