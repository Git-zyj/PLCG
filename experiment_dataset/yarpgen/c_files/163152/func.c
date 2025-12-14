/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163152
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
    var_11 = ((((((/* implicit */int) ((signed char) var_8))) > (((/* implicit */int) max((var_1), (((/* implicit */unsigned short) var_2))))))) ? (((/* implicit */int) ((13290671977433453220ULL) > (1ULL)))) : (((/* implicit */int) (_Bool)1)));
    var_12 = ((/* implicit */long long int) 13290671977433453233ULL);
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) & ((+(var_3)))))) ? (((int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 13290671977433453235ULL)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_8 [1] [(_Bool)1] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_2 [18] [(unsigned char)21]))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_2))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
                    var_14 = ((/* implicit */unsigned char) (((~(((((/* implicit */_Bool) 398752839U)) ? (((/* implicit */unsigned long long int) 1U)) : (var_0))))) ^ (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (18446744073709551595ULL)))));
                }
            } 
        } 
    } 
}
