/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115273
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) 15929090086697883781ULL))));
                    var_18 = ((/* implicit */unsigned short) (-(min((var_6), (var_6)))));
                    arr_7 [(_Bool)1] [i_1] [i_2] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) ((2517653987011667834ULL) ^ (2517653987011667860ULL)))) ? ((+(15929090086697883756ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((int) 2251799813685247ULL));
}
