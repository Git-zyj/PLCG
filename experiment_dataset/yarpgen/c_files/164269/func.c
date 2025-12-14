/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164269
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
    var_18 -= ((/* implicit */unsigned long long int) var_15);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((_Bool) -8183664867952394735LL)))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))) : (((long long int) 18446744073709551615ULL))));
    }
    for (unsigned int i_1 = 2; i_1 < 13; i_1 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) ((13028705950480189870ULL) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_13) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_4 [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_4 [i_1]))))) : (max((3338040558U), (3338040553U))))))));
        var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_1] [i_1]))));
    }
    var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_3))) ? ((+(3330492395U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)56)) : (((/* implicit */int) (short)-32356))))))))));
    var_23 = ((unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((var_17) % (956926738U))) : (((((/* implicit */_Bool) var_17)) ? (3338040553U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
}
