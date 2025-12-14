/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1754
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */int) ((((_Bool) 5824401371177331241LL)) || (((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) var_2)))))))) ^ (((/* implicit */int) (unsigned short)27627))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) /* same iter space */
    {
        var_13 = ((((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) || ((((_Bool)1) && (((/* implicit */_Bool) (signed char)-124)))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) & (var_0)))))) ? (((arr_6 [i_2] [(unsigned short)6] [i_0]) >> (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2] [i_1]))) : (3451377338312500631ULL))) - (18446744073709551442ULL))))) : (((/* implicit */unsigned long long int) (~(-301969055))))));
                    arr_8 [i_0] [i_1] [i_0] [(signed char)8] = min((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)23806))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)100))))) ? (min((((/* implicit */long long int) (_Bool)0)), (7495910597881015310LL))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_6 [i_2] [i_1] [i_0])))))));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3] = ((/* implicit */short) min((var_5), (((/* implicit */int) var_1))));
                        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_2 [i_0] [i_0]))))))))))));
                        var_15 *= ((/* implicit */unsigned short) ((_Bool) (+(arr_6 [i_1 - 2] [i_1 - 2] [i_1 + 1]))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        var_16 = ((/* implicit */int) (-(min((((/* implicit */unsigned long long int) arr_4 [i_1 - 1] [i_1 - 1])), (0ULL)))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) (~(-1221551828)));
                            arr_17 [i_5] [i_5] [(signed char)6] [i_5] [i_0] = ((/* implicit */unsigned short) ((signed char) ((long long int) var_7)));
                            var_18 = ((/* implicit */unsigned short) min((((int) (+(((/* implicit */int) (short)-25698))))), (((int) arr_1 [i_0] [i_5]))));
                            var_19 += ((/* implicit */unsigned long long int) min((((int) arr_2 [i_1 - 1] [i_1 - 2])), (((/* implicit */int) (short)-17697))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            var_20 = ((/* implicit */_Bool) (+(((arr_19 [i_1 - 1] [i_1 - 1] [i_6] [i_1 - 2]) ^ (((/* implicit */unsigned long long int) 2899341697U))))));
                            var_21 = ((/* implicit */int) min((min((((/* implicit */unsigned int) (signed char)-38)), (arr_14 [i_0] [i_1 - 2]))), (min((arr_14 [i_2] [i_6]), (arr_14 [i_0] [i_0])))));
                            var_22 ^= ((/* implicit */signed char) var_2);
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (_Bool)0))));
                        }
                        for (int i_7 = 0; i_7 < 10; i_7 += 1) /* same iter space */
                        {
                            arr_23 [i_1] [i_7] = ((/* implicit */short) arr_15 [i_2] [i_2] [i_7]);
                            var_24 = ((/* implicit */unsigned long long int) min(((+(min((((/* implicit */int) (signed char)-67)), (134217727))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                            var_25 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? (((/* implicit */int) min((arr_4 [i_1 - 1] [i_1 - 1]), (var_4)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1] [i_1 - 2] [i_1 - 1])) && (((/* implicit */_Bool) arr_5 [i_1 - 2] [i_1 - 2] [i_1 - 1] [i_1 - 2])))))));
                        }
                        for (int i_8 = 0; i_8 < 10; i_8 += 1) /* same iter space */
                        {
                            arr_28 [i_2] [i_8] [(short)4] = ((/* implicit */unsigned int) var_2);
                            var_26 -= ((/* implicit */short) ((int) var_2));
                            var_27 = ((/* implicit */short) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)84))) : (arr_14 [i_1 - 1] [i_1 - 2]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */short) var_4)), (arr_22 [i_8])))) || (((/* implicit */_Bool) ((unsigned long long int) var_0))))))));
                        }
                        /* LoopSeq 1 */
                        for (int i_9 = 0; i_9 < 10; i_9 += 3) 
                        {
                            var_28 = ((/* implicit */_Bool) arr_11 [i_1 - 2] [i_1] [i_1 - 2] [i_1 - 2] [i_1] [i_1 + 1]);
                            arr_32 [i_1 - 2] [i_2] [i_9] = (!(((/* implicit */_Bool) (unsigned short)37111)));
                        }
                    }
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned long long int) min((arr_14 [i_0] [i_0]), (((/* implicit */unsigned int) (short)-19079))));
        var_30 = ((/* implicit */long long int) ((unsigned int) (signed char)-124));
        arr_33 [i_0] [i_0] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (-8656504802691346614LL) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
    for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_11 = 1; i_11 < 9; i_11 += 3) 
        {
            arr_38 [i_10] [i_10] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(5824401371177331241LL)))) / (arr_19 [i_10] [i_10] [i_10] [i_11])));
            var_31 = ((unsigned int) ((((/* implicit */int) arr_30 [i_10] [i_11 - 1] [i_10] [i_11])) < (((/* implicit */int) (signed char)123))));
            var_32 ^= ((/* implicit */signed char) (~(arr_2 [i_11 - 1] [i_11 + 1])));
        }
        for (int i_12 = 4; i_12 < 7; i_12 += 3) 
        {
            arr_41 [i_10] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((long long int) -1837457864))), (((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 4294967295U)))) ? (((/* implicit */unsigned long long int) 270843001)) : ((~(arr_13 [i_12] [i_10] [i_12] [i_10] [i_10])))))));
            arr_42 [i_10] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) ((arr_21 [i_10] [i_10] [i_10] [i_12] [i_12]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) && (((/* implicit */_Bool) arr_2 [i_12 + 2] [i_12 + 3]))))) != (((((((/* implicit */int) var_1)) / (((/* implicit */int) (signed char)5)))) >> (((/* implicit */int) ((_Bool) arr_11 [i_12] [i_12] [i_10] [i_10] [i_10] [i_10])))))));
        }
        var_33 = ((/* implicit */short) min((min((((arr_6 [i_10] [i_10] [i_10]) >> (((((/* implicit */int) var_10)) + (119))))), (((/* implicit */unsigned long long int) min(((_Bool)1), ((_Bool)1)))))), (((/* implicit */unsigned long long int) ((unsigned short) arr_20 [i_10])))));
        arr_43 [i_10] [i_10] = ((/* implicit */signed char) (((+(982255660))) << (((min((arr_14 [i_10] [i_10]), (((/* implicit */unsigned int) (signed char)123)))) - (123U)))));
        var_34 = ((/* implicit */_Bool) arr_21 [8U] [i_10] [i_10] [i_10] [i_10]);
    }
    for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 1) /* same iter space */
    {
        var_35 = (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_13] [i_13]))))));
        var_36 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((unsigned short) (signed char)-124)))) ? (((((((/* implicit */int) arr_31 [i_13] [(_Bool)0] [i_13] [i_13] [i_13] [i_13])) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_5 [i_13] [i_13] [i_13] [i_13])) ? (var_5) : (((/* implicit */int) (_Bool)1))))));
        arr_48 [i_13] = ((/* implicit */short) ((arr_2 [i_13] [i_13]) % (((((/* implicit */_Bool) arr_2 [i_13] [i_13])) ? (arr_2 [i_13] [i_13]) : (arr_2 [i_13] [i_13])))));
        /* LoopSeq 1 */
        for (int i_14 = 4; i_14 < 9; i_14 += 3) 
        {
            var_37 = ((/* implicit */signed char) max((var_37), (min((var_10), (((/* implicit */signed char) min((arr_36 [(unsigned short)2]), (arr_36 [2]))))))));
            var_38 = ((/* implicit */int) ((signed char) 15578032808871998760ULL));
        }
    }
    var_39 = ((/* implicit */unsigned short) ((((unsigned int) var_1)) != (var_7)));
}
