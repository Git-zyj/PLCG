/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105040
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
    for (signed char i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0 - 1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) % (((var_16) ^ (((/* implicit */long long int) arr_1 [i_0] [i_0]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) (short)-5175))))) ? (((/* implicit */int) (short)-19715)) : ((~(((/* implicit */int) arr_4 [i_0]))))))) : (((((/* implicit */_Bool) max((arr_4 [i_0]), (arr_6 [i_2] [i_1 + 2] [i_0])))) ? (((((/* implicit */_Bool) (short)32624)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (arr_1 [i_1] [12LL]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 + 1] [i_1]))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) ((((unsigned long long int) 811557006U)) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */int) var_18)) * (((/* implicit */int) arr_10 [(short)0] [i_0] [i_0])))))))));
                                arr_14 [i_3] [i_3] = (short)32638;
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0 - 1] [i_0 - 1] = arr_8 [i_0] [i_0] [i_0] [i_0] [i_0];
                    arr_16 [i_2] [i_0] [i_0] [i_0] = min((((short) ((short) arr_3 [(_Bool)1] [(_Bool)1]))), (((/* implicit */short) (!(((/* implicit */_Bool) var_16))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) (~(((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_9))))), (((signed char) var_0)))))));
    var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)75))));
    var_22 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) ((_Bool) var_4))))));
}
