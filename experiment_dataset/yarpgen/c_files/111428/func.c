/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111428
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) /* same iter space */
    {
        var_14 += ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)21007)) / (((/* implicit */int) (signed char)127))));
        var_15 = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                {
                    arr_13 [i_3] [(short)4] [i_1] = ((/* implicit */unsigned int) max((1882584692), (((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_1] [i_2])) ? (4308718822379071530ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21007))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2]))))))));
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) arr_10 [i_1] [3ULL]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_17 &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)186)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21007))) : (4294967295U))) * (((/* implicit */unsigned int) ((/* implicit */int) (((!(((/* implicit */_Bool) arr_14 [i_1] [i_4] [i_5])))) && (((/* implicit */_Bool) (unsigned short)44528))))))));
                    arr_21 [i_4] [i_4] = ((/* implicit */unsigned char) ((((_Bool) min((1205038721), (((/* implicit */int) arr_3 [i_1]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_4])) ? (arr_15 [(signed char)10]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_1] [i_4] [i_5])) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((/* implicit */int) (short)16730))))))))));
                }
            } 
        } 
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_8 [i_1])) ? (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1]))) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)40), (((/* implicit */unsigned char) var_12)))))))) > (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_1]))))))));
        var_19 = ((/* implicit */long long int) arr_8 [i_1]);
        var_20 = ((/* implicit */unsigned short) arr_16 [i_1] [i_1] [i_1]);
    }
    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 216172782113783808ULL))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_6]))) * (arr_16 [i_6] [i_6] [i_6]))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_17 [i_6] [i_6] [i_6])) ? (arr_19 [(_Bool)1] [i_6] [i_6]) : (arr_2 [i_6])))))))))));
        arr_25 [i_6] = ((/* implicit */_Bool) (+(min((min((((/* implicit */unsigned long long int) (short)25426)), (65535ULL))), (((/* implicit */unsigned long long int) max(((short)32767), (((/* implicit */short) arr_24 [i_6] [i_6])))))))));
        /* LoopSeq 1 */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_8 = 0; i_8 < 21; i_8 += 4) 
            {
                var_22 = ((/* implicit */_Bool) arr_14 [(_Bool)1] [i_7] [i_8]);
                var_23 *= ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_6] [4U] [(unsigned short)8]))));
            }
            for (unsigned short i_9 = 1; i_9 < 18; i_9 += 4) 
            {
                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) var_8))));
                var_25 = min((max((min((11540639042880221081ULL), (arr_6 [i_6]))), (((/* implicit */unsigned long long int) arr_18 [i_9] [i_7])))), (((/* implicit */unsigned long long int) arr_18 [i_9] [i_9])));
            }
            /* LoopSeq 1 */
            for (short i_10 = 0; i_10 < 21; i_10 += 2) 
            {
                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) max(((~(arr_30 [i_7 - 1] [i_7 - 1] [i_7 - 1]))), (((/* implicit */long long int) 169959728)))))));
                var_27 = ((/* implicit */unsigned short) 4294967295U);
            }
        }
    }
    var_28 |= ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (~(9223372036854775807LL)))) && ((!(var_7))))))) * (min((((/* implicit */unsigned int) var_13)), (var_1))));
}
