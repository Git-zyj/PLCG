/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104034
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)46)) : (((/* implicit */int) (unsigned char)210))))) ? ((((_Bool)0) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (min((((/* implicit */long long int) (signed char)-64)), (var_1)))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_16)) >> ((((~(1151073070))) + (1151073098)))))) : (((((/* implicit */_Bool) min(((short)(-32767 - 1)), ((short)10496)))) ? (((/* implicit */long long int) 3267272068U)) : (13LL)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)49183)) ? (((/* implicit */int) (unsigned char)46)) : (((/* implicit */int) (unsigned char)49)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2]))) : (var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_4 [i_0])))));
                    arr_10 [i_1] = ((/* implicit */unsigned short) ((int) (~(((/* implicit */int) (short)-10490)))));
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_3))) ? (((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_2]))) : (var_12))) : (((arr_5 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_3)))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (_Bool)1))))) : (var_5))) : (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_2] [i_0])) ? (((/* implicit */int) arr_2 [12])) : (((/* implicit */int) (unsigned short)65535)))))))));
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (-(((/* implicit */int) min((var_8), (arr_2 [i_1])))))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned char) var_17);
}
