/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154016
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-13195)) ? (10748586405406711741ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : ((-((+(var_3)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_8 [i_1] [i_0] [i_1] = ((/* implicit */int) arr_2 [i_0]);
                var_11 = ((/* implicit */signed char) var_9);
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0])) ? ((~(arr_0 [i_1] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)122))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967284U)) || (((/* implicit */_Bool) (unsigned short)47086))));
    var_14 = ((/* implicit */int) max((((/* implicit */unsigned int) min(((unsigned short)47086), (((/* implicit */unsigned short) (signed char)-123))))), (((max((var_3), (((/* implicit */unsigned int) var_0)))) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47086)))))));
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_8) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 281474976710656ULL)) ? (-2074743947) : (2074743952))))))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
}
