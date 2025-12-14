/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145104
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        var_10 = 1026610440;
        arr_2 [i_0] = ((/* implicit */unsigned char) (~(-1)));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 1) 
    {
        var_11 = ((((/* implicit */_Bool) 371821316147323371ULL)) ? (-1991007524) : (((/* implicit */int) arr_1 [i_1 + 1])));
        var_12 = ((/* implicit */unsigned long long int) var_3);
    }
    for (short i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        var_13 = ((/* implicit */unsigned short) 1991007521);
        var_14 -= ((/* implicit */short) ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) 3935229186230927036ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_7 [i_2]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2])))))));
    }
    var_15 = ((/* implicit */signed char) -1);
    var_16 = var_7;
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) 3935229186230927034ULL))) ? ((-(((/* implicit */int) arr_11 [i_3] [i_3])))) : ((+(-1991007531)))));
        arr_13 [i_3] = ((/* implicit */int) var_3);
        arr_14 [i_3] = ((/* implicit */int) ((signed char) arr_12 [i_3]));
    }
    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)2564)) - ((-(((/* implicit */int) arr_15 [i_4]))))))), ((-(3599467973U)))));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (2382365892U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62955)))))) ? (2234207627640832ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_4)))))))))));
    }
}
