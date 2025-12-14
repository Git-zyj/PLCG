/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167677
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
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_12)), ((+(((/* implicit */int) (unsigned short)10662))))))) ? (((((/* implicit */int) (_Bool)1)) ^ (713488356))) : (713488370))))));
    var_15 |= ((/* implicit */short) ((((/* implicit */int) min((var_12), (var_11)))) >> ((((+(((((/* implicit */_Bool) (signed char)-48)) ? (4200249676U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50184))))))) - (4200249667U)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] [(short)11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) % (((/* implicit */int) (signed char)42))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_6))) : (((/* implicit */unsigned long long int) -713488341))))) && (((/* implicit */_Bool) min((((/* implicit */short) (signed char)-19)), ((short)-17347))))));
                arr_5 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
                var_16 = ((/* implicit */long long int) ((int) ((((/* implicit */int) min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned short) arr_0 [i_0]))))) ^ (((/* implicit */int) (unsigned char)237)))));
            }
        } 
    } 
}
