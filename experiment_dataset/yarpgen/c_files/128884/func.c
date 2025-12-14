/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128884
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
    var_20 |= ((/* implicit */long long int) (+(((((((/* implicit */_Bool) var_6)) ? (7791606036742669415ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) + (((/* implicit */unsigned long long int) ((int) (signed char)-105)))))));
    var_21 = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55550))) : (10655138036966882201ULL));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        var_22 = ((/* implicit */long long int) max(((+(((((/* implicit */_Bool) (signed char)-80)) ? (3327688017227923367ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)80))))))), (var_7)));
        arr_2 [i_0] = ((/* implicit */signed char) ((arr_0 [i_0] [i_0]) - (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (max((arr_0 [i_0] [i_0]), (((/* implicit */long long int) (signed char)80)))) : (((((/* implicit */_Bool) var_3)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
        var_23 ^= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((var_6), (((/* implicit */unsigned char) var_17))))), (max((7211196170669667219ULL), (((/* implicit */unsigned long long int) (unsigned char)128))))));
        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) var_7))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_11)) ? (var_13) : (arr_5 [i_0 - 1] [i_0] [i_1]))) <= (((long long int) min((((/* implicit */long long int) var_6)), (5140396343173148631LL)))))))));
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (signed char)120)))), (((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))));
            var_26 -= ((/* implicit */_Bool) 5140396343173148631LL);
            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 719270643U)) ? (min((0ULL), (((/* implicit */unsigned long long int) arr_5 [i_0 - 1] [i_0] [i_0])))) : (((/* implicit */unsigned long long int) arr_5 [i_1] [i_0] [i_0]))));
        }
        for (unsigned short i_2 = 4; i_2 < 15; i_2 += 4) 
        {
            arr_9 [i_0] = ((/* implicit */signed char) var_6);
            arr_10 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) != (((/* implicit */int) (signed char)113))));
        }
    }
}
