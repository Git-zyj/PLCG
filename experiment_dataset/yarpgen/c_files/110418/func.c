/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110418
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
    var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) var_2))) | ((-(var_8)))))) ? (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned long long int) var_8)))))) : (var_0))))));
    var_11 = ((/* implicit */unsigned char) var_2);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)224))) ? (((unsigned int) (unsigned char)32)) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))) ? ((-(((arr_1 [i_0]) - (arr_1 [i_0]))))) : ((+(arr_2 [i_0])))));
                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0])))))) + (((((/* implicit */_Bool) (short)15)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (arr_1 [8]) : (arr_2 [0]))) != (((/* implicit */int) (!(((/* implicit */_Bool) (short)-1))))))))) : (max(((~(8232678046622813994ULL))), (8232678046622813994ULL))))))));
            }
        } 
    } 
}
