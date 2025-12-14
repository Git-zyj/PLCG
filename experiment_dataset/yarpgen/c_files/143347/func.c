/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143347
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
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [4U] [4U] [i_0 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-((+(var_2)))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) 17643435771998515632ULL)) ? (var_0) : (arr_6 [i_0] [i_0] [i_0])))) ? (max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [16ULL])), (17643435771998515649ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))))))));
                    var_10 = var_1;
                    var_11 = ((/* implicit */unsigned long long int) max((var_11), (max((arr_6 [i_0] [i_0] [i_0]), (((unsigned long long int) arr_1 [i_0 - 2] [i_0 - 1]))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) var_2)) ? (12743565539535520261ULL) : (((/* implicit */unsigned long long int) var_2)))), (18446744073709551615ULL))) == (min((((/* implicit */unsigned long long int) var_5)), (18446744073709551598ULL)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 2) 
    {
        arr_12 [12U] |= ((/* implicit */unsigned int) ((unsigned long long int) arr_2 [6U] [i_3 - 1]));
        var_13 ^= ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_0) : (18446744073709551603ULL)))) || (((/* implicit */_Bool) (+(var_3)))))))) ^ (((var_1) & (var_5))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        var_14 = var_9;
        var_15 += arr_15 [12ULL] [17U];
        arr_16 [i_4] = var_2;
    }
}
