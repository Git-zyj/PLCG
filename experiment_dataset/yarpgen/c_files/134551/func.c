/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134551
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
    var_19 &= ((/* implicit */short) 18446744073709551615ULL);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_20 = -325322092;
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            arr_4 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) ? (((325322086) / ((-2147483647 - 1)))) : (((/* implicit */int) var_14))));
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_1 + 2])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_1 - 1]))));
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (-325322097)))) ? ((+(((/* implicit */int) (unsigned char)193)))) : (((/* implicit */int) arr_2 [i_1] [i_0] [i_0]))));
        }
    }
    for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            arr_11 [i_2] [(short)10] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_15)))))) ? (arr_6 [i_2]) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_13)))))));
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_8 [(short)2] [(short)2] [i_2]), (var_15)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((unsigned char) 8033339419689294629LL))))))));
            arr_12 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_10 [4] [i_3] [i_3]), (arr_10 [i_3] [i_2] [i_2]))))));
            arr_13 [i_2] [i_2] [(unsigned short)13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_5)) / (((arr_6 [i_2]) >> (((((/* implicit */int) var_2)) - (2054)))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_8)))) : (((((/* implicit */int) (unsigned char)4)) >> (((((/* implicit */int) (unsigned char)179)) - (149)))))));
        }
        /* LoopSeq 1 */
        for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            arr_16 [3LL] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 9824617183777213256ULL)))) ? (arr_8 [i_2] [i_2] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_9 [i_2] [i_2]))))))) ? (((((/* implicit */_Bool) (+(325322091)))) ? (((((/* implicit */_Bool) (unsigned char)193)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2] [i_2] [i_2]))) : (arr_6 [2U]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))));
            arr_17 [i_2] [15U] = ((/* implicit */_Bool) arr_15 [8] [i_2] [i_2]);
            var_23 *= ((/* implicit */unsigned long long int) (-(max((arr_6 [i_2]), (arr_6 [i_2])))));
            arr_18 [(short)9] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_14 [i_4] [i_4] [i_2]))))))), (max((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) - (((/* implicit */int) (_Bool)1))))), (((arr_8 [i_4] [i_4] [i_4]) | (arr_6 [i_2])))))));
        }
        arr_19 [i_2] = ((/* implicit */unsigned char) ((-325322087) / (((/* implicit */int) (short)12525))));
        var_24 -= ((unsigned int) ((arr_9 [i_2] [i_2]) ^ (((/* implicit */long long int) arr_6 [i_2]))));
        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-17476)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((int) 2772915449566831754LL)))))) : ((+(((/* implicit */int) (unsigned char)160))))));
    }
    var_26 = ((/* implicit */unsigned int) var_10);
}
