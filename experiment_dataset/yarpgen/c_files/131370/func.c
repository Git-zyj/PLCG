/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131370
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
    var_16 = ((/* implicit */unsigned int) (+(16966702793175295299ULL)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */int) var_10);
                    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_15) : (((/* implicit */long long int) var_4))))) ? (((((/* implicit */_Bool) var_12)) ? (var_12) : (((/* implicit */long long int) var_13)))) : (var_15)))) || (((/* implicit */_Bool) var_8)))))));
                    var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [1] [i_1]))) >= (((((/* implicit */_Bool) -1049022784)) ? (16966702793175295299ULL) : (((/* implicit */unsigned long long int) 1879680348))))))) < (((/* implicit */int) ((((/* implicit */int) (short)-13)) == (((/* implicit */int) (short)2016)))))));
                    var_20 = ((/* implicit */long long int) arr_1 [i_2] [i_0]);
                    var_21 = ((/* implicit */unsigned int) 0LL);
                }
            } 
        } 
    } 
}
