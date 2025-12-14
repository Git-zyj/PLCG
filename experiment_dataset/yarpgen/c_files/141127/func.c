/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141127
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
    var_20 = ((/* implicit */int) var_18);
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) > (var_3))))))) ? (var_11) : (((/* implicit */long long int) min((var_7), (((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned short) var_19))))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_10);
            var_22 = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) + (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))));
        }
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) /* same iter space */
        {
            var_23 += ((/* implicit */unsigned short) arr_5 [i_2] [i_0] [i_0]);
            var_24 = ((/* implicit */long long int) ((((/* implicit */long long int) (-(((/* implicit */int) min((((/* implicit */short) arr_7 [i_0])), (var_19))))))) < (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) * ((-9223372036854775807LL - 1LL))))));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                /* LoopSeq 3 */
                for (signed char i_4 = 2; i_4 < 13; i_4 += 3) 
                {
                    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) arr_13 [i_4] [i_4 + 2] [i_4 + 2] [i_4 + 3] [i_4 + 2] [i_4 - 2]))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        arr_16 [i_0] [i_0] [i_4] = ((/* implicit */short) arr_10 [i_5]);
                        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (+(((/* implicit */int) arr_13 [i_4 + 2] [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1] [i_4 + 1])))))));
                    }
                }
                for (unsigned short i_6 = 3; i_6 < 13; i_6 += 4) /* same iter space */
                {
                    arr_21 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) min((min((arr_11 [i_6 + 1] [i_6 - 2] [i_6 + 3] [i_6]), (arr_11 [i_0] [i_0] [i_6 - 3] [i_6 - 3]))), (arr_11 [i_6] [i_6] [i_6] [i_6])));
                    var_27 = ((/* implicit */short) ((unsigned short) ((arr_12 [i_6 + 1] [i_6 + 2] [i_6 - 1] [i_6] [i_6]) <= (((/* implicit */unsigned int) arr_11 [i_6 + 1] [i_6 + 3] [i_6 + 1] [i_6 + 1])))));
                    var_28 += ((/* implicit */short) arr_11 [i_2] [i_3] [i_2] [i_6 + 1]);
                }
                for (unsigned short i_7 = 3; i_7 < 13; i_7 += 4) /* same iter space */
                {
                    var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */int) var_13)) + (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_3 [i_2]))))) ? (((((/* implicit */_Bool) arr_23 [i_0] [i_2] [i_2] [i_7] [i_2] [i_7])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_0]))))) : ((-(var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
                    arr_25 [i_0] [i_7] [i_7] [i_0] [i_7] = ((/* implicit */unsigned short) var_7);
                }
                var_30 = ((/* implicit */short) arr_11 [i_0] [i_0] [i_0] [i_3]);
                /* LoopSeq 1 */
                for (short i_8 = 2; i_8 < 15; i_8 += 4) 
                {
                    arr_28 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_22 [i_2] [i_3]);
                    var_31 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_8 - 2] [i_8 - 1] [i_8 + 1] [i_8] [i_8]))) < (((unsigned int) var_7))))), (arr_20 [i_0] [i_0] [i_2] [i_3] [i_8 - 1])));
                }
            }
        }
        for (unsigned int i_9 = 0; i_9 < 16; i_9 += 2) /* same iter space */
        {
            var_32 = ((/* implicit */unsigned short) ((short) ((signed char) arr_8 [i_9] [i_0])));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_10 = 0; i_10 < 16; i_10 += 2) 
            {
                arr_33 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((((/* implicit */int) arr_14 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_0])) - (33897)))))) > (var_2)));
                var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_0] [i_9])) ? (((/* implicit */int) arr_17 [i_9])) : (((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_9] [i_10])))))));
                var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_10])) ? (arr_31 [i_10]) : (arr_31 [i_0])));
            }
            for (unsigned short i_11 = 4; i_11 < 14; i_11 += 1) 
            {
                var_35 = ((/* implicit */unsigned char) arr_12 [i_11 - 4] [i_11] [i_11 + 1] [i_0] [i_0]);
                var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) var_10))));
            }
        }
        var_37 = ((/* implicit */short) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    var_38 = min((var_8), (((/* implicit */unsigned short) ((short) var_14))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_12 = 0; i_12 < 17; i_12 += 4) 
    {
        var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_12]))))))))));
        var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) (-(((/* implicit */int) arr_38 [i_12])))))));
    }
}
