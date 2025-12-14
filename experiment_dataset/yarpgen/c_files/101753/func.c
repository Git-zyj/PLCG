/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101753
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
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) var_9))));
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) max((((/* implicit */unsigned char) var_6)), (var_0))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((unsigned short) ((int) ((arr_0 [i_0]) ? (((/* implicit */int) (unsigned char)84)) : (((/* implicit */int) (signed char)-26)))))))));
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) min((max((((((/* implicit */int) arr_1 [i_1 - 1])) & (((/* implicit */int) (unsigned char)172)))), (max((arr_2 [i_0] [i_1 + 1]), (((/* implicit */int) arr_0 [i_1 + 1])))))), (max((((/* implicit */int) ((short) var_4))), ((+(arr_2 [(signed char)5] [21ULL]))))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (var_13)))))));
}
