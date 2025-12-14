/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139204
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
    var_12 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (((!(var_10))) || (((/* implicit */_Bool) var_7))))) : ((~(-1319591657)))));
    var_13 |= ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) max((var_4), (var_4)))), (var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                            {
                                arr_14 [i_2] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 201304687U)) ? (arr_10 [i_0] [i_0 - 1]) : (min((((/* implicit */unsigned long long int) var_5)), (arr_10 [i_3] [i_3])))));
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [i_2 - 2])) ? (arr_10 [i_3] [i_2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (201304687U) : (4093662627U))))))) && (((/* implicit */_Bool) arr_3 [i_2]))));
                                var_14 ^= ((/* implicit */_Bool) 9223372036854775807LL);
                            }
                            var_15 = ((/* implicit */unsigned long long int) arr_4 [i_1] [i_1]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_5 = 1; i_5 < 15; i_5 += 2) 
                {
                    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (arr_21 [14U] [i_5 - 1] [i_5 - 1] [i_0 + 2] [i_0 + 2] [14U])))) ? (((/* implicit */int) ((arr_21 [12U] [i_5] [i_5 - 1] [i_5 + 1] [(_Bool)1] [12U]) != (arr_21 [(unsigned short)10] [(unsigned short)10] [i_5 - 1] [i_5] [i_5] [(unsigned short)10])))) : (min((((/* implicit */int) (unsigned short)4094)), (arr_21 [(signed char)8] [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 + 1] [(signed char)8]))))))));
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (((-(arr_19 [14U]))) - (min((arr_17 [i_1] [10ULL] [0LL]), (((/* implicit */int) (_Bool)1)))))))));
                            arr_22 [i_1] = ((/* implicit */unsigned int) ((14680064ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)49)))));
                            var_18 = ((/* implicit */unsigned short) var_6);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_7 = 1; i_7 < 12; i_7 += 4) 
                {
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 9223372036854775807LL)))) ? (arr_10 [i_0] [i_0 - 1]) : (((/* implicit */unsigned long long int) 201304687U)))))));
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) 4093662608U)) ? (var_5) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) > ((-9223372036854775807LL - 1LL))))))))));
                    arr_25 [i_7] [i_1] [i_1] [i_0 + 3] = ((/* implicit */short) var_10);
                }
                for (unsigned short i_8 = 1; i_8 < 15; i_8 += 3) 
                {
                    arr_29 [i_8] [4LL] [4LL] [i_0] |= ((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (-(((/* implicit */int) (short)32767))))) ? (((((/* implicit */int) arr_23 [3])) % (((/* implicit */int) var_8)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_8 + 1])) || (((/* implicit */_Bool) arr_7 [i_0] [2ULL] [10])))))))));
                    arr_30 [i_0] [i_0] [i_0 + 1] [i_1] = ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) (+(arr_0 [i_0])))) : (((((/* implicit */_Bool) var_0)) ? (arr_10 [i_0] [i_0]) : (arr_1 [i_8 - 1] [i_0]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) min((var_3), (((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_1] [i_0]))))) > (var_0))))));
                }
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 16; i_9 += 4) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8024346733772011031LL)) ? ((+(((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_9] [(unsigned char)8] [i_11])) ? (var_6) : (arr_0 [i_1])))))) ? (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) arr_33 [10U] [i_11] [i_9] [i_9])))))));
                                var_22 -= ((/* implicit */long long int) arr_2 [(_Bool)1] [(_Bool)1]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 |= ((/* implicit */unsigned char) var_5);
}
