/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152944
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned char)170)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31129))) : (arr_1 [i_0]))));
        var_17 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))) << ((((~(arr_1 [i_0]))) - (1181794879U)))));
    }
    /* LoopSeq 1 */
    for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_1])) * (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)41552)) ? (15808026939156172424ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)23))))))));
        var_19 = (-(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)40)), (var_5)))));
        arr_8 [i_1] = ((/* implicit */_Bool) 12105723091875009514ULL);
        var_20 = ((/* implicit */int) (_Bool)1);
    }
}
