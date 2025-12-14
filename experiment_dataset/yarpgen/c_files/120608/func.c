/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120608
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 7; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 7; i_4 += 1) 
                        {
                            {
                                var_10 = ((((((/* implicit */_Bool) arr_5 [i_1 + 2] [i_3 + 1] [i_4 + 2] [i_3])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) - (min((var_3), (((/* implicit */unsigned long long int) var_8)))));
                                var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) max((144115188075855616ULL), (((/* implicit */unsigned long long int) -3208560990153901542LL))))) || (((/* implicit */_Bool) arr_5 [i_1 + 3] [i_3 + 1] [i_4 + 1] [i_4 + 1]))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2316777526U)) - (0ULL)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) != (var_5)))) : (((/* implicit */int) arr_9 [i_2] [i_2] [i_4])))))))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */_Bool) (unsigned char)176);
                }
                for (unsigned char i_5 = 3; i_5 < 9; i_5 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        var_13 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_4 [(unsigned char)8]), (arr_4 [(unsigned short)6])))) ? (max((((/* implicit */unsigned long long int) var_2)), (max((var_9), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0])))))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_1 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_6]))) : (var_3)))));
                        var_14 = ((/* implicit */unsigned long long int) 2039480521U);
                        arr_19 [i_0] [i_0] [i_0] [i_5] [i_6] = ((((/* implicit */_Bool) var_9)) ? (max(((~(12763069525846326084ULL))), (((/* implicit */unsigned long long int) (short)32640)))) : (((/* implicit */unsigned long long int) -1)));
                        var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_10 [i_0] [i_1 - 2])) - (max((((/* implicit */unsigned long long int) (unsigned short)24)), (var_9)))));
                        arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_9);
                    }
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((int) ((-1254142043) <= (((/* implicit */int) (short)26465))))))));
                }
                for (unsigned long long int i_7 = 1; i_7 < 8; i_7 += 2) 
                {
                    var_17 = max((((unsigned long long int) (unsigned short)1)), (min((arr_1 [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_16 [i_1] [i_1] [i_0] [i_1 + 2])))));
                    arr_23 [i_0] [i_1] [6LL] &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1] [i_1 + 4])) ? (var_1) : (((/* implicit */long long int) arr_5 [i_1] [i_1] [i_1] [i_1 + 1]))))) * (((unsigned long long int) arr_10 [(short)6] [i_1]))));
                }
                arr_24 [4ULL] |= ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_7)) - (((/* implicit */int) max((var_4), (((/* implicit */unsigned short) var_6))))))) - (((/* implicit */int) (_Bool)0))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_6);
    var_19 ^= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((var_5) <= (((/* implicit */unsigned long long int) ((-1846562331) ^ (((/* implicit */int) (short)-1))))))))) != (var_1)));
    var_20 = ((/* implicit */short) (unsigned char)39);
}
