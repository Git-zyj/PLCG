/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130842
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
    var_17 = ((/* implicit */unsigned short) (-9223372036854775807LL - 1LL));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_18 = ((/* implicit */_Bool) var_10);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)103))));
        var_19 += ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65516))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)94))))) : (var_3)));
        arr_5 [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_20 = ((/* implicit */_Bool) ((unsigned short) ((long long int) ((((/* implicit */_Bool) (signed char)-104)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-103))) : (17865242999861324852ULL)))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((((long long int) var_6)), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_1])))))))) ? (((long long int) var_10)) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0)))))));
    }
    var_22 = ((/* implicit */_Bool) (~(((int) (unsigned short)65521))));
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */signed char) var_4)), ((signed char)102)))), (((((/* implicit */_Bool) 9137563863747487162LL)) ? (16843172481817975085ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)103)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (max((((var_10) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-122))) : (9137563863747487162LL))))))));
}
