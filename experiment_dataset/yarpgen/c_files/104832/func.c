/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104832
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
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_4 [(unsigned short)4] = ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) < (min((((/* implicit */unsigned long long int) -6297588412899363177LL)), (var_8)))));
        arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((min((((/* implicit */int) min((var_1), ((unsigned short)61862)))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_2)) : (1879048192))))) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) + (((/* implicit */int) var_12))))) == (((((/* implicit */_Bool) -604918877033596046LL)) ? (753091757095921468ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))))))));
        arr_6 [1LL] = ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_6))))))));
        var_17 += ((/* implicit */unsigned short) min(((~(var_5))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 131071)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-7735190902848740670LL)))))))));
    }
    var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 753091757095921448ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51533))) : (var_9)))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)215)) : (((/* implicit */int) var_14)))) & (((/* implicit */int) var_0)))))));
}
