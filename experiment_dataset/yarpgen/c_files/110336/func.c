/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110336
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
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) (+(var_16))))) + ((~((+(((/* implicit */int) var_17)))))))))));
    var_19 ^= ((/* implicit */int) ((288230376151711680ULL) % (var_15)));
    var_20 = ((/* implicit */unsigned short) min(((~(min((2424049508873359638LL), (((/* implicit */long long int) var_14)))))), (((/* implicit */long long int) var_12))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) min((((/* implicit */unsigned char) ((signed char) min((384), (((/* implicit */int) (short)30339)))))), (var_4))))));
                    arr_6 [i_0] [(unsigned short)12] = ((/* implicit */int) var_1);
                    arr_7 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */signed char) (+(max((arr_5 [i_0] [i_1] [i_2]), (arr_5 [i_0] [i_1] [5ULL])))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) var_6)))));
}
