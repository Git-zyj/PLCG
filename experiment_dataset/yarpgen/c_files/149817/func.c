/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149817
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
    var_18 = ((/* implicit */_Bool) var_11);
    /* LoopSeq 3 */
    for (long long int i_0 = 4; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (-2147483647 - 1)))));
                        var_20 = ((/* implicit */short) (-(((((/* implicit */_Bool) (signed char)27)) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) (signed char)-28))))));
                        var_21 &= ((/* implicit */unsigned long long int) (signed char)-64);
                        var_22 = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned int) arr_1 [i_0 + 1])), ((+(arr_2 [20])))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            arr_10 [i_0] [i_4] [i_4] = max((((((/* implicit */_Bool) (signed char)-28)) ? (((/* implicit */unsigned long long int) min((arr_0 [15] [15]), (((/* implicit */unsigned int) arr_1 [i_0]))))) : (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)47))) : (10986077840174307731ULL))))), (((/* implicit */unsigned long long int) min((arr_4 [i_0 - 2] [i_0] [i_0 - 4]), (arr_4 [i_0 - 1] [i_4] [i_4])))));
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 5364579257179309069ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 + 2] [i_0 + 1] [i_0 + 1]))))) : (((/* implicit */int) ((unsigned char) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)86))) : (arr_0 [i_0 - 4] [i_4])))))));
        }
        for (short i_5 = 0; i_5 < 25; i_5 += 2) 
        {
            arr_13 [i_0] [i_0] [i_0 - 3] = ((/* implicit */int) ((18446744073709551615ULL) + (((/* implicit */unsigned long long int) 149712590))));
            /* LoopNest 2 */
            for (long long int i_6 = 2; i_6 < 21; i_6 += 2) 
            {
                for (int i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    {
                        arr_18 [i_0] [i_5] [i_6] [18U] = arr_17 [i_0] [i_0] [i_6 + 2] [i_6 + 2] [i_7] [i_7];
                        var_24 = ((/* implicit */long long int) (~(min((((/* implicit */unsigned int) arr_16 [i_0 - 1] [i_5] [i_0 - 1] [i_0])), (arr_8 [i_0 + 2])))));
                    }
                } 
            } 
        }
        arr_19 [i_0] [i_0 - 2] &= ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */_Bool) 4285466666880464501LL)) && (((/* implicit */_Bool) arr_12 [i_0 - 4] [i_0 + 1] [i_0 + 2]))))), (max((((int) var_1)), (((/* implicit */int) arr_11 [i_0 - 4] [i_0 - 4] [i_0]))))));
    }
    for (unsigned long long int i_8 = 2; i_8 < 19; i_8 += 3) 
    {
        var_25 = ((/* implicit */int) min((((_Bool) arr_1 [i_8 - 2])), (((arr_1 [i_8 + 1]) != (arr_1 [i_8 - 1])))));
        /* LoopSeq 1 */
        for (unsigned char i_9 = 4; i_9 < 20; i_9 += 2) 
        {
            arr_27 [i_8] = ((/* implicit */unsigned int) (~((((((_Bool)1) && (((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned long long int) arr_4 [i_8] [i_8] [i_8])) : (18446744073709551601ULL)))));
            arr_28 [i_8] [i_8 + 2] [i_8] = ((/* implicit */unsigned long long int) arr_17 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9 - 1]);
            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((+(-1525894563))) + ((+(var_10)))))) ? (max(((((_Bool)1) ? (((/* implicit */int) (signed char)125)) : (arr_17 [7ULL] [7ULL] [9] [i_9] [i_8 + 1] [i_8]))), (((((/* implicit */_Bool) arr_2 [i_8])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_16 [i_9] [i_9] [i_8] [i_8])))))) : ((-(arr_1 [(unsigned char)11]))))))));
            var_27 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_25 [i_9 - 3] [i_9 + 1] [i_9])) ? (((/* implicit */int) (unsigned short)8160)) : (arr_25 [i_9 + 1] [i_9 - 2] [i_9])))));
            /* LoopNest 3 */
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                for (long long int i_11 = 0; i_11 < 21; i_11 += 1) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) max(((signed char)0), (((signed char) arr_12 [i_9 - 1] [i_8 + 2] [i_10 - 1])))))));
                            arr_37 [13ULL] [i_9] [i_9 - 4] [13ULL] [i_10] [16] [(_Bool)1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((arr_3 [i_8] [21]) ? (((/* implicit */int) arr_29 [i_8 - 2])) : (((/* implicit */int) arr_16 [i_8 - 2] [i_9] [(_Bool)1] [23U]))))), (0ULL))))));
                            arr_38 [i_10] [i_10] [i_11] [i_10] [i_10] [i_8] = ((/* implicit */unsigned char) min((((/* implicit */int) (signed char)23)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(unsigned char)6] [i_9 - 4] [i_9])) ? (((/* implicit */int) (signed char)-26)) : (arr_1 [i_8 - 1])))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_12] [14ULL] [i_12] [(_Bool)1] [i_12] [i_12]))) < (var_16)))) : (((/* implicit */int) (signed char)-33))))));
                        }
                    } 
                } 
            } 
        }
    }
    for (short i_13 = 0; i_13 < 25; i_13 += 4) 
    {
        var_29 = ((/* implicit */unsigned short) ((((unsigned long long int) (unsigned char)237)) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_40 [i_13]), (((/* implicit */int) var_7))))) ? (arr_17 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]) : (((/* implicit */int) ((arr_1 [i_13]) < (((/* implicit */int) (signed char)-26))))))))));
        /* LoopSeq 1 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            arr_46 [i_13] [i_14] &= ((/* implicit */signed char) (_Bool)1);
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 25; i_15 += 2) 
            {
                for (int i_16 = 4; i_16 < 24; i_16 += 2) 
                {
                    {
                        var_30 = ((/* implicit */short) max((arr_1 [i_16 - 4]), ((-(((/* implicit */int) arr_7 [i_16 - 4] [i_16 - 3] [i_16 + 1] [i_16 - 1]))))));
                        arr_51 [i_16] [i_15] [i_14] [i_13] = min((((unsigned long long int) arr_17 [i_16] [i_16 + 1] [i_16] [i_16] [2ULL] [i_16])), (((arr_39 [i_16] [i_16 - 3]) ? (((/* implicit */unsigned long long int) arr_40 [i_13])) : (max((18446744073709551604ULL), (((/* implicit */unsigned long long int) arr_2 [i_13])))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_17 = 0; i_17 < 25; i_17 += 2) 
            {
                for (unsigned long long int i_18 = 2; i_18 < 24; i_18 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)8160)) : (((/* implicit */int) arr_16 [(short)6] [i_18] [i_14] [i_14])))) <= (((/* implicit */int) arr_54 [i_13] [i_18 - 2]))));
                            var_32 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [(signed char)23] [i_18 - 2] [(signed char)23] [i_18 + 1])) & (((1023837705) / (1872170020)))));
                        }
                        var_33 = ((/* implicit */long long int) (!(((((/* implicit */int) arr_58 [i_18] [i_18 - 1] [i_18] [(signed char)5] [i_17] [i_17] [i_17])) >= (arr_5 [i_18] [i_18 - 2] [i_18 + 1])))));
                        var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                } 
            } 
            arr_60 [i_13] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [i_13] [i_13] [i_14] [i_13])) ? (((((/* implicit */_Bool) arr_12 [i_13] [i_13] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) arr_54 [i_13] [i_13]))) : (arr_12 [i_13] [i_13] [i_13]))) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_13] [i_13] [i_13] [18U])))));
        }
        arr_61 [i_13] [i_13] |= ((/* implicit */short) arr_47 [i_13] [i_13] [i_13] [i_13]);
        arr_62 [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_11 [i_13] [i_13] [i_13]), (arr_11 [i_13] [(_Bool)1] [i_13])))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_57 [i_13] [i_13] [i_13] [i_13] [i_13])), (max(((unsigned short)6218), (((/* implicit */unsigned short) (short)(-32767 - 1)))))))) : (max((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_41 [i_13])))), (((/* implicit */int) arr_11 [(unsigned short)15] [i_13] [i_13]))))));
    }
}
