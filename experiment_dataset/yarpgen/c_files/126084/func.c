/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126084
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
    var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) <= (var_9))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((unsigned short) (_Bool)0)))));
    var_19 = ((/* implicit */signed char) min((((/* implicit */short) var_11)), (var_8)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) var_3)), ((+(((/* implicit */int) arr_0 [i_1]))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) min(((signed char)50), (arr_3 [(unsigned short)5])))), (var_12)))) : (max((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) >> (((arr_1 [i_1]) - (14816851655700190270ULL))))))))));
                var_21 = ((/* implicit */short) ((((/* implicit */int) min((arr_3 [i_0]), (arr_3 [i_1])))) + (((/* implicit */int) arr_3 [i_0]))));
                var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_3 [i_0])), (min((((/* implicit */unsigned short) (signed char)-127)), (arr_0 [(short)1]))))))));
            }
        } 
    } 
    var_23 |= ((/* implicit */signed char) (unsigned short)25062);
}
