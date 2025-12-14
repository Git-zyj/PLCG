/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107582
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)46125)))))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_20 = var_1;
                        arr_11 [i_2] [1ULL] [(unsigned char)4] [i_3] = ((/* implicit */short) var_17);
                    }
                    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((((((/* implicit */_Bool) arr_13 [i_0] [i_0])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) - (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [(_Bool)1] [i_4] [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                        /* LoopSeq 2 */
                        for (long long int i_5 = 2; i_5 < 17; i_5 += 4) 
                        {
                            arr_16 [i_0] [i_0] [i_0] [i_2] [i_0] = ((((/* implicit */_Bool) max((((/* implicit */long long int) -2147483644)), (-11LL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((long long int) var_15)) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_10 [(unsigned char)9] [(unsigned char)9] [i_2])))))) : (((/* implicit */long long int) ((min((arr_6 [i_4] [i_2] [i_0]), (var_4))) + (((/* implicit */unsigned int) 2147483644))))));
                            var_22 = ((/* implicit */_Bool) (-((~(max((908147238U), (((/* implicit */unsigned int) arr_5 [3ULL] [i_2]))))))));
                            arr_17 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_5 [i_1 + 3] [i_2]);
                        }
                        for (unsigned short i_6 = 3; i_6 < 18; i_6 += 1) 
                        {
                            arr_20 [i_0] [i_0] [i_2] [i_0] [i_0] = ((var_13) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_19 [i_4] [i_0] [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))))) ? (((((/* implicit */int) var_2)) - (((/* implicit */int) var_8)))) : (((/* implicit */int) min((arr_8 [i_0] [i_1] [i_2] [i_4]), (((/* implicit */unsigned char) (_Bool)1)))))))) : (var_4));
                            arr_21 [i_0] [i_1] [i_2] [i_4] [i_2] = min((arr_14 [i_0] [i_1] [i_2] [i_4] [i_6 - 2] [i_2]), (((arr_14 [i_0] [i_1] [i_2] [i_4] [i_6 - 2] [i_6]) / (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_6 - 2] [i_6 - 2]))))));
                            var_23 -= ((/* implicit */signed char) ((((/* implicit */long long int) (~(((/* implicit */int) var_0))))) | (((((/* implicit */_Bool) min((arr_14 [i_0] [i_1] [i_2] [i_4] [i_6] [i_2]), (arr_13 [i_0] [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -1733120151142424529LL)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)0))))) : ((~((-9223372036854775807LL - 1LL))))))));
                            arr_22 [i_2] [i_1 + 2] [i_1] = ((/* implicit */_Bool) min((((/* implicit */int) (signed char)-2)), (((((/* implicit */_Bool) (short)-31095)) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)75)), (arr_2 [(_Bool)1])))) : (((((/* implicit */_Bool) (short)-31095)) ? (((/* implicit */int) arr_4 [5LL] [i_1 - 2])) : (((/* implicit */int) (_Bool)0))))))));
                            arr_23 [i_2] [i_2] [i_2] [(unsigned char)13] [i_6] [16ULL] [16ULL] = ((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_16))))), (arr_12 [i_2] [i_4] [i_2] [i_1] [i_0])));
                        }
                    }
                    for (signed char i_7 = 4; i_7 < 17; i_7 += 4) 
                    {
                        arr_26 [i_7] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(93839641130669890LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) & (((/* implicit */int) arr_5 [i_2] [i_1]))))) : (((var_13) ? (arr_6 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))));
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) min((((arr_1 [i_1 - 2] [i_1 - 3]) ? (((/* implicit */int) arr_1 [i_1 - 2] [i_1 - 3])) : (((/* implicit */int) arr_1 [i_1 - 2] [i_1 - 3])))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_1 - 2] [i_1 - 3])), ((unsigned short)4095)))))))));
                        arr_27 [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_25 [i_7] [i_2] [i_1 + 3] [(unsigned short)15] [(unsigned short)15]) + (var_4)))) ? (((((/* implicit */_Bool) 9111517714181809031ULL)) ? (((/* implicit */int) (unsigned short)4)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((var_3) < (((/* implicit */long long int) arr_25 [i_0] [i_1 - 3] [(unsigned short)10] [(signed char)10] [i_7])))))));
                        var_25 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) arr_10 [i_1 - 2] [i_7 - 3] [16ULL])), (((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_0])) + (((/* implicit */int) arr_1 [i_1] [i_1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [(unsigned short)4])) ? (((/* implicit */int) arr_5 [(_Bool)0] [i_2])) : (((/* implicit */int) var_5))))) : (((1130930003U) - (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
                    }
                    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_3)))) ? ((((-(arr_3 [(signed char)9] [i_1 - 2]))) / (((/* implicit */long long int) arr_25 [i_0] [i_0] [i_1] [i_2] [i_2])))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27314))))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */long long int) (+((~(((/* implicit */int) var_5))))));
    var_28 = ((/* implicit */unsigned short) var_4);
}
