/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115799
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
    var_12 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (_Bool)1))))) : (min((var_3), (var_9)))))));
    var_13 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) var_6)))));
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)76)) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)15)) < (((/* implicit */int) (unsigned char)128))))), (var_5))) : (((/* implicit */unsigned long long int) var_10))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_6 [i_0] [(short)0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0] [i_1] [i_1]))))), (min((((/* implicit */unsigned int) arr_1 [i_0] [i_1])), (arr_3 [i_0 - 1] [i_0 + 2])))));
                arr_7 [i_0] [(signed char)10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_1))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)241)) || (((/* implicit */_Bool) var_11))))) : (((/* implicit */int) (signed char)76))))) ? (((/* implicit */unsigned long long int) max((arr_5 [i_1] [i_0 + 1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1] [i_0])) || (((/* implicit */_Bool) var_0)))))))) : (((((/* implicit */_Bool) (unsigned char)244)) ? (4503591037435904ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
}
