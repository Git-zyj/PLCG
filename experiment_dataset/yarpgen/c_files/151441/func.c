/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151441
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
    var_12 = ((/* implicit */long long int) (~(((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)243)))) | (((((/* implicit */_Bool) (signed char)-96)) ? (((/* implicit */int) (short)28673)) : (((/* implicit */int) (short)-4720))))))));
    var_13 = ((/* implicit */short) (~(((-1681849833104635379LL) & (((/* implicit */long long int) ((/* implicit */int) ((1297923042U) == (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((var_11) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)12)))))) ^ (((/* implicit */int) max((((/* implicit */short) (unsigned char)239)), ((short)30288))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_1])))) : ((+(((long long int) (short)4792))))));
                var_14 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))));
                arr_6 [i_0] [5LL] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((((/* implicit */int) (short)-1931)) + (((/* implicit */int) (short)-1419))))) - (arr_1 [i_0] [i_1]))) + (min((((((/* implicit */_Bool) (short)-30288)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_1 [i_0] [i_0]))), (((/* implicit */long long int) ((_Bool) var_3)))))));
            }
        } 
    } 
    var_15 = min((((((/* implicit */_Bool) (~(((/* implicit */int) (short)-1))))) ? (((((/* implicit */_Bool) 4U)) ? (((/* implicit */int) (unsigned short)3855)) : (((/* implicit */int) (unsigned char)29)))) : (((/* implicit */int) (short)30677)))), (((/* implicit */int) (unsigned short)6276)));
}
