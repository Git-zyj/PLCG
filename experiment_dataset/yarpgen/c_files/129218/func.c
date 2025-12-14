/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129218
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            var_16 = ((/* implicit */unsigned char) (~(arr_3 [i_1 - 1])));
            var_17 = ((/* implicit */short) 882308425U);
        }
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            arr_10 [i_2] [0U] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 1732260604U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)228))) : (523412155U)))))));
            arr_11 [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(short)1]))) / (arr_6 [i_2])));
            var_18 = ((/* implicit */unsigned char) max((((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (arr_1 [i_0] [(unsigned char)15]))))))), (arr_0 [(short)21])));
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 3) 
            {
                arr_16 [i_0] [i_0] [i_2] = arr_5 [i_0] [i_0] [i_0];
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2])) ? (arr_3 [i_2]) : (arr_3 [i_3 + 1])))) ? (((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */unsigned long long int) 882308425U)) : (arr_3 [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_3 [i_3 + 3]))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned long long int i_4 = 3; i_4 < 23; i_4 += 2) /* same iter space */
                {
                    arr_20 [i_2] = ((/* implicit */unsigned int) arr_17 [i_3 - 1] [i_2] [i_3 + 1] [i_3 + 3]);
                    arr_21 [i_4] [i_3] [i_2] [i_2] [16U] [5U] = ((/* implicit */unsigned int) (short)-23434);
                    arr_22 [i_0] [i_3] [i_2] = ((/* implicit */short) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_19 [i_2])) : (14924211570265769573ULL)))));
                }
                for (unsigned long long int i_5 = 3; i_5 < 23; i_5 += 2) /* same iter space */
                {
                    arr_25 [i_2] [i_2] = ((/* implicit */unsigned int) ((short) arr_19 [i_2]));
                    var_20 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_23 [i_5 - 3] [i_5 + 1] [i_5 - 1] [i_5 + 1])) ? (arr_23 [i_5 - 2] [i_5 - 3] [i_5 + 1] [i_5 - 3]) : (arr_23 [i_5 - 1] [i_5 - 2] [i_5 - 1] [i_5 - 2]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_23 [i_5 - 1] [i_5 - 3] [i_5 + 1] [i_5 - 2])))))));
                }
                for (signed char i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    arr_29 [i_0] [i_2] [i_3] [i_2] = ((/* implicit */unsigned long long int) (-(arr_7 [i_2])));
                    var_21 = ((/* implicit */unsigned short) 11783091098839872159ULL);
                }
                for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    arr_32 [i_0] [i_0] [i_0] [i_2] = (+(((((/* implicit */_Bool) arr_12 [i_2])) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_7] [i_7] [i_2]))) : (arr_31 [i_0] [i_2] [2ULL] [i_2] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_14 [i_2] [i_3] [i_7]) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-37))))))))));
                    arr_33 [i_0] [i_2] [i_0] [i_2] [i_7] [i_0] = ((/* implicit */unsigned char) 1732260617U);
                    var_22 = var_12;
                }
            }
        }
        var_23 = ((/* implicit */unsigned long long int) ((unsigned char) min((((/* implicit */unsigned int) var_5)), (max((523412136U), (var_12))))));
    }
    /* vectorizable */
    for (unsigned char i_8 = 1; i_8 < 16; i_8 += 4) 
    {
        arr_38 [i_8] = ((/* implicit */unsigned long long int) arr_26 [(signed char)12] [i_8] [i_8 + 2]);
        arr_39 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)218)) ? (((/* implicit */unsigned long long int) var_14)) : (arr_31 [i_8] [i_8 + 4] [i_8] [(short)10] [i_8 - 1])));
    }
    var_24 = ((/* implicit */unsigned int) var_7);
}
