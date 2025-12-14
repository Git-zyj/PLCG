/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165089
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) 10814610550914438628ULL);
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    for (long long int i_1 = 0; i_1 < 14; i_1 += 4) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */int) arr_7 [i_1]);
        arr_9 [i_1] = ((/* implicit */unsigned int) min((min(((unsigned short)51947), (((/* implicit */unsigned short) (signed char)58)))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))))))));
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551614ULL)) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) (signed char)-86))));
    }
    for (unsigned int i_2 = 3; i_2 < 10; i_2 += 1) 
    {
        var_19 = (~((-(arr_11 [i_2 + 1]))));
        var_20 *= ((/* implicit */short) arr_11 [i_2 + 3]);
        var_21 *= ((/* implicit */short) (+(((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (var_4))))));
        arr_12 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((~(18382418476060601571ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_14), (((/* implicit */signed char) var_12)))))))))));
    }
    var_22 = ((/* implicit */unsigned int) (unsigned short)24);
}
