/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114979
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0]))))) && (((/* implicit */_Bool) arr_0 [i_1] [i_0])))));
                    var_14 = ((/* implicit */unsigned char) ((short) ((int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) (short)-20266))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) min(((unsigned short)53014), (var_3)))) ? (((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) var_1))))) : ((+(((/* implicit */int) var_4)))))));
    var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (((~(((/* implicit */int) var_3)))) <= (((/* implicit */int) min(((unsigned short)29304), (((/* implicit */unsigned short) var_11)))))))) != (((/* implicit */int) var_11))));
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)12522)) ? (((/* implicit */int) (unsigned short)65528)) : (((/* implicit */int) (signed char)127))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned short) (short)-1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) (!((_Bool)1)))))))))));
}
