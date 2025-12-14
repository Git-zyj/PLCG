/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126054
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) % (var_10)))) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)94)) : (((/* implicit */int) var_0)))), (((/* implicit */int) (signed char)94)))))));
    var_18 = ((/* implicit */unsigned char) max((var_18), (var_7)));
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) min((var_7), ((unsigned char)166)))))), (((((/* implicit */int) ((unsigned short) var_6))) << (((((/* implicit */int) (short)-1)) + (10))))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_9 [(short)10] [i_1] [i_1] = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-6252)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_16))))) || (((/* implicit */_Bool) (signed char)-107)))), (((((/* implicit */long long int) arr_8 [i_2 - 1] [i_2 + 2] [i_2 - 1] [i_2 + 2])) >= (((5517633121792101558LL) + (((/* implicit */long long int) var_8))))))));
                    arr_10 [i_0] [i_1] [i_2 + 2] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_2 + 2] [i_2 + 1] [i_2 - 1])) || (((/* implicit */_Bool) arr_4 [i_2 + 2] [i_2 + 2] [i_2 - 1]))))) / (max((((/* implicit */int) var_9)), (arr_4 [i_2 - 1] [i_2 + 2] [i_2 + 1])))));
                }
            } 
        } 
    } 
}
