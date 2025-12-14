/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108736
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
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(18446744073709551615ULL)))) ? (((/* implicit */int) arr_2 [i_0])) : ((-(arr_1 [i_0] [i_0])))));
        /* LoopSeq 3 */
        for (int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            var_20 += ((/* implicit */signed char) (-((+(max((1927043963U), (((/* implicit */unsigned int) arr_0 [i_0] [i_1]))))))));
            arr_6 [i_1] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [(unsigned char)8]))) & (var_13)))) : (5217503852413172872LL))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            arr_9 [(unsigned char)2] = arr_5 [i_0] [(unsigned char)2];
            var_21 = ((/* implicit */unsigned long long int) var_16);
        }
        for (unsigned char i_3 = 2; i_3 < 11; i_3 += 4) 
        {
            arr_12 [i_0] = ((/* implicit */unsigned long long int) arr_11 [(unsigned char)3]);
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_4 [i_3 + 2] [i_3 - 2] [i_3 - 2])))))))));
        }
        var_23 -= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), (arr_2 [i_0]))))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) /* same iter space */
    {
        arr_17 [i_4] = ((/* implicit */_Bool) var_2);
        var_24 = ((/* implicit */int) (+((~(var_10)))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
    {
        arr_20 [i_5] = ((/* implicit */unsigned char) (((-((~(18446744073709551615ULL))))) * (((((/* implicit */_Bool) (~(arr_13 [(unsigned char)20])))) ? (((unsigned long long int) 0ULL)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (signed char)41)) : (((/* implicit */int) arr_15 [i_5])))))))));
        /* LoopSeq 1 */
        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            arr_23 [i_5] [i_6] [i_6] = (+((~(arr_16 [i_6]))));
            arr_24 [4ULL] &= ((/* implicit */unsigned char) (signed char)25);
            var_25 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_5])) ? (((/* implicit */int) ((((/* implicit */int) arr_21 [i_5])) < (((/* implicit */int) var_9))))) : ((-(((/* implicit */int) arr_19 [i_6]))))))) ? (((/* implicit */int) ((arr_13 [(_Bool)1]) > (((/* implicit */long long int) ((((/* implicit */int) var_9)) / (arr_16 [4U]))))))) : (((/* implicit */int) ((((/* implicit */int) arr_19 [i_5])) >= (((/* implicit */int) ((_Bool) (_Bool)0))))))));
            var_26 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 3) 
        {
            var_27 = ((/* implicit */int) min((var_27), (((int) 18446744073709551592ULL))));
            arr_27 [i_7] = ((/* implicit */int) (unsigned char)241);
            var_28 &= ((/* implicit */unsigned long long int) ((unsigned char) arr_15 [i_5]));
        }
    }
    var_29 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))));
    var_30 ^= ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (!(((/* implicit */_Bool) var_17))))))), (var_2)));
    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) var_4)) ? ((-(var_16))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)0)), (var_6))))))));
}
