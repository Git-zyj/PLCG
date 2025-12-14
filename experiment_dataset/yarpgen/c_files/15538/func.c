/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15538
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
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        arr_2 [1] = ((_Bool) min((((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) * (5119261716238233947ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_0 [i_0] [i_0])) & (2494949463U))))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) arr_4 [i_0 + 2] [i_0 + 2]))));
            /* LoopSeq 3 */
            for (int i_2 = 3; i_2 < 21; i_2 += 3) 
            {
                arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_4 [i_2 + 3] [i_2])) ? (arr_4 [i_2 - 3] [(_Bool)1]) : (((/* implicit */unsigned int) var_5))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    var_18 = ((/* implicit */short) ((max((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)61043))))), (max((503342710U), (var_4))))) != (((/* implicit */unsigned int) (~(((/* implicit */int) var_16)))))));
                    arr_11 [i_0 - 1] [i_2] |= ((/* implicit */unsigned int) ((int) (~(((/* implicit */int) arr_5 [i_0 - 2] [i_2 + 3] [i_3])))));
                    arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) (~(((((-1661178530) + (2147483647))) << (((arr_3 [i_0 - 1] [i_1] [i_3]) - (3898887259U)))))));
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((long long int) (+(arr_6 [i_0 - 2])))))));
                }
                arr_13 [i_2 + 1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_6)), (((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_11)) : (var_13))) * (((/* implicit */int) (signed char)-78))))));
                var_20 *= ((/* implicit */signed char) ((((1767869236U) - (((2739733607U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)58))))))) + (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
            }
            /* vectorizable */
            for (short i_4 = 2; i_4 < 22; i_4 += 1) /* same iter space */
            {
                var_21 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_0 - 2])) ? (arr_4 [i_0 + 1] [i_4 - 1]) : (((/* implicit */unsigned int) ((var_11) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11)))))));
                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) var_9))));
            }
            for (short i_5 = 2; i_5 < 22; i_5 += 1) /* same iter space */
            {
                arr_19 [i_0] [(_Bool)1] [i_5] [(unsigned short)2] = ((/* implicit */short) arr_15 [i_1]);
                arr_20 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_5] &= ((/* implicit */_Bool) arr_0 [i_0 - 1] [i_5 + 1]);
                arr_21 [i_0] [i_1] [i_1] [i_5] |= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((arr_10 [i_0] [i_0 + 2] [i_0] [i_5 + 1]), (((/* implicit */unsigned int) var_11))))), (max((arr_17 [1U] [1U] [1U]), (((/* implicit */unsigned long long int) var_8))))));
                var_23 = ((/* implicit */int) (~(arr_10 [i_0 - 2] [i_0 - 2] [i_5 - 1] [i_5 + 1])));
            }
        }
        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            arr_25 [10LL] [i_0] [i_0] |= ((/* implicit */signed char) arr_1 [i_0 - 2]);
            var_24 = ((/* implicit */_Bool) (-(var_1)));
        }
        arr_26 [i_0 + 2] = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [(_Bool)0] [i_0 + 1] [i_0 + 1]))))), (min((((/* implicit */int) (!(var_10)))), ((~(((/* implicit */int) (signed char)77))))))));
        var_25 = ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_24 [i_0 - 2]), (arr_24 [i_0 - 2]))))) != ((~(arr_7 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1]))));
    }
    for (signed char i_7 = 3; i_7 < 8; i_7 += 4) /* same iter space */
    {
        arr_31 [i_7] [i_7] = ((/* implicit */int) (signed char)-58);
        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (-(((unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_16 [i_7] [i_7] [15U])) : (var_12)))))))));
        var_27 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3656915815U))));
    }
    for (signed char i_8 = 3; i_8 < 8; i_8 += 4) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_34 [i_8] [i_8 + 1])) ? (var_1) : (((/* implicit */long long int) arr_0 [i_8 + 2] [i_8 + 1]))))));
        var_29 |= ((((/* implicit */int) var_7)) <= (min(((+(((/* implicit */int) arr_27 [i_8])))), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-58)) && (((/* implicit */_Bool) arr_27 [i_8]))))))));
        var_30 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) arr_10 [i_8] [i_8 - 3] [i_8] [i_8])))));
        var_31 = ((/* implicit */int) min((var_31), (max((((/* implicit */int) arr_15 [i_8 + 3])), (min((((((/* implicit */int) (unsigned char)196)) | (((/* implicit */int) var_2)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_23 [i_8])) : (((/* implicit */int) (short)22912))))))))));
    }
    var_32 = var_0;
}
