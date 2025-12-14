/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161649
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
    var_15 = ((/* implicit */long long int) (!(var_14)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [2ULL] [i_0])) ? (arr_1 [i_0] [i_0]) : ((-(arr_1 [i_0] [i_0])))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_9 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0])))))));
                arr_10 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_8 [(unsigned char)8] [i_0] [i_1] [(unsigned char)8]);
            }
            for (unsigned int i_3 = 1; i_3 < 8; i_3 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    for (unsigned int i_5 = 3; i_5 < 9; i_5 += 3) 
                    {
                        {
                            arr_19 [i_0] [i_1] [i_0] [i_4] [i_5] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_3] [i_3 + 1]))))) : (((/* implicit */int) ((_Bool) arr_12 [i_3])))));
                            var_16 = ((/* implicit */signed char) var_11);
                        }
                    } 
                } 
                arr_20 [i_0] [(signed char)0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_3 - 1] [(_Bool)0] [i_3 + 2])) ? (arr_18 [i_0] [i_0] [i_3 - 1] [i_3 - 1] [5ULL]) : (arr_18 [i_1] [i_1] [i_3 + 1] [i_3 - 1] [i_1])));
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    for (signed char i_7 = 1; i_7 < 9; i_7 += 3) 
                    {
                        {
                            arr_25 [i_3 + 2] [(_Bool)1] [i_1] [i_3] [(unsigned char)8] [i_3 - 1] [(_Bool)1] &= ((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0]);
                            arr_26 [i_7] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_3] [i_3 + 2] [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_3])) ? (((/* implicit */unsigned long long int) arr_16 [i_3 - 1])) : (arr_17 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3] [i_3] [(_Bool)1])));
                        }
                    } 
                } 
                var_17 = ((/* implicit */signed char) ((long long int) var_2));
            }
            arr_27 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(var_6))))));
        }
        for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 1) 
        {
            arr_30 [i_0] = ((/* implicit */_Bool) var_3);
            arr_31 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [(_Bool)1] [i_8] [(_Bool)1]))) : (((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [(unsigned char)6] [i_8] [i_8] [i_8])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
            var_18 = ((/* implicit */unsigned long long int) var_4);
            arr_32 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [8LL] [(unsigned char)9] [i_0] [i_8])) ? (((/* implicit */int) arr_24 [i_0] [(unsigned char)6] [(_Bool)0] [(signed char)7])) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_28 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_4))));
        }
        /* LoopSeq 1 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_10 = 2; i_10 < 8; i_10 += 1) 
            {
                arr_37 [i_0] [(signed char)1] = ((/* implicit */_Bool) (~(((/* implicit */int) var_6))));
                var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)-13))))) ? ((-(arr_15 [i_0] [i_0] [(_Bool)0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))));
            }
            arr_38 [(unsigned char)5] [i_0] [(unsigned char)5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_33 [4LL] [i_0] [i_9])) : (((/* implicit */int) arr_29 [i_9] [9ULL]))));
            arr_39 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_13 [(_Bool)1] [(unsigned char)5] [(_Bool)1] [i_9])))) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) arr_29 [(unsigned char)5] [i_0]))));
            var_20 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [3ULL] [3ULL])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_14))))) : ((+(var_5)))));
            var_21 *= ((/* implicit */unsigned char) ((var_4) ? (((/* implicit */int) ((signed char) arr_21 [i_0] [i_0] [i_0] [(signed char)8]))) : (((/* implicit */int) var_6))));
        }
    }
    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((arr_40 [i_11]), (var_1))), (((((/* implicit */_Bool) arr_42 [i_11 + 1])) ? (arr_42 [i_11]) : (arr_42 [10ULL])))))) ? ((~(((/* implicit */int) ((unsigned char) var_11))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_40 [i_11])))))))));
        arr_43 [i_11 + 1] = ((/* implicit */unsigned long long int) ((unsigned char) min((((((/* implicit */_Bool) arr_40 [i_11 + 1])) ? (arr_42 [i_11 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) min((((/* implicit */signed char) var_6)), (var_7)))))));
        var_23 = ((/* implicit */_Bool) max((min((((unsigned long long int) var_1)), (arr_42 [i_11 + 1]))), (((unsigned long long int) (+(((/* implicit */int) var_9)))))));
    }
    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) /* same iter space */
    {
        arr_46 [3U] = ((/* implicit */unsigned char) arr_40 [i_12 + 1]);
        var_24 = ((/* implicit */unsigned char) max(((~(min((17532265115497765769ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))), (var_0)));
    }
}
