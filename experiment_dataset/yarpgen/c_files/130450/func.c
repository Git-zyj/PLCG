/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130450
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
    var_14 ^= ((/* implicit */_Bool) var_9);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        var_15 = ((/* implicit */int) var_4);
                        var_16 = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
                        arr_12 [i_3] [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */long long int) min((min((((/* implicit */int) var_7)), (((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) (_Bool)0)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)188)) ? (arr_3 [6] [i_1 - 2] [i_0]) : (((/* implicit */unsigned long long int) 2228812748U))))) ? ((~(((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 10; i_4 += 3) 
                    {
                        arr_15 [i_1] [i_1] [i_0] [i_1] [(unsigned char)0] [i_1] = ((/* implicit */unsigned long long int) arr_4 [i_0 + 1] [9U]);
                        arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-512))))) - (var_3)));
                        var_17 = ((/* implicit */unsigned char) (-(arr_3 [(short)1] [i_1 - 1] [i_2])));
                        var_18 = ((/* implicit */unsigned char) (~((-(524286U)))));
                    }
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((5629028185622447783LL), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_13 [i_0] [i_2] [i_5])), (var_3))))))) ? ((~(14886471103393042254ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_18 [i_0]))) ? (((arr_2 [i_0]) ? (arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (347299542))) : (((/* implicit */int) (unsigned char)250)))))));
                        var_20 ^= ((/* implicit */int) ((unsigned int) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (4047788026743966032LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 2228812748U)) ? (var_8) : (arr_19 [i_5] [(short)1] [i_5] [(short)8] [i_5] [i_5])))))));
                        var_21 = ((/* implicit */signed char) arr_8 [i_0 - 1] [i_0 + 1]);
                    }
                    var_22 = ((/* implicit */signed char) ((7) / (951151353)));
                }
                var_23 ^= ((/* implicit */long long int) ((((min((((/* implicit */unsigned long long int) -827951423)), (arr_3 [i_0 - 1] [i_0] [i_0 - 1]))) - (arr_17 [i_0 + 1] [i_1 - 2] [i_0] [(unsigned short)4] [i_0 + 1]))) % (min((((15534591666550256053ULL) | (arr_11 [i_0] [i_0] [7] [i_1]))), (((/* implicit */unsigned long long int) (signed char)-33))))));
                var_24 -= ((/* implicit */int) max((((/* implicit */short) arr_4 [i_0 + 1] [i_0 + 1])), (var_2)));
                var_25 *= ((/* implicit */_Bool) ((long long int) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_4)), (arr_18 [0LL])))), (var_1))));
                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [2U]))) : (var_11)))) ? (((((/* implicit */_Bool) (signed char)-33)) ? (((/* implicit */int) (unsigned short)14862)) : (((/* implicit */int) (unsigned char)33)))) : (((((arr_14 [0]) <= (arr_14 [(_Bool)1]))) ? (((/* implicit */int) arr_7 [4U] [i_1] [i_0 + 1] [4U])) : (((/* implicit */int) arr_2 [8])))))))));
            }
        } 
    } 
}
