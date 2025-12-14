/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184570
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
    var_16 = ((/* implicit */int) min(((unsigned short)255), (var_14)));
    var_17 = ((/* implicit */unsigned int) ((signed char) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))) % (((/* implicit */int) (unsigned short)255)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)65535)) ? (3515746259U) : (1U))), (((/* implicit */unsigned int) min((((/* implicit */short) arr_5 [i_2] [i_0] [i_0])), ((short)0))))))) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) (unsigned short)255))));
                    var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2])) ? (((/* implicit */int) arr_5 [i_2] [i_0] [i_0])) : (((/* implicit */int) (short)-23532)))) % (min((-1570596989), (((/* implicit */int) var_6))))));
                    var_19 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)43)) != (var_4)));
                    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [(unsigned short)9])) : (((int) arr_5 [i_1] [i_0] [i_1])))))));
                }
            } 
        } 
    } 
}
