/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10051
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
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((var_0) - (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((4194288LL) - (((/* implicit */long long int) var_4)))))) != (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) (unsigned short)60619)) + (((/* implicit */int) (signed char)-54)))) == (((/* implicit */int) (signed char)-57)))))))))));
    var_17 += ((/* implicit */long long int) var_1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 4; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned int i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_18 = ((signed char) (unsigned short)38909);
                                var_19 = ((/* implicit */unsigned short) (signed char)77);
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned int) ((((((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [2U])) + (2147483647))) >> (((/* implicit */int) (((+(((/* implicit */int) var_12)))) >= (((/* implicit */int) (short)8176)))))))) : (((/* implicit */unsigned int) ((((((((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [2U])) - (2147483647))) + (2147483647))) >> (((/* implicit */int) (((+(((/* implicit */int) var_12)))) >= (((/* implicit */int) (short)8176))))))));
            }
        } 
    } 
    var_20 = min((max((4194288LL), (((/* implicit */long long int) min(((unsigned short)26627), (((/* implicit */unsigned short) var_12))))))), (((/* implicit */long long int) var_9)));
    var_21 = ((/* implicit */unsigned int) ((long long int) var_1));
}
