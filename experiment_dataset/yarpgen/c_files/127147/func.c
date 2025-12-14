/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127147
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
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (short)16233)) ? (((/* implicit */unsigned long long int) 605682185U)) : (11135690342136670751ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2166)))))) : (((/* implicit */int) var_8)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) max((var_14), (var_11)));
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_3 [i_0] [i_1]) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-30116))))) : (((/* implicit */int) ((var_7) < (((/* implicit */unsigned long long int) arr_3 [i_2] [i_2]))))))) : (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (signed char)25)) ? (((/* implicit */int) arr_1 [7ULL])) : (((/* implicit */int) arr_1 [(unsigned char)18])))) : (((((/* implicit */_Bool) 5287442314864935521ULL)) ? (((/* implicit */int) (unsigned short)679)) : (((/* implicit */int) var_10))))))));
                    var_16 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 1] [i_2 + 1])) ? ((((_Bool)1) ? (min((var_1), (((/* implicit */unsigned long long int) 4288934762U)))) : (((/* implicit */unsigned long long int) ((unsigned int) 11081212236699511657ULL))))) : (10434438395990498436ULL)));
                    var_17 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) (+(18015589343099171691ULL)))) ? (((/* implicit */unsigned long long int) ((int) var_10))) : (var_11))));
                }
            } 
        } 
    } 
}
