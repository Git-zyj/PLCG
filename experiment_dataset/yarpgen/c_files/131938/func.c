/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131938
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
    var_17 = ((/* implicit */unsigned long long int) ((signed char) (~(((((/* implicit */_Bool) (short)-3937)) ? (((/* implicit */int) (short)-15859)) : (((/* implicit */int) (short)-16804)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                var_18 *= ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) (short)3936))))))));
                arr_5 [i_1] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-10372)) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_1])) : (((/* implicit */int) (short)-10372))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max(((unsigned short)5984), (((/* implicit */unsigned short) (short)24114))))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_1] [i_1])) - (((/* implicit */int) var_9))))))))));
                var_19 = ((/* implicit */signed char) min(((-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-15859))))))), (((/* implicit */int) (_Bool)1))));
                arr_6 [i_1] = ((/* implicit */short) max(((~(((/* implicit */int) min((((/* implicit */unsigned short) var_15)), (var_9)))))), (((/* implicit */int) ((unsigned short) (~(var_6)))))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) min((((unsigned char) var_5)), (((/* implicit */unsigned char) ((_Bool) arr_3 [i_1] [i_1])))));
            }
        } 
    } 
}
