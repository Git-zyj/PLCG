/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118453
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
    var_16 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_9)), (var_15)))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (848644163U) : (((/* implicit */unsigned int) var_5))))), (((unsigned long long int) var_2))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)65514))));
                    var_18 &= (+(((/* implicit */int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_2 [7ULL])), (var_15)))) < ((+(var_4)))))));
                    arr_9 [i_1] [i_1] = ((/* implicit */short) (+((+(((/* implicit */int) ((var_13) <= (var_11))))))));
                }
            } 
        } 
    } 
    var_19 |= ((/* implicit */unsigned long long int) min((max(((signed char)116), ((signed char)95))), (((/* implicit */signed char) (_Bool)0))));
}
