/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181821
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
    var_14 = ((/* implicit */short) var_8);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) ((((max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_1])), (8609072535318946874ULL))) / (((/* implicit */unsigned long long int) (+(arr_2 [i_0] [i_0])))))) | (((/* implicit */unsigned long long int) ((unsigned int) min((arr_5 [(signed char)5]), (((/* implicit */short) var_1))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) (+(max((((/* implicit */unsigned long long int) 1437989163)), (7337140130610643282ULL)))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) ((((-1437989163) + (2147483647))) >> (((-1714959735) + (1714959749)))));
    var_17 = ((/* implicit */unsigned short) ((unsigned char) ((unsigned char) ((unsigned char) (unsigned char)250))));
}
