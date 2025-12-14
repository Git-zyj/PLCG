/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113812
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
    var_13 = ((/* implicit */long long int) ((((((var_9) ? (((/* implicit */int) var_12)) : (var_8))) * (((/* implicit */int) min((var_10), (((/* implicit */unsigned short) var_7))))))) | (var_5)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) (signed char)16))))) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 2])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 1])) > (((/* implicit */int) arr_0 [i_0 + 2])))))) : ((-(((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_4 [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
                    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) min((((((/* implicit */_Bool) var_1)) ? (min((arr_4 [i_2]), (arr_4 [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_1 [i_1] [i_0 + 2]) ? (arr_4 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (((((/* implicit */_Bool) arr_2 [i_2])) ? (1125899906842623LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2]))))) : (((/* implicit */long long int) ((((/* implicit */int) var_12)) - (((/* implicit */int) var_2)))))))))))));
                }
            } 
        } 
    } 
}
