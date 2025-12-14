/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127406
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
    /* LoopSeq 4 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) 14U))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_13)))) : (min((0ULL), (17328731172474301926ULL)))))) ? (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 20U)) ? (((/* implicit */int) (unsigned char)212)) : (((/* implicit */int) arr_2 [i_0 - 1])))))) : (max((max((17328731172474301940ULL), (((/* implicit */unsigned long long int) 20U)))), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) 2843728864U)) : (18446744073709551615ULL))))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    for (long long int i_4 = 2; i_4 < 14; i_4 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 9223372036854775807LL)) * ((~(18446744073709551615ULL)))));
                            arr_12 [i_0] [i_0] [(_Bool)1] [i_3] [i_0] [i_4] [i_3] |= ((/* implicit */long long int) 756516325);
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned int) (((_Bool)1) ? ((~(((/* implicit */int) (short)-18)))) : (((/* implicit */int) arr_4 [(short)10] [i_0 + 1] [i_0 + 1]))));
            }
        }
        /* vectorizable */
        for (short i_5 = 1; i_5 < 14; i_5 += 4) 
        {
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_5 [i_5] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            arr_17 [i_5] [i_0] &= ((/* implicit */unsigned short) ((short) 8ULL));
            arr_18 [i_0] &= ((/* implicit */unsigned int) ((unsigned long long int) (short)9217));
        }
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_7 = 1; i_7 < 15; i_7 += 2) 
            {
                var_21 = ((/* implicit */unsigned char) 2843728864U);
                arr_23 [i_7] [i_6] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [(signed char)3] [(signed char)3]))) : ((+(6667228610547799204ULL)))));
                arr_24 [i_0] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1450968356)) ? (((/* implicit */int) arr_1 [i_6 + 1] [i_0])) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) 7LL)) ? (-1244386851) : (((/* implicit */int) var_8)))) : ((~(((/* implicit */int) (_Bool)1))))));
                var_22 |= ((/* implicit */signed char) arr_1 [i_6 + 1] [i_7]);
            }
            var_23 = ((/* implicit */long long int) var_5);
        }
        arr_25 [i_0 + 3] [i_0 - 1] = ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 3]))) / (((var_15) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned int i_8 = 3; i_8 < 21; i_8 += 1) 
    {
        arr_28 [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (17328731172474301911ULL) : (((/* implicit */unsigned long long int) 1451238427U))))) ? (-4464945502568976610LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        arr_29 [i_8 - 1] [i_8 - 2] = ((/* implicit */unsigned int) 17328731172474301926ULL);
        var_24 *= var_2;
    }
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        arr_34 [i_9] [i_9 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_31 [i_9 - 1] [i_9])), (var_0)))) ? (((/* implicit */int) ((650472056U) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : ((-(((/* implicit */int) arr_31 [i_9] [i_9]))))));
        var_25 = ((((/* implicit */_Bool) (-(5279368062616308606LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_31 [17] [i_9])))) : (((arr_31 [i_9] [i_9]) ? (650472038U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [7LL] [i_9]))))));
        var_26 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 650472050U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (3ULL)));
        arr_35 [i_9] [i_9 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13818273519646218197ULL)) ? (((((/* implicit */_Bool) 13818273519646218188ULL)) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) (short)16016)))) : (((/* implicit */int) ((unsigned short) var_14)))))) ? (-1865375107) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_32 [i_9] [i_9])), ((unsigned char)10))))));
        var_27 = ((/* implicit */unsigned int) ((var_4) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_16), (var_15)))) ? (((724964603U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)174))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)174))))))));
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 21; i_10 += 4) 
    {
        var_28 = ((/* implicit */unsigned int) ((var_8) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_27 [i_10 + 2] [i_10 + 2])));
        arr_40 [i_10] = ((/* implicit */signed char) (-(var_0)));
    }
    var_29 = ((/* implicit */_Bool) ((long long int) min((4628470554063333418ULL), (((/* implicit */unsigned long long int) -2046129972)))));
}
