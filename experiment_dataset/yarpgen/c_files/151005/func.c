/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151005
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_2] [7] [i_2] = ((((/* implicit */_Bool) (~(5608040711185676609LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)64))) : (5608040711185676601LL));
                    arr_10 [i_0] [1LL] [i_2] = ((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [12ULL] [i_1] [i_2] [i_1])) || (((/* implicit */_Bool) var_6))))) >> (((/* implicit */int) var_9)));
                    arr_11 [i_1] [i_1] [i_1] = ((/* implicit */int) min((-5130994299596915336LL), (((/* implicit */long long int) (+(3667676368U))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_12)), (((((/* implicit */_Bool) 5608040711185676609LL)) ? (627290928U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-10695)))))))) ? (((var_13) & (max((((/* implicit */unsigned long long int) -714979298)), (562915593682944ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) (unsigned char)255)) & (var_1))) != (((((/* implicit */int) (unsigned char)234)) >> (((4194303U) - (4194288U)))))))))));
    var_15 = ((/* implicit */unsigned long long int) 1948375432);
    var_16 = ((/* implicit */int) (+(max((((((/* implicit */_Bool) 72057592964186112ULL)) ? (var_6) : (((/* implicit */unsigned int) var_1)))), (var_6)))));
}
