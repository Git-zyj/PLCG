/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133671
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
    var_12 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)227))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_13 = ((/* implicit */signed char) ((short) (short)15504));
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) ? (((long long int) arr_0 [i_0] [i_0])) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_0))))));
    }
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        arr_4 [i_1] = ((/* implicit */short) min((((/* implicit */unsigned int) arr_2 [i_1] [i_1])), (((743470271U) / (((/* implicit */unsigned int) (-(((/* implicit */int) var_4)))))))));
        var_15 *= ((/* implicit */short) max((arr_3 [i_1]), (((/* implicit */unsigned long long int) ((signed char) arr_3 [i_1])))));
        var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_3 [i_1]), (((/* implicit */unsigned long long int) arr_2 [i_1] [i_1])))))));
    }
    for (unsigned char i_2 = 2; i_2 < 22; i_2 += 1) 
    {
        arr_7 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_2 - 1]))))) ? (((/* implicit */unsigned long long int) 262915335)) : ((~(arr_3 [i_2 - 1])))));
        /* LoopSeq 3 */
        for (unsigned int i_3 = 1; i_3 < 22; i_3 += 2) 
        {
            var_17 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) (signed char)76)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-32744)))));
            var_18 *= ((/* implicit */signed char) ((unsigned char) 14718983633364735787ULL));
        }
        for (unsigned short i_4 = 2; i_4 < 21; i_4 += 1) 
        {
            arr_13 [i_2] [i_4] [i_4] |= ((/* implicit */unsigned int) (~(((/* implicit */int) (short)32767))));
            arr_14 [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */unsigned long long int) ((long long int) var_5))) : (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)230))) + (arr_9 [i_4] [14U]))), (((/* implicit */unsigned long long int) arr_11 [i_2] [i_2]))))));
            var_19 = ((/* implicit */long long int) (+(((/* implicit */int) arr_12 [(unsigned short)20] [i_2] [i_4]))));
        }
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            arr_17 [i_2] = ((/* implicit */_Bool) ((signed char) arr_8 [i_2 - 1] [i_2 - 2] [11LL]));
            var_20 = ((/* implicit */_Bool) arr_2 [i_2 - 2] [i_2 + 1]);
            var_21 = ((/* implicit */unsigned short) ((9223372036854775807LL) << (0ULL)));
        }
    }
    var_22 = ((/* implicit */signed char) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) (short)15504)))))))));
}
