/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113199
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
    var_15 = ((/* implicit */unsigned char) min((var_15), (var_13)));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 4; i_0 < 8; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((unsigned char) (signed char)-39));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((unsigned char) (((!(((/* implicit */_Bool) var_8)))) ? (arr_1 [i_0 + 2] [(unsigned char)0]) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_9)) * (0U)))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            arr_7 [i_0] [i_0] [1U] = ((/* implicit */unsigned char) 2298519436U);
            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)160)) ? (4194303ULL) : (18446744073705357331ULL)));
            arr_8 [i_0] [(signed char)1] [i_1] = ((/* implicit */unsigned long long int) max((((unsigned int) arr_5 [i_0 - 2] [i_0] [i_0])), (((unsigned int) ((((/* implicit */_Bool) (unsigned char)32)) ? (4194284ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
        }
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) /* same iter space */
        {
            var_17 = ((((/* implicit */_Bool) 18446744073705357331ULL)) ? (((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (11291966762479056462ULL) : (((/* implicit */unsigned long long int) 454494405U)))) : (((/* implicit */unsigned long long int) arr_0 [i_2] [i_0 - 2])));
            arr_13 [i_0 - 2] [i_0] [i_2] = arr_6 [i_0 - 3] [i_0 - 3] [i_0 + 1];
            var_18 |= ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) (signed char)-29)) || (((/* implicit */_Bool) var_14))))));
        }
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) /* same iter space */
        {
            arr_16 [i_0] [i_3] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (signed char)-126)), (((((/* implicit */_Bool) arr_14 [i_0 + 1] [i_0])) ? (2699744705568026454ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0])))))));
            arr_17 [i_0] [2ULL] [i_0] = ((/* implicit */signed char) var_0);
            arr_18 [i_3] [i_0] = ((/* implicit */unsigned int) 16397328430516216607ULL);
        }
    }
    /* vectorizable */
    for (unsigned int i_4 = 4; i_4 < 12; i_4 += 3) 
    {
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (!(((/* implicit */_Bool) 18446744073705357355ULL)))))));
        arr_21 [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_20 [i_4 - 3]) >> (((arr_20 [i_4]) - (2215289365U))))))));
        arr_22 [i_4] = ((/* implicit */int) (~(arr_20 [i_4 - 4])));
        arr_23 [i_4] = ((/* implicit */unsigned char) arr_20 [i_4]);
    }
    for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
    {
        arr_26 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)65)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)22))) & (18446744073705357312ULL)))))) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-56))) : (2792925960U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)41)))));
        var_20 = arr_25 [i_5];
        var_21 = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((int) (unsigned char)200))))))) + (var_2));
        var_22 ^= ((/* implicit */unsigned int) (signed char)-96);
        var_23 |= ((/* implicit */signed char) ((max((var_2), (((/* implicit */unsigned int) arr_24 [i_5])))) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 82410900)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (18446744073705357312ULL))))))))));
    }
    for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 2) 
    {
        arr_30 [i_6] = max((((/* implicit */unsigned long long int) (signed char)6)), (((70351564308480ULL) % (18446744073705357345ULL))));
        var_24 = ((((/* implicit */int) ((0U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_6])))))) << (((((unsigned int) min((15893055363792734197ULL), (9160867734751762498ULL)))) - (473389106U))));
        arr_31 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) 2949633884U))) ? ((((!(((/* implicit */_Bool) arr_24 [i_6 - 1])))) ? (arr_25 [i_6 + 2]) : (4194306ULL))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073705357312ULL)) ? (arr_28 [(unsigned char)2]) : (((/* implicit */int) (unsigned char)64))))) ? (min((arr_25 [3U]), (((/* implicit */unsigned long long int) 534773760)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)90)))))));
        var_25 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_27 [i_6]))))));
        var_26 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_24 [i_6])), (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) ^ (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_6]))) : (var_10)))))));
    }
}
