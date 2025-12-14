/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106989
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) arr_0 [i_0])) : (var_6))) : (((/* implicit */unsigned int) (-(arr_0 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */int) ((11180117927881969517ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1]))))) ? (((unsigned long long int) arr_6 [i_1] [i_1 - 1])) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_1])))))));
        /* LoopSeq 2 */
        for (unsigned short i_2 = 3; i_2 < 10; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                var_13 += ((/* implicit */unsigned short) arr_9 [i_3] [i_2 - 3]);
                arr_12 [i_1 + 1] [i_3] [i_2 + 1] [i_3] &= ((/* implicit */int) ((short) arr_10 [i_1 - 1]));
                var_14 = ((/* implicit */long long int) ((arr_9 [i_1] [i_1 - 1]) ? (((/* implicit */int) arr_9 [i_1] [i_2 - 2])) : (((/* implicit */int) var_2))));
            }
            for (int i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_9) << (((456616526) - (456616526))))))));
                var_16 |= ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_15 [i_1 - 1] [i_2] [i_2 + 2] [i_4])))) : (((((/* implicit */_Bool) arr_15 [i_4] [i_2 + 2] [i_2 - 2] [i_1 + 3])) ? (((/* implicit */int) (short)1943)) : (((/* implicit */int) arr_9 [i_4] [i_2 - 2])))));
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_11))));
            }
            arr_17 [i_1] = ((/* implicit */int) var_1);
        }
        for (int i_5 = 3; i_5 < 11; i_5 += 2) 
        {
            var_18 = ((/* implicit */unsigned char) 18358136324409710883ULL);
            arr_20 [i_1 + 3] [0U] [i_1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_18 [i_1 + 2] [(signed char)8] [i_5 + 1])) : (((/* implicit */int) arr_9 [(_Bool)1] [i_5 - 3]))));
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_0 [i_1 + 2])) ? (((/* implicit */int) arr_19 [i_1 + 2] [i_5 + 1])) : (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_5 [i_1 + 2] [i_1]))));
            var_20 |= ((/* implicit */unsigned short) arr_11 [i_1] [i_5 - 3] [(unsigned short)4] [i_5 - 2]);
        }
    }
    for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) var_1);
        arr_24 [i_6] = ((/* implicit */short) min((((arr_9 [i_6] [i_6]) ? (((/* implicit */int) arr_10 [i_6 + 1])) : (((/* implicit */int) arr_22 [i_6])))), ((((!(((/* implicit */_Bool) 1439542089)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) ((arr_14 [i_6]) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
    }
    for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            var_22 = ((/* implicit */unsigned long long int) ((_Bool) (_Bool)1));
            var_23 = ((/* implicit */unsigned int) arr_32 [i_7 + 3] [i_8]);
            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (~(((/* implicit */int) arr_32 [i_8] [i_7 - 1])))))));
            arr_33 [i_8] [i_7 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6041053887945768521LL)) ? (((/* implicit */unsigned long long int) 1439542089)) : (2486452738995350496ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 351528284)) ? (((/* implicit */int) arr_30 [i_7] [i_7 + 3])) : (((/* implicit */int) arr_18 [i_8] [2U] [i_7 + 1]))))) : ((+(15960291334714201115ULL)))));
        }
        /* vectorizable */
        for (signed char i_9 = 3; i_9 < 11; i_9 += 1) 
        {
            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_35 [i_9]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) arr_34 [i_7 + 3] [i_9 + 1] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_7] [i_9]))) : (2486452738995350481ULL)))));
            var_26 = ((/* implicit */int) min((var_26), (((((/* implicit */_Bool) arr_7 [i_7] [i_7 + 3])) ? (-1438789567) : (((/* implicit */int) (_Bool)0))))));
        }
        for (unsigned long long int i_10 = 1; i_10 < 11; i_10 += 2) 
        {
            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((arr_8 [i_10]), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) arr_13 [i_7 + 1] [i_10 - 1] [i_10 - 1]))))) ? (((/* implicit */int) arr_1 [i_7 - 1] [i_7 + 2])) : (((((/* implicit */_Bool) arr_23 [i_7 + 3])) ? (((/* implicit */int) arr_18 [i_10 + 1] [i_10] [i_7 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) 15960291334714201112ULL)))))))));
            arr_39 [i_10] [i_10 + 1] = ((/* implicit */short) ((unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_9 [i_10] [i_10]))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_26 [i_7]))))));
            arr_40 [i_7] [i_10] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) 16LL))));
            arr_41 [i_10] [i_7] [i_10] = ((/* implicit */signed char) (~((-((+(arr_14 [i_10])))))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_11 = 0; i_11 < 12; i_11 += 3) 
        {
            var_28 = ((unsigned int) (signed char)-70);
            var_29 = ((/* implicit */_Bool) min(((-(((/* implicit */int) var_1)))), (((int) arr_11 [i_7 + 3] [i_7 - 1] [i_11] [i_7 + 3]))));
            var_30 = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(arr_7 [i_11] [i_7]))))))), (var_4)));
        }
    }
    var_31 = ((/* implicit */_Bool) var_5);
}
