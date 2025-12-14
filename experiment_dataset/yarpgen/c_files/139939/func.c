/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139939
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
    var_20 = ((/* implicit */long long int) var_3);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((var_15) - (((/* implicit */int) (short)24473))))) % (((var_13) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))), (((/* implicit */unsigned long long int) max(((unsigned short)1721), (((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_0])))))));
                var_21 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((signed char) (unsigned char)92)), (arr_0 [(short)8] [(signed char)22])))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)128)), (arr_3 [(_Bool)1]))))) : (max((min((((/* implicit */long long int) var_2)), (var_0))), (((/* implicit */long long int) ((((/* implicit */int) (short)(-32767 - 1))) >= (((/* implicit */int) (unsigned short)63812)))))))));
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) var_7);
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) min(((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_1)))))), (((/* implicit */int) (unsigned short)1720))));
}
