/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170901
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
    var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */short) (signed char)-20)), ((short)2677))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_13 += ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) - (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_0])) + (((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))))) : (arr_3 [i_0] [i_0])))));
                arr_5 [i_1] [(short)2] [i_1] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_3 [i_0] [i_1])))) ? (((((/* implicit */int) (unsigned char)44)) / (((/* implicit */int) arr_2 [(short)6] [i_1] [i_0])))) : ((-(((/* implicit */int) arr_2 [i_1] [i_1] [i_0]))))))));
            }
        } 
    } 
}
