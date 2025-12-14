/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157446
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */long long int) -381260214)) - (var_5))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16417)))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)16417)) && (((/* implicit */_Bool) (unsigned char)6))))) >= ((~(((/* implicit */int) var_3)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned int) (unsigned short)16417);
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) ((var_6) || (((/* implicit */_Bool) arr_1 [i_0] [i_0])))))) & (((/* implicit */int) min((((unsigned short) (unsigned short)49127)), (((/* implicit */unsigned short) var_0)))))));
                    var_13 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)59067)) : (((/* implicit */int) ((signed char) arr_5 [i_0] [19] [i_2])))))));
                    var_14 = ((/* implicit */long long int) ((signed char) max((((/* implicit */int) var_2)), (((((/* implicit */int) var_6)) % (((/* implicit */int) (unsigned short)16421)))))));
                }
            } 
        } 
    }
}
