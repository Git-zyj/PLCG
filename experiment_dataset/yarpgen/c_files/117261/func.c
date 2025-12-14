/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117261
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) 199887444))))), (var_16)))) ? (((/* implicit */unsigned long long int) var_10)) : (max((var_6), (((/* implicit */unsigned long long int) (((_Bool)1) || (((/* implicit */_Bool) var_6)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_20 *= ((/* implicit */unsigned int) (+(max((((/* implicit */int) (_Bool)1)), ((+(-2076298353)))))));
                        var_21 = ((/* implicit */int) min(((+(arr_6 [i_0] [10ULL] [i_1] [10ULL]))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)2205)) * (((/* implicit */int) var_9)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_4 = 1; i_4 < 11; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_7 = 0; i_7 < 12; i_7 += 4) /* same iter space */
                        {
                            var_22 ^= ((/* implicit */short) ((arr_19 [i_7]) - (var_18)));
                            var_23 = ((/* implicit */unsigned long long int) ((unsigned int) var_13));
                            var_24 = ((/* implicit */short) var_0);
                            arr_22 [i_7] [i_4] [i_5] [i_4] [i_0] = ((/* implicit */unsigned int) ((unsigned short) 560195407U));
                        }
                        for (signed char i_8 = 0; i_8 < 12; i_8 += 4) /* same iter space */
                        {
                            arr_26 [i_4] = ((/* implicit */unsigned char) arr_14 [i_4]);
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) 2076298340))));
                        }
                        for (signed char i_9 = 0; i_9 < 12; i_9 += 4) /* same iter space */
                        {
                            var_26 -= ((/* implicit */unsigned char) ((signed char) ((((((/* implicit */_Bool) 10ULL)) && (((/* implicit */_Bool) -2076298353)))) ? (((((/* implicit */_Bool) arr_8 [i_0] [(short)0] [i_5])) ? (9223372036854775795LL) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_4] [i_0]))))) : (((arr_28 [i_6] [i_6] [i_6] [i_0] [i_4]) >> (((arr_1 [i_0]) - (7430733262125068506LL))))))));
                            arr_29 [i_0] [i_0] [i_4] [i_6] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_1) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))))) + (9223372036854775778LL)));
                        }
                        /* LoopSeq 4 */
                        for (int i_10 = 0; i_10 < 12; i_10 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned char) max((arr_2 [i_4] [10U]), (((/* implicit */unsigned long long int) arr_9 [i_4] [i_4] [i_6]))));
                            var_28 = ((/* implicit */unsigned int) 638376911369795378ULL);
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 1) /* same iter space */
                        {
                            var_29 = ((((/* implicit */_Bool) arr_1 [i_0])) ? (((unsigned int) -9223372036854775788LL)) : (min((((/* implicit */unsigned int) (_Bool)1)), (min((((/* implicit */unsigned int) var_5)), (var_13))))));
                            var_30 = min((min((((/* implicit */unsigned int) arr_13 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 + 1])), (1870747906U))), (((unsigned int) arr_13 [i_4 - 1] [i_4] [i_4] [i_4 + 1])));
                            var_31 = ((/* implicit */unsigned int) (~(max((((/* implicit */long long int) arr_8 [i_4 - 1] [i_4] [i_5])), (arr_33 [i_4 + 1] [(unsigned short)6] [i_4 + 1] [i_4] [i_0])))));
                            var_32 = ((/* implicit */unsigned int) ((signed char) ((((((/* implicit */_Bool) var_11)) ? (arr_4 [i_0] [i_0] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) != (1870747927U))))))));
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 1) /* same iter space */
                        {
                            var_33 = max((((/* implicit */unsigned long long int) min((9223372036854775795LL), (((/* implicit */long long int) ((short) var_15)))))), (((((/* implicit */_Bool) 10ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_6] [(signed char)2] [(unsigned char)11] [i_12] [i_12])))))) : (((unsigned long long int) var_18)))));
                            var_34 = (~(max(((~(arr_31 [(short)5] [i_5] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -120194452039850852LL)) ? (3684193651831623989LL) : (4382065267348859391LL)))))));
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 1) /* same iter space */
                        {
                            var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) ((short) ((((((/* implicit */_Bool) var_9)) ? (var_15) : (((/* implicit */int) (short)(-32767 - 1))))) <= (((/* implicit */int) var_11))))))));
                            arr_40 [6U] [(unsigned short)4] [i_4] [i_4] [i_6] [7U] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) ((unsigned long long int) arr_3 [i_0] [i_0] [(unsigned char)1]))))));
                        }
                    }
                } 
            } 
        } 
        var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_33 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_33 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_33 [i_0] [i_0] [i_0] [i_0] [i_0]))) > (max((arr_33 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_33 [11U] [(unsigned char)0] [i_0] [(short)8] [4]))))))));
    }
}
