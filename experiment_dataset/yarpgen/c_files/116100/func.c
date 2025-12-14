/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116100
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) /* same iter space */
    {
        arr_2 [(unsigned short)6] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_2)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-7770)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_6)))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) arr_1 [(signed char)5]);
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (-(((arr_0 [(unsigned char)3] [i_0]) ? (((/* implicit */int) arr_0 [i_0] [(_Bool)1])) : (((/* implicit */int) arr_0 [i_0] [i_0])))))))));
        var_15 = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_16 = ((/* implicit */unsigned short) arr_0 [(unsigned short)9] [(unsigned short)9]);
    }
    for (signed char i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */signed char) max((var_3), (((/* implicit */short) arr_1 [(unsigned short)12]))));
        var_18 = ((/* implicit */short) ((((/* implicit */int) arr_4 [12LL])) | (((/* implicit */int) var_3))));
        var_19 = ((/* implicit */long long int) (-(((/* implicit */int) max(((short)-7770), (((/* implicit */short) arr_4 [i_1])))))));
        /* LoopSeq 1 */
        for (short i_2 = 1; i_2 < 10; i_2 += 4) 
        {
            var_20 = ((/* implicit */_Bool) arr_1 [i_1]);
            arr_10 [i_2] = ((/* implicit */short) arr_6 [i_1]);
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) /* same iter space */
            {
                arr_15 [i_2] [(_Bool)1] [i_2] = ((/* implicit */unsigned long long int) (signed char)-19);
                var_21 = ((/* implicit */_Bool) var_0);
                var_22 = ((/* implicit */unsigned long long int) (short)7766);
            }
            for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) /* same iter space */
            {
                var_23 += ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7770))) : (var_13))) + (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_1 [6ULL])) + (2147483647))) >> (((arr_14 [i_1] [i_1]) - (15401657209470689443ULL)))))))) >= (((min((arr_7 [i_1] [(_Bool)0]), (((/* implicit */unsigned long long int) arr_12 [i_1] [i_2 + 3] [(unsigned short)10] [i_4])))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                var_24 = ((/* implicit */unsigned int) min((((((((/* implicit */int) (unsigned char)225)) ^ (((/* implicit */int) arr_4 [i_4])))) & (((/* implicit */int) arr_0 [i_1] [i_1])))), (((/* implicit */int) arr_0 [i_1] [i_1]))));
            }
            /* vectorizable */
            for (signed char i_5 = 1; i_5 < 12; i_5 += 2) 
            {
                var_25 = ((/* implicit */unsigned char) var_2);
                var_26 = ((/* implicit */signed char) var_8);
                var_27 = ((/* implicit */unsigned short) (short)7766);
                var_28 = ((/* implicit */short) arr_8 [i_2] [i_2]);
                arr_22 [i_2] [(signed char)2] [i_2 + 1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_2] [i_2])) * (((/* implicit */int) (signed char)-111))))) ? (((/* implicit */int) (short)7769)) : (var_0)));
            }
            var_29 = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned long long int) var_10)), (max((((/* implicit */unsigned long long int) var_1)), (var_9)))))));
        }
        arr_23 [3LL] = max((arr_20 [i_1] [(_Bool)1] [(_Bool)1]), (((/* implicit */short) ((((((/* implicit */_Bool) (short)-7779)) && (((/* implicit */_Bool) var_8)))) && (((/* implicit */_Bool) max((arr_5 [i_1]), (((/* implicit */unsigned int) var_5)))))))));
    }
    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_7 = 3; i_7 < 15; i_7 += 4) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_9 = 0; i_9 < 18; i_9 += 4) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_10 = 3; i_10 < 16; i_10 += 4) 
                        {
                            var_30 = ((/* implicit */long long int) ((((var_6) ? (arr_25 [i_9]) : (arr_25 [i_10]))) % (((/* implicit */unsigned int) (+(arr_36 [i_6]))))));
                            arr_37 [i_7] [i_7] [i_6] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1))))))));
                            var_31 = ((/* implicit */_Bool) var_12);
                        }
                        arr_38 [i_6] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */int) (short)7769)) / (((/* implicit */int) (signed char)-19))))) ? (max((((/* implicit */long long int) var_8)), (arr_35 [i_9] [i_6] [(short)3] [i_6] [i_6]))) : (((/* implicit */long long int) min((arr_36 [i_9]), (arr_36 [i_6])))))), (max((((((/* implicit */long long int) arr_25 [i_8])) / (arr_29 [11LL] [i_6] [i_8] [i_9]))), (((/* implicit */long long int) arr_28 [i_6] [i_9]))))));
                    }
                    arr_39 [i_6] [i_7] [i_6] [i_6] = ((/* implicit */unsigned short) (-((-(arr_25 [i_6])))));
                }
            } 
        } 
        var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) var_9))));
    }
    var_33 += ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned int) var_3))));
}
