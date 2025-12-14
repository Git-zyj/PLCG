/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165695
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
    var_12 -= ((/* implicit */unsigned short) max((max((((var_11) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)7))) : (var_8))), (((/* implicit */long long int) var_2)))), (var_8)));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-29)) % (((/* implicit */int) (unsigned short)32606))));
    var_14 = ((((15885695047542993867ULL) >> (((455444262167484751LL) - (455444262167484745LL))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)16))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)32956)))) : (var_9)))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_3 [5U] = ((/* implicit */int) (unsigned char)120);
        arr_4 [5LL] = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) arr_0 [20])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)37)))), (((/* implicit */int) ((unsigned short) 902858208U))))) - (((/* implicit */int) (unsigned char)236))));
    }
    for (long long int i_1 = 4; i_1 < 10; i_1 += 2) 
    {
        var_15 = ((/* implicit */int) ((long long int) var_5));
        var_16 *= arr_6 [i_1 - 3];
        arr_7 [0] = min((var_8), (((/* implicit */long long int) (-(((/* implicit */int) var_0))))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            var_17 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2]))))) % (((/* implicit */int) var_11))));
            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_2])) ? (arr_2 [i_2]) : (arr_2 [i_2]))))));
            arr_12 [i_2] [i_3] [(short)6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) << (((((((/* implicit */int) arr_11 [(_Bool)1])) + (109))) - (21)))))) ? (((((/* implicit */_Bool) arr_8 [i_2])) ? (15885695047542993867ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2])))));
        }
        var_19 = ((/* implicit */int) -7040278561687158438LL);
    }
}
