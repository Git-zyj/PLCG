/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181377
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_5), (var_3)))))))) ^ (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)1083))))) : (var_3)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_4 [(unsigned short)11] [1LL] [1LL] = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) (short)-1083))))), ((~(((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0] [i_0])), ((unsigned short)5))))))));
                arr_5 [i_0] = ((/* implicit */unsigned char) ((unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) (short)1111))))), (arr_2 [15LL] [i_0]))));
                arr_6 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned short) ((signed char) ((var_9) & (((/* implicit */int) arr_0 [i_0])))))), (var_12)));
            }
        } 
    } 
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */long long int) 14336)) + (-7906614910483976744LL))) : (((/* implicit */long long int) max(((-(var_9))), (((int) var_0)))))));
    var_15 = ((/* implicit */int) var_5);
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_7)))))))) ? (((unsigned long long int) min((((/* implicit */int) var_10)), (var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)214)))));
}
