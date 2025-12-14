/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152095
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
    var_15 = ((/* implicit */unsigned short) var_9);
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) var_2))));
    var_17 = ((/* implicit */int) var_6);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) max((3291597471U), (((/* implicit */unsigned int) (unsigned char)219)))))) ? (((var_10) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-16)))) : (((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) (short)3097))))) ? (((/* implicit */int) (unsigned short)15692)) : (((/* implicit */int) ((signed char) var_3)))))));
                arr_4 [(unsigned short)5] [(unsigned short)5] = ((((/* implicit */unsigned int) max((max((((/* implicit */int) (_Bool)1)), (arr_3 [(unsigned char)10] [i_1] [i_1]))), (((/* implicit */int) max((var_11), (((/* implicit */unsigned short) arr_2 [i_0])))))))) <= (max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)120)) > (((/* implicit */int) (unsigned char)176))))), (3062811211U))));
                arr_5 [13U] [(signed char)13] = ((/* implicit */unsigned long long int) (signed char)-123);
            }
        } 
    } 
}
