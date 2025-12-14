/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149038
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
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [8U] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((var_3), (arr_2 [i_0]))), (arr_5 [i_0] [i_1] [i_2])))) && (((/* implicit */_Bool) 1398018437U))));
                    arr_11 [i_0] [i_1 - 1] [i_1] = ((/* implicit */unsigned long long int) 2896948859U);
                    arr_12 [i_1] [i_1] [i_0] [i_1] = min((max((arr_5 [i_0] [i_1] [9ULL]), (var_4))), (((((/* implicit */_Bool) (+(7576452311580395366ULL)))) ? (var_0) : (((((/* implicit */_Bool) arr_5 [i_1] [i_1] [12ULL])) ? (1398018425U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
                }
            } 
        } 
    } 
    var_12 &= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (7576452311580395375ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1398018401U)) ? (var_2) : (var_7)))) : (7576452311580395375ULL)))));
}
