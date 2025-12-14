/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122614
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
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) 32512U)) ? (((/* implicit */int) (unsigned char)47)) : (((/* implicit */int) (unsigned short)35659))));
                    var_16 = ((((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_6))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (1247470794U)))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(134217727ULL)))))))));
                    var_17 = ((/* implicit */unsigned long long int) var_4);
                    var_18 = arr_6 [i_0] [i_1] [i_2];
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) (-(var_1)));
    var_20 ^= ((/* implicit */unsigned short) var_9);
}
