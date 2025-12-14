/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134625
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
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_6) : (var_10))))))) ? (min((min((((/* implicit */long long int) arr_0 [i_0 + 1] [i_0])), (576460748008456192LL))), ((((_Bool)1) ? (576460748008456192LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))) : (var_3)));
        var_12 = ((/* implicit */_Bool) 0LL);
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_8 [i_2 + 1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))) ? (max((((/* implicit */int) var_2)), (arr_2 [i_1 - 1]))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (0LL)))) : (((/* implicit */int) (_Bool)0))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 4; i_3 < 13; i_3 += 2) 
                    {
                        for (long long int i_4 = 4; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_13 *= ((/* implicit */int) arr_6 [i_0 + 1] [i_1] [i_2] [11LL]);
                                var_14 = ((/* implicit */unsigned short) min((max((((/* implicit */long long int) arr_6 [i_3 + 1] [i_3 - 4] [i_3 - 1] [i_3 - 2])), (-576460748008456192LL))), (((/* implicit */long long int) 2831516011U))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned short) max((var_9), (var_9)));
                }
            } 
        } 
        var_16 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))) : (1206365356U))) : (arr_11 [i_0] [6] [i_0 - 1] [1LL] [i_0])))) && (((/* implicit */_Bool) var_11))));
    }
    for (unsigned short i_5 = 2; i_5 < 22; i_5 += 3) 
    {
        var_17 = ((/* implicit */int) max((max((max((arr_14 [i_5]), (var_0))), (((/* implicit */unsigned short) ((((/* implicit */int) arr_17 [i_5])) == (((/* implicit */int) var_1))))))), (((/* implicit */unsigned short) var_1))));
        var_18 = ((/* implicit */_Bool) min((min((min((0LL), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) min((var_9), (var_1)))))), (((/* implicit */long long int) min((min((arr_14 [13U]), (arr_14 [23LL]))), (var_8))))));
    }
    var_19 |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) 2831516011U)) : (((((-1LL) + (9223372036854775807LL))) >> (((2831516041U) - (2831516029U))))))) > (((/* implicit */long long int) ((/* implicit */int) var_0)))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) var_1)), (576460748008456179LL))), (((/* implicit */long long int) var_1))))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)31))) - (var_3))) : (((/* implicit */long long int) var_6))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)112)) ? (4268937213409843429LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)112))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 4891635113717138154LL)) ? (((/* implicit */int) (unsigned short)44503)) : (((/* implicit */int) var_2)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-113)), (var_10)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_2)))) : (var_10)))) : (max((var_3), (((/* implicit */long long int) ((var_9) ? (var_10) : (((/* implicit */int) var_4)))))))));
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 2) 
    {
        for (signed char i_7 = 1; i_7 < 10; i_7 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -517250693260302103LL)) ? (-6LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-31)))));
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [4] [i_7 - 1] [(unsigned short)0])) ? (19LL) : (((/* implicit */long long int) 633033816U))));
                    var_24 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_11)) + (2147483647))) >> (((var_7) - (2289091395U)))));
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_6] [i_7 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_24 [i_6] [i_6] [i_6] [i_6]))));
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 11; i_9 += 1) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_23 [i_6] [10]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                                var_27 += ((/* implicit */unsigned int) (signed char)10);
                                var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [7LL] [i_7 + 1] [i_8] [i_10])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_26 [i_6] [i_7 + 1] [i_7 + 1] [i_7]))));
                            }
                        } 
                    } 
                }
                var_29 = ((/* implicit */long long int) arr_31 [i_6] [i_6]);
                var_30 = var_0;
                var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_25 [i_6] [(unsigned short)9] [i_7 - 1]) * (((/* implicit */unsigned int) var_10))))) ? (((/* implicit */long long int) max((arr_25 [i_6] [i_6] [i_7 - 1]), (arr_25 [i_6] [i_7] [i_7 + 1])))) : ((((_Bool)0) ? (((/* implicit */long long int) 324885207U)) : (6114840600752487497LL)))));
            }
        } 
    } 
}
