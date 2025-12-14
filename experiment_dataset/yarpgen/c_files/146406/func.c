/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146406
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)208)) ? (((/* implicit */int) (unsigned char)208)) : (((/* implicit */int) (unsigned short)64704))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 23; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (max((((/* implicit */unsigned short) arr_1 [i_0])), (var_19)))))) >= (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */unsigned long long int) 3039421884U)) <= (var_2)))), (max(((short)-25454), (((/* implicit */short) arr_5 [i_1])))))))));
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(unsigned short)20] [i_1])) ? (((/* implicit */int) (short)-31481)) : (((/* implicit */int) (unsigned short)832))))) ? (((((/* implicit */_Bool) 3039421860U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-24391))) : (1539618488U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) | (arr_2 [i_1 - 2] [i_1 - 4]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)188)) ? (-98994792) : (((/* implicit */int) (unsigned char)67))))))))));
            }
        } 
    } 
}
