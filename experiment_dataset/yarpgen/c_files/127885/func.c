/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127885
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
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_6))));
    var_20 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_17))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (2927132617774486299LL) : (((/* implicit */long long int) var_6))))) ? (max((var_14), (var_4))) : ((-(var_4)))))));
    var_21 *= var_2;
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned short)32768)) ? (2166244061386630693LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32789)))))));
                    var_23 = ((/* implicit */unsigned char) min((((var_5) / (((/* implicit */long long int) arr_0 [i_1 - 1])))), (((/* implicit */long long int) var_11))));
                    arr_8 [i_0] [8LL] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_17)) + (((/* implicit */int) arr_2 [i_1 + 1]))))) / (var_7)));
                }
            } 
        } 
    } 
}
