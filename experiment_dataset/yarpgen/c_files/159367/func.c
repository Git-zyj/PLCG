/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159367
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
    var_17 += ((/* implicit */unsigned int) max((var_1), (var_14)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        var_18 = ((/* implicit */short) arr_1 [(short)17]);
        var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_1)) && (var_8))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */int) var_8))))) : ((-(-4053707190547824451LL)))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_20 += ((/* implicit */short) ((((var_11) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) <= (((/* implicit */unsigned int) (~(((/* implicit */int) var_15)))))));
        var_21 = ((/* implicit */unsigned int) var_5);
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2097151LL)) ? (((/* implicit */int) (short)-15985)) : (((/* implicit */int) (unsigned short)65523))));
    }
    for (unsigned int i_2 = 3; i_2 < 20; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            for (long long int i_4 = 3; i_4 < 22; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) var_15);
                                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_11 [i_2] [i_2 - 1] [i_4 + 1] [i_5]) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) arr_16 [i_3] [(signed char)21] [(unsigned short)1]))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((((/* implicit */_Bool) arr_16 [(short)4] [(signed char)16] [i_4])) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) + (arr_11 [14LL] [(short)18] [i_2 + 1] [i_2 - 3])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        for (long long int i_8 = 0; i_8 < 23; i_8 += 1) 
                        {
                            {
                                var_25 += ((/* implicit */unsigned short) arr_11 [2LL] [(signed char)3] [i_4] [i_8]);
                                var_26 += ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65523)) >> (((((/* implicit */int) (signed char)-122)) + (129)))))), (min((((/* implicit */long long int) (signed char)-113)), (-2097151LL)))));
                                var_27 = ((/* implicit */_Bool) arr_23 [6U] [(unsigned short)4] [i_4] [i_7] [i_8] [7LL] [(unsigned short)3]);
                                var_28 = ((/* implicit */unsigned char) var_4);
                                arr_25 [i_2] [i_2] [i_3] [i_3] [i_4] [21U] [i_8] = ((/* implicit */long long int) ((signed char) max((((/* implicit */unsigned int) (signed char)84)), (4294967292U))));
                            }
                        } 
                    } 
                    arr_26 [(short)20] [(short)14] [i_4] &= ((/* implicit */unsigned int) ((long long int) var_5));
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 2; i_9 < 21; i_9 += 4) 
                    {
                        for (int i_10 = 0; i_10 < 23; i_10 += 2) 
                        {
                            {
                                var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_15))));
                                var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) - (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((unsigned int) arr_29 [i_10] [i_4 - 2] [i_4 - 3] [(unsigned short)4] [22U])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_9])))))) ? (((/* implicit */long long int) min((arr_5 [i_2 + 1]), (max((var_12), (var_16)))))) : (((((/* implicit */long long int) ((/* implicit */int) var_6))) % (arr_29 [i_9] [22U] [i_9 + 1] [i_9 - 1] [(signed char)6]))))))));
                                arr_31 [6LL] [i_3] [i_3] [(signed char)2] [15U] = ((/* implicit */signed char) ((_Bool) (~(((/* implicit */int) var_14)))));
                            }
                        } 
                    } 
                    arr_32 [i_3] [i_3] [(unsigned short)20] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) ^ (((/* implicit */long long int) 2475541701U))))) ? (((/* implicit */int) arr_20 [i_3])) : ((~(((/* implicit */int) arr_28 [i_2 - 1] [i_3] [i_4] [i_4] [i_4 - 3]))))));
                }
            } 
        } 
        var_31 += ((/* implicit */unsigned int) var_7);
        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) min((((((/* implicit */int) arr_6 [i_2])) % (((/* implicit */int) arr_6 [i_2 - 1])))), (((/* implicit */int) ((_Bool) (signed char)-104))))))));
        arr_33 [i_2 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        arr_34 [i_2 + 1] [(signed char)18] = ((/* implicit */signed char) var_10);
    }
    var_33 = ((/* implicit */signed char) min((((((/* implicit */int) var_3)) + (((/* implicit */int) var_13)))), (((/* implicit */int) min((((/* implicit */unsigned short) (short)-13968)), ((unsigned short)19643))))));
}
