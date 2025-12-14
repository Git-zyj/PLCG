/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121625
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_15 += ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_1])))) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_1])) + (21580)))));
                var_16 = min(((!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))), ((((~(((/* implicit */int) var_11)))) != ((~(((/* implicit */int) arr_0 [i_1])))))));
                var_17 = ((/* implicit */unsigned int) (-((-(((/* implicit */int) (_Bool)1))))));
                arr_4 [(short)12] [(short)6] = ((/* implicit */unsigned int) (~((-(arr_2 [i_0] [21ULL] [i_1])))));
                var_18 = ((/* implicit */_Bool) (-(arr_2 [i_0] [i_0] [i_1])));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)25956))));
}
