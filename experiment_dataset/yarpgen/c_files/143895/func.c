/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143895
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
    var_20 = ((/* implicit */unsigned char) ((unsigned long long int) (((-(var_2))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_1 [i_0])))) | (((-1878685363) | (((/* implicit */int) (unsigned short)11210))))));
        var_21 &= ((/* implicit */int) max((arr_0 [i_0] [i_0 - 2]), (((/* implicit */unsigned long long int) ((unsigned short) var_9)))));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
    {
        var_22 *= ((/* implicit */int) var_3);
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (~(((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) -3033887767895424234LL)) : (4866069639580648632ULL))))))));
    }
    for (short i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
    {
        var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16955084755990179517ULL)) ? (1491659317719372099ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)13)))))) ? (16955084755990179494ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)154))));
        var_25 = ((/* implicit */int) ((unsigned short) ((long long int) 16955084755990179517ULL)));
    }
}
