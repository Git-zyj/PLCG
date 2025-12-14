/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168350
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((unsigned long long int) 18446744073709551615ULL)) : (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)38745)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38738))) : (-1LL)))) : (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)47552))))) ? (503942971109432925ULL) : (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (arr_3 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
            /* LoopNest 2 */
            for (signed char i_2 = 3; i_2 < 24; i_2 += 3) 
            {
                for (short i_3 = 1; i_3 < 24; i_3 += 3) 
                {
                    {
                        arr_11 [18ULL] [i_1] [i_0] [(unsigned short)19] = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_3 - 1] [i_2 - 3] [(short)5])) ? (arr_9 [i_3 + 1] [i_2 - 2] [i_2]) : (arr_9 [i_3 - 1] [i_2 - 2] [i_2 + 1])));
                        arr_12 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (14228574108816199176ULL) : (0ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_8 [i_3 + 1] [i_2 - 2] [i_1]));
                        arr_13 [i_0] [i_0] [14U] [i_3] [(unsigned char)0] = ((/* implicit */signed char) (unsigned short)8253);
                    }
                } 
            } 
            var_16 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-78)) ? (((((/* implicit */int) var_3)) * (((/* implicit */int) (unsigned short)38745)))) : (((/* implicit */int) (signed char)127))));
            var_17 = ((/* implicit */int) ((unsigned short) arr_8 [i_1] [i_1] [i_0]));
            arr_14 [i_0] [(unsigned char)14] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [(unsigned short)4] [i_0] [(short)8]))))) : (4294967295U)));
        }
        for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    for (signed char i_7 = 1; i_7 < 23; i_7 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((unsigned int) var_9)))));
                            arr_24 [i_0] [i_0] [i_0] [i_5] [10U] [i_0] = ((/* implicit */unsigned short) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)13184))) > (arr_17 [(unsigned short)14] [(_Bool)1] [i_4])))));
                        }
                    } 
                } 
                var_19 &= ((/* implicit */signed char) ((arr_4 [i_5] [16] [i_5]) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_4 [i_4] [i_4] [i_5]))));
            }
            for (short i_8 = 0; i_8 < 25; i_8 += 1) 
            {
                arr_28 [i_0] [i_0] [i_4] [i_8] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)78)) ? (((((/* implicit */_Bool) arr_16 [i_8] [i_4] [(signed char)16])) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) arr_15 [i_0] [i_0])))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) (signed char)-23))))))) != (min((((/* implicit */long long int) arr_4 [i_0] [i_4] [(unsigned short)14])), (((8741165882984203517LL) & (((/* implicit */long long int) var_5))))))));
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_4] [i_0])) ? (((/* implicit */int) arr_27 [i_0] [i_0] [i_4] [i_0])) : (((/* implicit */int) arr_27 [i_0] [i_0] [i_4] [i_0]))))), (arr_3 [i_0] [i_4] [i_8]))))));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 25; i_9 += 4) 
                {
                    for (unsigned char i_10 = 1; i_10 < 24; i_10 += 1) 
                    {
                        {
                            arr_34 [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))) + (18446744073709551615ULL))));
                            arr_35 [i_9] [18ULL] [i_8] [i_9] [i_10 - 1] [i_9] [(unsigned short)16] &= ((/* implicit */unsigned char) arr_4 [i_9] [i_4] [i_8]);
                            var_21 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) -6)), (var_14)))) ? (var_15) : (((/* implicit */unsigned long long int) ((arr_21 [i_0] [i_0] [i_8] [i_8]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_4] [i_0] [i_4])))))))));
                        }
                    } 
                } 
                var_22 &= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((var_5) & (var_5))))))) >> (((((((/* implicit */int) (signed char)13)) * (((/* implicit */int) (short)-1)))) + (24)))));
            }
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_0] [i_4] [i_0] [i_0] [13LL]))) : (4294967295U)))) + (((unsigned long long int) (signed char)-118))))) ? (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_31 [i_0] [i_0]))), (((/* implicit */long long int) ((signed char) (_Bool)1))))) : (((((/* implicit */_Bool) max((16396726503990994188ULL), (((/* implicit */unsigned long long int) (signed char)-64))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)38))) : (((((/* implicit */long long int) 25636606)) ^ (7835778155558608454LL)))))));
            var_24 += ((/* implicit */long long int) arr_30 [i_4]);
            var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) >= (var_2)));
        }
    }
    var_26 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8861)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))))) >> (((max((((/* implicit */long long int) var_1)), (min((8LL), (((/* implicit */long long int) -736445797)))))) + (152LL)))));
}
