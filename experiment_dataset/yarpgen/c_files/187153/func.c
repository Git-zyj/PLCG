/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187153
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
    var_13 = ((/* implicit */unsigned char) var_0);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned int) ((signed char) ((unsigned long long int) var_5)));
        var_15 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((min((var_12), (((/* implicit */unsigned long long int) var_0)))) >> (((((((/* implicit */unsigned long long int) var_2)) + (var_12))) - (6791467810622022111ULL)))))) && (((/* implicit */_Bool) max((((unsigned int) var_6)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_10))))))));
        var_16 = ((/* implicit */short) var_4);
    }
    for (int i_1 = 0; i_1 < 17; i_1 += 4) /* same iter space */
    {
        var_17 ^= ((/* implicit */unsigned long long int) var_11);
        var_18 = ((/* implicit */unsigned short) ((short) ((signed char) 2320899754700911351LL)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17; i_2 += 4) /* same iter space */
    {
        arr_7 [i_2] = ((unsigned char) (-(((/* implicit */int) (unsigned short)9786))));
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (unsigned short)7936))));
    }
    var_20 = ((/* implicit */signed char) var_9);
}
