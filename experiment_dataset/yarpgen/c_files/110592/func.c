/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110592
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
    var_13 &= ((/* implicit */long long int) var_11);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (+(max(((-(arr_0 [(signed char)0]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)48))) != (9963834253131268878ULL))))))));
        arr_4 [i_0] = ((/* implicit */short) ((_Bool) ((_Bool) (_Bool)1)));
        var_14 = ((/* implicit */signed char) min(((+(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) arr_1 [i_0]))));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_2 = 1; i_2 < 10; i_2 += 1) 
        {
            var_15 = ((/* implicit */short) (_Bool)1);
            /* LoopSeq 2 */
            for (int i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        {
                            arr_15 [i_3] [i_3] [i_3] [i_4] [7LL] [7LL] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */int) max(((short)32767), (((/* implicit */short) (_Bool)1))))), (((((((/* implicit */_Bool) 2964584069U)) || ((_Bool)1))) ? (((/* implicit */int) ((unsigned short) arr_11 [i_4] [i_2] [i_3] [i_3] [i_5] [i_1]))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (14537692910586242423ULL))))))));
                            var_16 = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_12 [i_2 + 1] [i_2] [i_2] [(_Bool)1]))))));
                            var_17 -= ((/* implicit */long long int) (+(((/* implicit */int) (!((_Bool)1))))));
                        }
                    } 
                } 
                arr_16 [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_13 [i_1] [i_1] [i_3] [i_2] [i_1] [i_3]))) ? (arr_7 [i_1] [i_2 + 1]) : (((/* implicit */unsigned long long int) arr_13 [i_2 + 3] [i_2 + 3] [i_3] [i_1] [i_2 + 2] [i_3]))))) ? (arr_13 [i_3] [(signed char)2] [i_2] [(unsigned short)1] [(signed char)2] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)30828)))));
                var_18 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) arr_11 [i_2 + 2] [i_2] [i_2] [i_2 - 1] [i_2 + 1] [i_2])) >= (arr_13 [i_2 - 1] [i_2] [0ULL] [i_2] [i_2 + 2] [i_3])))) <= (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_10 [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_8 [i_2]))))))))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    for (long long int i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) arr_9 [i_6]);
                            arr_26 [i_7] = ((/* implicit */unsigned char) (+(min((((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)0))))))));
                            var_20 = ((((/* implicit */unsigned int) max(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0)))), ((~(((/* implicit */int) arr_9 [i_1]))))))) - ((~(arr_13 [i_1] [i_2] [i_6] [(unsigned short)4] [i_8] [i_7]))));
                        }
                    } 
                } 
                arr_27 [(unsigned char)8] [i_2] [i_6] = ((/* implicit */unsigned int) (!(max((arr_25 [i_1] [i_2] [7ULL]), (arr_25 [i_1] [i_2] [i_2 + 3])))));
                var_21 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) (+(arr_13 [i_1] [i_1] [i_1] [12U] [i_1] [(short)4])))), (((((/* implicit */_Bool) arr_7 [i_2] [i_1])) ? (arr_10 [i_1] [i_2] [i_2] [(_Bool)1]) : (((/* implicit */unsigned long long int) arr_21 [i_1] [i_1] [i_1] [i_1])))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_20 [i_6] [2ULL] [i_6] [i_6] [i_2 - 1] [i_2])))))));
                arr_28 [i_1] [i_2] = ((/* implicit */signed char) min(((-(arr_24 [i_2] [i_2 + 2] [i_2] [(unsigned char)8] [i_2]))), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_24 [i_2] [i_2 + 2] [i_2 + 2] [i_2] [(signed char)5]) : (arr_24 [i_2] [i_2 + 2] [i_2 + 2] [i_2] [i_2])))));
                arr_29 [i_1] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) ((((arr_6 [i_2 + 3] [i_2 - 1]) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) ((arr_24 [i_1] [i_1] [i_6] [i_6] [i_6]) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))))) % ((((!((_Bool)1))) ? (((/* implicit */int) (signed char)57)) : (((/* implicit */int) (unsigned char)255))))));
            }
            var_22 = ((/* implicit */unsigned char) min(((-(min((arr_19 [(unsigned char)0] [i_2]), (((/* implicit */unsigned int) arr_20 [i_2] [2ULL] [i_2] [i_1] [2ULL] [i_1])))))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_1] [i_2 + 3])))))));
        }
        for (int i_9 = 2; i_9 < 12; i_9 += 2) 
        {
            var_23 = ((/* implicit */long long int) ((unsigned short) 2520649266U));
            var_24 = ((/* implicit */signed char) (((-(((/* implicit */int) arr_25 [(unsigned char)5] [i_9 - 1] [i_9 + 1])))) & (((/* implicit */int) ((((arr_21 [i_1] [(signed char)5] [i_9] [i_9 + 1]) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)237))))) == (((/* implicit */long long int) arr_11 [i_9] [i_9] [i_9] [i_9 + 1] [i_9] [i_9 - 1])))))));
            var_25 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned int) arr_9 [i_9 + 1])), ((-(arr_19 [i_1] [i_9 - 1]))))) | (((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_14 [i_1] [i_1] [11U] [i_9] [i_9] [i_9])))))))));
        }
        arr_32 [i_1] = ((/* implicit */int) ((min((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned char)16)))), (((arr_20 [i_1] [(short)0] [i_1] [6LL] [i_1] [i_1]) >= (1065353216))))) ? ((((!(((/* implicit */_Bool) arr_20 [i_1] [(short)8] [i_1] [i_1] [i_1] [i_1])))) ? (18446744073709551606ULL) : (((/* implicit */unsigned long long int) min((arr_21 [i_1] [i_1] [i_1] [i_1]), (((/* implicit */long long int) -833902174))))))) : ((+(((((/* implicit */_Bool) 597571509)) ? (((/* implicit */unsigned long long int) arr_20 [i_1] [(_Bool)1] [i_1] [i_1] [i_1] [i_1])) : (2ULL)))))));
        var_26 += ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_1] [i_1] [0] [i_1] [10LL] [(signed char)0])))))));
        /* LoopNest 3 */
        for (unsigned long long int i_10 = 2; i_10 < 12; i_10 += 2) 
        {
            for (unsigned char i_11 = 0; i_11 < 13; i_11 += 1) 
            {
                for (int i_12 = 0; i_12 < 13; i_12 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            arr_42 [i_1] [i_11] [i_1] [i_10 - 2] [i_11] [i_12] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_19 [(unsigned short)2] [i_10]) | (arr_24 [i_1] [i_10] [i_11] [6ULL] [i_13])))) ? (((/* implicit */int) arr_6 [i_10 + 1] [i_10 - 2])) : (((/* implicit */int) ((((/* implicit */_Bool) -947934131651953082LL)) && (((/* implicit */_Bool) arr_22 [i_1] [i_1] [1ULL])))))));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_33 [i_13 - 1] [i_10 - 1] [(signed char)3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_40 [i_1] [(signed char)11] [i_11] [i_11] [i_12] [i_11]))));
                        }
                        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((((/* implicit */long long int) min((3759902830U), (((/* implicit */unsigned int) arr_14 [i_10] [i_12] [9U] [i_10] [i_10] [i_1]))))) + (-7367702491356500196LL))) != (((/* implicit */long long int) min((((/* implicit */int) (!(arr_6 [i_1] [i_1])))), ((+(((/* implicit */int) arr_9 [i_1]))))))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_14 = 0; i_14 < 13; i_14 += 1) 
        {
            for (unsigned int i_15 = 3; i_15 < 10; i_15 += 3) 
            {
                {
                    arr_48 [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-42)) : (((/* implicit */int) (unsigned char)98))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)23)), ((unsigned char)217))))) : (min((((/* implicit */long long int) min((arr_23 [i_1] [i_14] [i_15] [i_1] [i_15] [i_1] [(unsigned short)4]), (((/* implicit */unsigned char) (signed char)-108))))), (((arr_45 [i_1] [i_1] [i_14] [i_15]) ? (arr_21 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */long long int) arr_31 [6ULL]))))))));
                    arr_49 [i_1] [i_1] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_1] [i_14] [7LL] [i_15 + 2])) ^ (((((/* implicit */_Bool) arr_19 [i_15 + 3] [i_14])) ? (-979022477) : (((/* implicit */int) (unsigned short)1922))))))) != (((min((3383359621645712551LL), (((/* implicit */long long int) 833902179)))) & (min((arr_41 [i_1] [i_14] [i_14] [i_14]), (((/* implicit */long long int) arr_45 [i_1] [i_14] [i_15] [i_15]))))))));
                    var_29 -= ((/* implicit */short) ((unsigned char) ((arr_38 [i_15 + 1] [i_15 + 2] [i_15 - 3] [i_15 - 1]) < (((/* implicit */unsigned int) (+(((/* implicit */int) arr_23 [i_1] [10ULL] [i_14] [i_1] [i_14] [i_15] [i_15]))))))));
                }
            } 
        } 
    }
}
