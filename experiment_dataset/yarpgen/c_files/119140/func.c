/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119140
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 3; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((min((((/* implicit */int) arr_7 [i_2 - 1] [i_1])), (((((/* implicit */_Bool) (unsigned char)98)) ? (((/* implicit */int) (unsigned char)98)) : (((/* implicit */int) (short)4)))))) * ((~(((-1591941571) / (((/* implicit */int) arr_5 [i_0] [(unsigned short)0]))))))));
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) min(((+(((/* implicit */int) (short)4)))), (((18) + (((/* implicit */int) (_Bool)0))))))) * (max((max((arr_1 [i_1]), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)42268)) / (-1980892433))))))));
                    var_11 *= ((/* implicit */unsigned short) min((((/* implicit */int) (short)(-32767 - 1))), (((((/* implicit */int) (unsigned short)41771)) - (min((((/* implicit */int) (_Bool)1)), (-1980892433)))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) (signed char)-15);
    var_13 = ((/* implicit */unsigned char) var_0);
    var_14 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) var_10))) - (min((9223369837831520256LL), (((/* implicit */long long int) (unsigned char)90)))))) + (((/* implicit */long long int) ((/* implicit */int) var_0)))));
}
