/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10520
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
    var_13 = ((/* implicit */unsigned short) max((-1LL), (((/* implicit */long long int) (short)15777))));
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (max((((/* implicit */long long int) var_4)), (-1560975296900829875LL))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) || (((/* implicit */_Bool) max((((/* implicit */long long int) ((short) var_0))), (min((var_2), (((/* implicit */long long int) var_6)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) (short)-24032);
                var_16 *= (_Bool)0;
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1 - 2] [i_0])) ? ((-(((((/* implicit */_Bool) arr_4 [(signed char)16] [i_0] [i_1])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))))) : (min((arr_2 [i_1 - 1] [i_1 - 1]), (arr_2 [i_1 - 1] [i_1 - 1])))));
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_9), (((/* implicit */short) var_6))))) ? (max((1802808094), (((/* implicit */int) arr_5 [i_0])))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1 - 1])) ? (((/* implicit */int) (unsigned short)34837)) : (((/* implicit */int) (signed char)-83))))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_1 - 2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))) : (max((arr_2 [i_1 - 2] [i_1 - 1]), (var_11)))));
                var_18 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((unsigned int) (unsigned short)64181))))) || (((/* implicit */_Bool) ((short) (~(var_3)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) max((((unsigned int) (!(((/* implicit */_Bool) 3358954415U))))), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (unsigned short)64194)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10)))))));
}
