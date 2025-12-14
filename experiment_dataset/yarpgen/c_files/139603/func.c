/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139603
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
    var_12 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((((/* implicit */int) min(((unsigned char)0), ((unsigned char)1)))) - (((/* implicit */int) var_1))))) : (var_10));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) var_2);
                var_13 = ((/* implicit */int) max(((signed char)-90), (((/* implicit */signed char) ((arr_2 [i_0]) == (((/* implicit */long long int) ((/* implicit */int) (signed char)-80))))))));
                var_14 = ((/* implicit */unsigned int) var_3);
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_1 [i_1 - 2] [i_1]), (arr_1 [i_1 + 1] [i_1])))) ? (max((var_4), (((/* implicit */long long int) arr_1 [i_1 + 2] [i_1 + 2])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1])) ? (((/* implicit */int) arr_1 [i_1 + 2] [i_1 + 2])) : (((/* implicit */int) arr_1 [i_1 + 2] [i_1])))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_2 = 1; i_2 < 24; i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */signed char) ((short) min((arr_9 [i_2 + 1]), (arr_9 [i_2 - 1]))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 4; i_3 < 24; i_3 += 2) 
        {
            for (unsigned int i_4 = 3; i_4 < 24; i_4 += 2) 
            {
                {
                    arr_16 [i_2] = ((((/* implicit */_Bool) ((var_11) ^ (arr_7 [i_2 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_7 [i_2 - 1]));
                    var_16 = ((/* implicit */short) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_8 [i_2 + 1]))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)21)), (var_10))))));
                }
            } 
        } 
        arr_17 [i_2 - 1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) arr_6 [i_2])), (var_3)))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) max((arr_13 [i_2]), (arr_13 [i_2]))))));
    }
    for (short i_5 = 1; i_5 < 24; i_5 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            var_17 = ((/* implicit */_Bool) (signed char)-107);
            arr_22 [i_5] [i_5 - 1] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)59600)) ? (((((/* implicit */_Bool) arr_19 [i_5 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_5 - 1]))) : (var_11))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)6600)), (((((/* implicit */_Bool) (unsigned char)60)) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) arr_20 [i_6] [i_5])))))))));
            var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */_Bool) min((arr_11 [i_5 - 1] [i_5] [i_5 + 1]), (arr_11 [i_5 - 1] [i_5] [i_5 + 1])))) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) max((arr_11 [i_5 - 1] [i_5 - 1] [i_5 + 1]), (var_3))))))));
        }
        for (signed char i_7 = 1; i_7 < 24; i_7 += 1) 
        {
            var_19 |= ((/* implicit */short) min((arr_8 [i_5 - 1]), (((/* implicit */unsigned long long int) ((unsigned short) (~(((/* implicit */int) (unsigned short)49453))))))));
            arr_25 [i_5 - 1] [i_5] [i_7] = ((/* implicit */unsigned int) min((((/* implicit */short) var_9)), (var_6)));
            arr_26 [(short)6] [(unsigned short)21] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)158)) * (((/* implicit */int) (unsigned char)21))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) (signed char)-92))))) : (((/* implicit */int) (signed char)50))));
        }
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 25; i_8 += 2) 
        {
            for (int i_9 = 0; i_9 < 25; i_9 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)46)) >> (((max((((((/* implicit */int) (unsigned char)125)) * (((/* implicit */int) (unsigned char)223)))), (((/* implicit */int) (signed char)-93)))) - (27860)))));
                    var_21 = ((/* implicit */signed char) min((((/* implicit */short) max(((unsigned char)206), (((/* implicit */unsigned char) (signed char)-109))))), (arr_11 [i_5 - 1] [i_8] [5LL])));
                    /* LoopNest 2 */
                    for (short i_10 = 1; i_10 < 24; i_10 += 4) 
                    {
                        for (int i_11 = 0; i_11 < 25; i_11 += 4) 
                        {
                            {
                                arr_38 [i_5 - 1] [i_5] [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_10] [i_5] = ((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) (short)7472)))));
                                var_22 = ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_24 [i_5 - 1] [i_5 - 1]), (arr_24 [i_8] [i_10 - 1]))))) * (((((/* implicit */_Bool) arr_24 [i_5 + 1] [i_5 + 1])) ? (9046663019251417143ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_5 - 1] [i_5 + 1]))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */int) arr_30 [i_5] [11ULL] [i_5] [i_5])) % (((/* implicit */int) min((var_6), (((/* implicit */short) (unsigned char)206))))))))));
                }
            } 
        } 
        var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)1296), (arr_30 [i_5] [i_5 + 1] [i_5 - 1] [i_5])))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-124)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) (unsigned char)128))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (max((var_10), (((/* implicit */long long int) var_3))))));
    }
    for (short i_12 = 1; i_12 < 24; i_12 += 1) /* same iter space */
    {
        var_25 = min((var_5), (min((arr_15 [i_12 - 1] [i_12 - 1] [i_12 + 1] [i_12 - 1]), (arr_15 [i_12 - 1] [i_12 - 1] [i_12 + 1] [i_12 - 1]))));
        arr_41 [i_12] = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)187))) ^ (535822336U));
        arr_42 [i_12] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)8926)), ((-(((/* implicit */int) (unsigned char)98))))));
        var_26 = ((/* implicit */short) var_4);
    }
}
