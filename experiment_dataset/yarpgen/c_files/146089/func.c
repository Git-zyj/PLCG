/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146089
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
    var_14 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 11; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */short) (~(((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_11))))) & (((((/* implicit */_Bool) 1160056350)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))));
                arr_7 [i_0] [i_1 + 1] = ((/* implicit */short) (signed char)-66);
                arr_8 [i_1 + 2] [1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(min((arr_1 [i_0]), (((/* implicit */int) (unsigned char)0))))))) ? ((+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [(unsigned char)7])) : (arr_3 [i_0] [i_1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1208066828)) ? (((/* implicit */long long int) arr_5 [i_0] [i_1 + 1] [i_0])) : (arr_4 [i_0]))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) -1818762574)) ? (var_13) : (((/* implicit */int) var_8))))) >= (var_6)));
}
