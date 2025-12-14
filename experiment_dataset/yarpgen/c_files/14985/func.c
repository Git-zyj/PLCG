/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14985
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
    var_13 = ((/* implicit */short) var_2);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_14 += ((/* implicit */short) arr_1 [i_0]);
        var_15 += ((/* implicit */unsigned short) (+(9223231299366420480LL)));
        var_16 += ((/* implicit */unsigned short) (~((~(((/* implicit */int) (unsigned short)21028))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 18; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */int) 9223231299366420480LL);
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) : (((((/* implicit */_Bool) 9223231299366420480LL)) ? (-9223231299366420483LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [11ULL] [i_1])))))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) (signed char)-77)) < (((/* implicit */int) (unsigned short)16792)))));
        arr_8 [i_1] |= ((/* implicit */signed char) (~(-9223231299366420480LL)));
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((arr_0 [i_1]) * (arr_0 [i_1]))))));
    }
    var_18 = ((/* implicit */unsigned int) var_6);
    /* LoopSeq 2 */
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        var_19 += ((/* implicit */unsigned short) ((signed char) ((signed char) (short)-1)));
        arr_12 [(unsigned short)3] [(short)9] = ((((/* implicit */_Bool) arr_4 [i_2])) ? (min((3755683374U), (((/* implicit */unsigned int) (unsigned short)65516)))) : (((/* implicit */unsigned int) min(((~(((/* implicit */int) (short)-26)))), (((/* implicit */int) ((var_10) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2]))))))))));
        arr_13 [5ULL] [i_2] = min((arr_4 [(signed char)5]), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(-1643606887)))) == (var_4)))));
    }
    for (unsigned long long int i_3 = 3; i_3 < 21; i_3 += 2) 
    {
        arr_16 [i_3] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((((/* implicit */long long int) arr_14 [i_3])), (-6211214080300205006LL)))) ? (max((arr_15 [i_3] [i_3]), (((/* implicit */unsigned int) (_Bool)1)))) : (arr_15 [i_3] [i_3 + 2]))), (((/* implicit */unsigned int) var_2))));
        var_20 ^= ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) (!((_Bool)1)))) >= (((((/* implicit */int) var_7)) % (((/* implicit */int) (_Bool)1)))))));
        arr_17 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-85)) ? (((/* implicit */int) arr_14 [18])) : (((((/* implicit */_Bool) arr_15 [i_3 - 2] [i_3 + 2])) ? (((((/* implicit */int) var_8)) | (((/* implicit */int) arr_14 [5U])))) : (((/* implicit */int) var_6))))));
    }
}
