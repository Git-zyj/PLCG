/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14130
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (~(((/* implicit */int) var_7)))))));
                    arr_9 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((signed char) var_8))) < (((/* implicit */int) arr_8 [5ULL] [i_1] [(signed char)11] [20LL]))));
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2]))))) >= ((((-(((/* implicit */int) arr_2 [i_0])))) * (((((/* implicit */int) var_8)) / (arr_4 [(_Bool)1] [i_1] [14])))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(var_2)))))))));
    var_16 = ((/* implicit */unsigned int) var_0);
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) 9244545613230665214ULL)) ? (9244545613230665207ULL) : (18446744073709551615ULL)));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) << (((/* implicit */int) (((~(((/* implicit */int) var_10)))) >= (((/* implicit */int) ((10285475919411567207ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))))));
}
