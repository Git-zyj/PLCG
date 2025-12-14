/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170212
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) - (var_11)))));
        var_14 ^= ((((/* implicit */int) arr_0 [4LL])) > (((/* implicit */int) arr_0 [6])));
    }
    var_15 = (((((+(var_5))) > (((/* implicit */unsigned long long int) ((unsigned int) var_5))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))), ((~(var_5))))) : (var_5));
    var_16 = ((/* implicit */unsigned long long int) ((var_7) ? (((/* implicit */long long int) (~(((/* implicit */int) ((signed char) var_10)))))) : (((((/* implicit */_Bool) 2274081734545802396LL)) ? (-1148378290271705773LL) : (4194303LL)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 3) 
    {
        arr_6 [8ULL] |= ((/* implicit */unsigned char) arr_3 [i_1]);
        var_17 -= ((/* implicit */short) ((unsigned long long int) (+(arr_3 [i_1 + 2]))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                {
                    var_18 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_3 [i_1 + 2])) ? (arr_3 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 + 2] [i_1 - 1]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)20577))) / (17730765918241861759ULL)))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_4 = 2; i_4 < 12; i_4 += 1) 
                    {
                        arr_14 [i_1] [i_2] [i_1] [i_4 + 4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_4 + 1] [i_4] [i_4 + 4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (var_0))))) : (((arr_9 [i_1] [i_1]) ? (var_11) : (arr_5 [i_1])))));
                        arr_15 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)0))))));
                        /* LoopSeq 4 */
                        for (long long int i_5 = 1; i_5 < 14; i_5 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) arr_9 [i_1] [i_1]);
                            var_20 = ((((((/* implicit */_Bool) 4194307LL)) ? (2757569123592019140LL) : (((/* implicit */long long int) 1495792253)))) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                            arr_18 [9U] [9U] [i_1] = ((/* implicit */unsigned int) (~(arr_12 [i_1 + 2] [i_1 + 2] [i_4 + 3] [i_5 + 2])));
                            var_21 ^= ((/* implicit */unsigned short) ((arr_17 [i_3] [i_3] [i_5 - 1] [i_4 + 2] [(unsigned char)6] [i_5 - 1]) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)23285)) != (((/* implicit */int) (_Bool)1))))))));
                        }
                        for (long long int i_6 = 4; i_6 < 14; i_6 += 3) 
                        {
                            var_22 += ((((/* implicit */_Bool) var_10)) ? (((715978155467689856ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))));
                            arr_23 [i_1] [i_1] [i_3] [i_3] [i_3] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-1513)) >= (((/* implicit */int) (unsigned char)1))));
                        }
                        for (unsigned char i_7 = 1; i_7 < 15; i_7 += 3) 
                        {
                            var_23 ^= ((/* implicit */long long int) arr_16 [i_1] [i_2] [i_1]);
                            var_24 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_1] [i_7 + 1] [i_7 + 1])) ^ (((/* implicit */int) arr_16 [i_1] [i_7 - 1] [i_3]))));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_5)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_9 [i_3] [i_1])) : (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_13 [i_1] [i_1 + 1] [i_4 + 2] [i_7 - 1]))));
                            arr_26 [i_1] [i_1] [3U] [i_4] [i_7] = ((/* implicit */long long int) arr_25 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1] [i_7]);
                        }
                        for (unsigned long long int i_8 = 4; i_8 < 13; i_8 += 4) 
                        {
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_8 - 3])) ? (((((/* implicit */_Bool) arr_21 [i_1 - 1] [i_2] [i_1] [i_1] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_2))) : (var_5)));
                            arr_30 [i_2] [i_4] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((arr_3 [i_1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_3])))));
                        }
                        var_27 = ((/* implicit */int) ((arr_10 [i_1] [i_3] [i_1]) >= (arr_10 [i_1] [i_2] [i_3])));
                        arr_31 [i_2] [i_1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_4 - 1] [i_3] [i_1 + 2] [i_1 + 2])) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) -1495792254)) : (arr_19 [i_1] [i_1] [i_2] [i_1] [i_1] [i_3] [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_9 = 0; i_9 < 16; i_9 += 2) 
                    {
                        arr_34 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) (~(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (-2199023255552LL) : (-2220650161613933140LL)))));
                        var_28 = ((/* implicit */unsigned int) ((unsigned char) var_4));
                    }
                    var_29 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_28 [i_2] [i_2])), (((((/* implicit */_Bool) max((((/* implicit */int) var_3)), (arr_33 [i_1] [i_2])))) ? (((((/* implicit */_Bool) arr_19 [i_1] [i_2] [i_2] [i_2] [i_3] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_1] [i_2] [i_3]))) : (arr_19 [i_3] [i_1] [i_2] [i_2] [(_Bool)1] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_21 [i_1] [i_1] [i_2] [i_2] [i_1]) <= (((/* implicit */int) var_6))))))))));
                    arr_35 [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) (((_Bool)0) ? (min((((/* implicit */unsigned long long int) -5941018812143531672LL)), (3360826185164791259ULL))) : (((/* implicit */unsigned long long int) -1960061241))));
                }
            } 
        } 
        arr_36 [i_1] [i_1] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1] [i_1 + 2])) ? (((/* implicit */int) arr_17 [(unsigned char)5] [(short)7] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_16 [i_1] [i_1] [i_1]))))), (((((/* implicit */_Bool) arr_28 [i_1] [i_1])) ? (var_11) : (((/* implicit */unsigned long long int) arr_7 [i_1] [0])))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_13 [i_1] [2ULL] [i_1 - 2] [i_1]), (arr_13 [i_1] [i_1] [i_1 + 2] [(_Bool)1])))))));
    }
}
