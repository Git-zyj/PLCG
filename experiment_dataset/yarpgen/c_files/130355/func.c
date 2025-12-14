/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130355
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
    var_10 = min((((var_8) % (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) - (791982750)))))), (((/* implicit */unsigned int) var_4)));
    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * (((4294967295U) >> (((/* implicit */int) var_0))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */short) ((min((((/* implicit */int) arr_2 [i_1] [i_1] [i_0])), (((int) (unsigned char)0)))) % (((/* implicit */int) ((arr_3 [i_0] [i_1]) <= (arr_3 [i_1] [i_0]))))));
                arr_4 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_3 [i_0] [i_0]) >> (((/* implicit */int) (unsigned char)2))))) || (((/* implicit */_Bool) min((((((/* implicit */int) (unsigned char)36)) >> (((var_7) - (1241920945741488781LL))))), (((/* implicit */int) (signed char)-40)))))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0]))))), (((((/* implicit */int) (short)-17789)) - (((/* implicit */int) arr_0 [i_1]))))));
            }
        } 
    } 
    var_13 ^= ((/* implicit */int) (!(((/* implicit */_Bool) var_5))));
}
