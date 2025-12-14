/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154066
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
    var_11 = ((/* implicit */signed char) var_7);
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((((((/* implicit */int) var_2)) * (((/* implicit */int) (unsigned short)559)))) | (((/* implicit */int) var_10))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) (signed char)-99))))) != (((/* implicit */int) ((6165445364922978597ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [i_0 - 2]), (arr_1 [i_0 - 1]))))) : ((~(min((((/* implicit */unsigned int) (unsigned short)47696)), (arr_0 [i_0] [i_0])))))));
        var_14 *= ((/* implicit */unsigned char) (+(max((6165445364922978597ULL), (3958325964464184984ULL)))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        arr_4 [(signed char)20] [i_1] = ((/* implicit */short) ((unsigned long long int) var_8));
        arr_5 [i_1] [i_1] = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        var_15 += ((/* implicit */short) (~(((unsigned long long int) (short)-22603))));
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2])) && (((/* implicit */_Bool) var_0))));
    }
    for (short i_3 = 0; i_3 < 15; i_3 += 4) 
    {
        var_17 *= ((/* implicit */short) var_7);
        var_18 *= ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3]))) : (arr_3 [14ULL])))) ? (2587976421U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned int) var_10))));
        var_19 = ((/* implicit */short) ((unsigned long long int) ((((((/* implicit */_Bool) 268435455ULL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3]))))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3]))))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_4 = 2; i_4 < 16; i_4 += 1) 
    {
        var_20 -= var_7;
        arr_15 [(_Bool)1] [i_4] = ((/* implicit */unsigned char) 14942658670555677402ULL);
        var_21 *= 11484256939986774878ULL;
    }
}
