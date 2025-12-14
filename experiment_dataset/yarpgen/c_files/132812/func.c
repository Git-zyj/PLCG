/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132812
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
    var_18 = 2902036771473739261ULL;
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 11; i_3 += 3) 
                    {
                        for (int i_4 = 2; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1553111202))))), (((((/* implicit */_Bool) ((long long int) -2039490886))) ? (((/* implicit */unsigned int) ((1553111201) << (((((/* implicit */int) arr_8 [i_0] [i_1] [i_3 - 2] [i_3 - 2] [i_4 - 2])) - (28646)))))) : (((((/* implicit */_Bool) 1553111202)) ? (arr_0 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
                                arr_14 [i_1] [i_1] [i_2] [i_3] [i_1] [i_1] = ((/* implicit */unsigned short) (~(1553111202)));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (min((((/* implicit */int) ((short) -949436957))), (((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_7)))))) : ((~(((/* implicit */int) arr_2 [i_2 - 1] [i_2 + 1])))))))));
                    arr_15 [i_0] [i_1] [i_2 - 1] [i_0] = arr_1 [i_2];
                    var_21 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */unsigned int) 1553111213)) <= (1378345449U))) ? (((/* implicit */long long int) max((-1553111202), (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (unsigned short)59184)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (0LL))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */unsigned long long int) 2053432001)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 11115572871538048736ULL)) && (((/* implicit */_Bool) arr_17 [i_0] [i_0] [4] [2ULL] [i_0])))))))))));
                        arr_18 [(unsigned char)3] [(unsigned char)3] [i_1] = ((/* implicit */unsigned short) (short)7416);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 14; i_6 += 3) /* same iter space */
                        {
                            var_23 |= ((/* implicit */signed char) (-(((/* implicit */int) arr_2 [i_2 + 1] [i_2 + 1]))));
                            arr_22 [i_1] [i_2 + 1] [i_1] [i_1] = ((/* implicit */short) arr_6 [4] [i_1] [(unsigned short)10] [(_Bool)1] [i_6]);
                        }
                        for (signed char i_7 = 0; i_7 < 14; i_7 += 3) /* same iter space */
                        {
                            var_24 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (var_12)))) ? (min((var_3), (arr_12 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [i_0]))) : (((/* implicit */int) arr_4 [i_1]))))) | (min((min((6446755718462633795ULL), (((/* implicit */unsigned long long int) arr_19 [i_0] [i_1] [(unsigned char)5] [i_5] [i_7] [i_2 - 1])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) & (((/* implicit */int) (signed char)-105)))))))));
                            arr_26 [i_1] [i_1] [i_2 + 1] = ((/* implicit */unsigned short) -949436962);
                        }
                        var_25 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned char) 2916621825U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9290)) ? (13258162924309622444ULL) : (((/* implicit */unsigned long long int) 0LL))))))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) (~(949436957)))) : (arr_6 [(unsigned short)13] [(unsigned short)4] [i_2 + 1] [i_5] [(_Bool)1])))));
                    }
                }
            } 
        } 
    } 
}
