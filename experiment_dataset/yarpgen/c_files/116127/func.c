/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116127
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */int) max((var_11), (((((/* implicit */_Bool) min((((((/* implicit */int) arr_4 [i_0])) * (((/* implicit */int) arr_3 [i_0])))), (((/* implicit */int) (short)12927))))) ? (((/* implicit */int) max((((/* implicit */signed char) arr_4 [i_1 - 3])), (var_6)))) : (((((((/* implicit */int) (unsigned char)8)) - (((/* implicit */int) arr_6 [i_1 + 2])))) + (((/* implicit */int) max((arr_6 [i_0]), (arr_2 [i_1 - 3]))))))))));
                arr_7 [i_0] [i_1] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) min(((unsigned short)14984), (((/* implicit */unsigned short) arr_4 [(short)0]))))) ? (((((/* implicit */int) arr_1 [(unsigned short)8])) % (((/* implicit */int) arr_2 [i_1 - 2])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1 - 1])) || (arr_1 [i_1]))))))));
            }
        } 
    } 
    var_12 *= ((/* implicit */signed char) ((unsigned short) min((((var_9) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50551))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) / (((/* implicit */int) var_6))))))));
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_5))))))) ? (((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_8)))) ? (((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14985))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_0), (((((/* implicit */int) var_3)) > (((/* implicit */int) var_0))))))))));
}
