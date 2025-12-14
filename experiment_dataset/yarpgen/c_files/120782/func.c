/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120782
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */int) var_3)) * (((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */int) ((unsigned char) (-(arr_1 [i_0] [i_0]))))) : (((((/* implicit */int) arr_0 [i_0])) << (((((/* implicit */int) arr_0 [i_0])) - (98)))))));
        arr_3 [(signed char)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1859468273)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) 1859468251))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) 1733586246042010571LL))) && (((/* implicit */_Bool) 6681947012364508091ULL)))))));
        arr_4 [8LL] = ((/* implicit */unsigned short) 2047ULL);
        arr_5 [i_0] [2] = ((/* implicit */unsigned short) var_15);
        arr_6 [(short)4] |= ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)136))));
    }
    for (unsigned char i_1 = 2; i_1 < 21; i_1 += 1) 
    {
        arr_9 [i_1] = (((~(min((((/* implicit */long long int) arr_7 [i_1])), (var_9))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_8 [i_1] [i_1])), (var_9)))) ? ((-(((/* implicit */int) var_2)))) : (((/* implicit */int) arr_7 [i_1]))))));
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1 + 2])) ? (((((/* implicit */_Bool) arr_8 [i_1] [i_1 - 2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_7 [i_1 + 2])))) : ((~(((/* implicit */int) arr_8 [i_1] [i_1 + 2]))))));
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) min((1859468240), ((~(((/* implicit */int) arr_7 [i_1 + 1])))))))));
    }
    for (long long int i_2 = 2; i_2 < 9; i_2 += 1) 
    {
        var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((-(-1890407646))), (((((/* implicit */_Bool) arr_13 [(unsigned short)6] [i_2])) ? (((/* implicit */int) arr_11 [i_2] [i_2])) : (((/* implicit */int) arr_0 [i_2]))))))) ? ((~(((((/* implicit */_Bool) 9007199254740991ULL)) ? (((/* implicit */long long int) var_6)) : (arr_1 [i_2] [i_2]))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_2 + 2])))))));
        var_22 = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_7 [i_2 - 1])) & (((/* implicit */int) (short)(-32767 - 1))))), (((/* implicit */int) (signed char)-30))));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 1) 
        {
            var_23 ^= ((/* implicit */unsigned long long int) var_7);
            var_24 &= ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_15 [i_3 + 1] [i_3]))))));
            var_25 = ((/* implicit */unsigned short) (~(arr_12 [i_3 + 1])));
            arr_16 [(_Bool)1] [i_3] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) > (arr_12 [i_3 + 1]))));
        }
        var_26 = ((/* implicit */unsigned long long int) var_10);
        var_27 = ((/* implicit */short) (+((~(18446744073709551615ULL)))));
    }
    var_28 = -1576932660;
}
