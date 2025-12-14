/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155148
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
    var_10 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((unsigned char) 2039632612130165384ULL))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_5))))))) ? (min((((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_9)) + (26862))))), (((var_0) + (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (unsigned short)64843))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) - (var_2)))) ? ((~(((/* implicit */int) arr_2 [i_0] [i_0])))) : ((-(((/* implicit */int) var_9))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-((~(((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24142))) : (16407111461579386232ULL)))))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) min((((arr_2 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (((((/* implicit */_Bool) var_6)) ? (arr_0 [i_0] [i_1]) : (((/* implicit */unsigned long long int) var_6)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0 + 1])) <= (((/* implicit */int) arr_3 [i_0] [i_0])))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) (+(var_2)));
}
