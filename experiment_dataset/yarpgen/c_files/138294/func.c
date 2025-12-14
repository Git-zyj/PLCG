/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138294
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_12 -= ((((/* implicit */_Bool) min((var_10), ((~(2200861072883812845LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (min(((+(2200861072883812845LL))), (min((arr_1 [i_0]), (2200861072883812858LL))))));
        var_13 = ((/* implicit */unsigned char) (~(((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_7)))) % (((/* implicit */unsigned long long int) var_4))))));
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (short)31605))));
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            var_15 = ((/* implicit */unsigned int) var_3);
            arr_5 [i_0] [8ULL] [6U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) -196790392)) ? (7147088390042404246ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))))) ? (((((/* implicit */_Bool) (+(arr_0 [i_0])))) ? (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2200861072883812842LL)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) | (((/* implicit */int) var_1))))) ? (arr_1 [i_0 + 1]) : (arr_1 [i_1]))))));
            var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */long long int) var_4)) ^ (-2200861072883812839LL)))) ? (((/* implicit */int) arr_3 [i_0 + 1] [10U] [i_1 - 1])) : (((/* implicit */int) arr_2 [(unsigned char)3] [i_1] [4ULL])))) >= (((/* implicit */int) var_2))));
            arr_6 [i_1] [i_1] |= ((/* implicit */unsigned char) var_9);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-10907)) ? ((~(((/* implicit */int) max(((unsigned char)2), (((/* implicit */unsigned char) var_3))))))) : (((/* implicit */int) (signed char)-100)))))));
            var_18 -= ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) (signed char)100)) - (78)))));
            arr_9 [i_2] = ((/* implicit */unsigned char) ((unsigned long long int) min((((/* implicit */signed char) var_3)), (arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 1]))));
        }
    }
    var_19 = ((/* implicit */short) var_10);
}
