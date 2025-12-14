/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121008
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
    var_15 = ((/* implicit */unsigned short) var_7);
    var_16 = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_12)))))));
    var_17 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50189))) : (var_6)))) ? (((/* implicit */unsigned long long int) var_6)) : ((~(5125591001617685158ULL))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)630))))) ? (((/* implicit */long long int) 4016344935U)) : (((var_1) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
    var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_11))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */long long int) var_2);
                    arr_7 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) arr_3 [i_0 + 1])) >= (((/* implicit */int) arr_3 [i_0 - 2])))))));
                    var_20 = ((/* implicit */unsigned short) ((int) arr_4 [i_0 - 2] [i_0 - 2] [i_0 - 2]));
                }
            } 
        } 
    } 
}
