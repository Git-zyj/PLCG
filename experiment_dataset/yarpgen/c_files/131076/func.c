/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131076
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            var_10 = ((/* implicit */long long int) max((var_10), (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_1])))))));
            /* LoopNest 2 */
            for (signed char i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    {
                        arr_12 [i_0] [i_0] [i_1] [11LL] = (~(((/* implicit */int) arr_3 [i_1])));
                        arr_13 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_3] [i_3] [i_1] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)2)))))) : (arr_11 [i_1] [i_2 + 1] [i_2] [i_1] [i_0] [i_1])));
                        var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [2ULL] [i_1] [i_2 + 1]))) > (((long long int) (_Bool)1)))))));
                        var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_0]))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                {
                    arr_21 [i_5] = ((/* implicit */unsigned long long int) arr_17 [i_5]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 4) 
                        {
                            {
                                var_13 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_7] [i_5] [i_6] [i_7] [i_7])) ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4]) : (arr_11 [i_0] [i_4] [i_4] [i_5] [i_4] [i_6])))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_7])) ? (arr_11 [i_0] [i_4] [i_4] [i_5] [i_6] [i_7]) : (arr_11 [i_0] [(signed char)2] [i_4] [i_5] [i_6] [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_11 [i_4] [i_7] [i_6] [i_5] [i_0] [i_4]))))));
                                var_14 *= ((/* implicit */signed char) (unsigned short)2755);
                                arr_27 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((2149584111064622772ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 1264413907U))))) < (4611686018427387904ULL))))) : (613474951762035006ULL)));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */short) ((_Bool) arr_9 [i_0] [i_4] [i_4] [i_5] [i_5]));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (int i_9 = 0; i_9 < 12; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 12; i_10 += 2) 
                    {
                        for (short i_11 = 2; i_11 < 8; i_11 += 2) 
                        {
                            {
                                var_16 *= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (-2147483647 - 1))), (arr_39 [i_10] [i_8] [i_9] [i_10] [i_11 + 3] [i_9] [i_11])))) ? ((-(((/* implicit */int) arr_0 [i_11])))) : (((/* implicit */int) arr_34 [i_10] [i_9] [i_10] [i_9]))))) < (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (12582912U)))));
                                var_17 *= ((/* implicit */unsigned char) 0LL);
                            }
                        } 
                    } 
                    arr_41 [1U] [i_9] [i_8] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_9] [i_0])) * (((/* implicit */int) (signed char)126))))), (((((/* implicit */_Bool) (signed char)36)) ? (0ULL) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))));
                    var_18 = ((((/* implicit */_Bool) arr_7 [i_8] [i_8] [i_8])) ? (min((arr_9 [i_0] [i_8] [i_8] [i_8] [i_8]), (arr_9 [i_0] [i_8] [i_8] [i_8] [i_8]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)4032)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_10 [i_9] [i_9] [i_8] [i_0]))))));
                    var_19 = ((/* implicit */signed char) ((3030553389U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [0U] [i_9] [i_9] [i_0])))));
                    var_20 ^= ((/* implicit */unsigned long long int) (unsigned short)50913);
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_12 = 0; i_12 < 18; i_12 += 4) 
    {
        arr_44 [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_43 [i_12])) | (((/* implicit */int) arr_43 [i_12]))))) ? (((/* implicit */int) arr_42 [(_Bool)1])) : (((((/* implicit */int) (signed char)73)) % ((-2147483647 - 1))))));
        var_21 = ((/* implicit */int) min((var_21), (((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) (signed char)-82)) : (((/* implicit */int) (_Bool)0))))));
        arr_45 [i_12] [i_12] = ((/* implicit */_Bool) ((((/* implicit */int) arr_42 [i_12])) * (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (signed char)10)))))));
        var_22 = arr_42 [i_12];
        arr_46 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)1984)) / (((/* implicit */int) arr_42 [i_12]))));
    }
    for (signed char i_13 = 0; i_13 < 17; i_13 += 2) 
    {
        arr_50 [i_13] [i_13] &= ((/* implicit */int) min(((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59108))) : (3030553388U))), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
        arr_51 [i_13] = ((/* implicit */signed char) arr_47 [i_13] [i_13]);
        arr_52 [i_13] [i_13] = var_1;
        arr_53 [i_13] &= ((/* implicit */unsigned long long int) (~(1152921504606846960LL)));
    }
    var_23 |= ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (min((0LL), (((/* implicit */long long int) var_1)))))));
}
