/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14494
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
    var_12 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_7 [8LL] [i_1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)0)), (var_1))))) : (((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)69))) : (737643141U)))));
                    arr_8 [i_2] [i_2] [13U] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (~(arr_0 [i_0] [i_1])))) ? (var_10) : (arr_6 [i_2 + 2] [i_2]))), (((/* implicit */unsigned int) arr_2 [i_0] [i_1] [i_0]))));
                    arr_9 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_4 [i_0]), (6707353526136801220ULL))))))) == (((/* implicit */int) arr_5 [i_0] [i_2] [i_2]))));
                }
            } 
        } 
    } 
}
