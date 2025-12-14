/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186901
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) ((int) var_14)))) / (((int) min((((/* implicit */unsigned short) var_3)), (var_11))))));
    var_21 = ((/* implicit */unsigned char) ((short) var_18));
    var_22 = ((/* implicit */unsigned short) var_4);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((unsigned long long int) arr_1 [i_0]);
        arr_4 [8] = ((/* implicit */signed char) ((int) ((((/* implicit */int) (_Bool)1)) - (((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_1 [i_0])))))));
        arr_5 [i_0] = min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_17))))), (max((((/* implicit */unsigned long long int) var_5)), (((unsigned long long int) 1152921504606846976LL)))));
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    {
                        arr_19 [i_1] [i_3] [i_3] [i_4] = ((/* implicit */short) (+(((/* implicit */int) min((((/* implicit */unsigned short) arr_15 [i_1] [4ULL] [i_3] [i_3])), ((unsigned short)6967))))));
                        arr_20 [i_3] |= ((/* implicit */unsigned long long int) ((long long int) (unsigned short)39509));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_5 = 2; i_5 < 9; i_5 += 3) 
                        {
                            arr_23 [i_1] [(unsigned char)6] [i_2] [i_3] [i_2] [i_5 - 1] = ((/* implicit */unsigned char) min(((((((_Bool)1) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) >> ((~(18446744073709551615ULL))))), (((/* implicit */long long int) var_16))));
                            arr_24 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) var_10)))))) ? (((((/* implicit */unsigned long long int) ((arr_12 [i_1] [i_2] [i_3]) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_17))))) * (((unsigned long long int) (short)0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 1LL))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            arr_27 [i_3] |= (!(((/* implicit */_Bool) min((((/* implicit */int) arr_12 [i_3] [i_3] [i_3])), ((~(((/* implicit */int) var_12))))))));
                            arr_28 [i_2] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((arr_21 [i_6] [i_2] [i_3] [i_2] [8U]), (((/* implicit */unsigned short) var_6)))))) == (max((((/* implicit */long long int) var_17)), (var_1))))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            arr_33 [i_3] [i_3] [i_3] [i_1] [i_7] &= ((/* implicit */unsigned short) 4880458918598137112ULL);
                            arr_34 [i_1] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_18))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (max((((/* implicit */long long int) 3026614856U)), ((-(var_1)))))));
                            arr_35 [(signed char)6] [i_2] [i_2] [i_4] = ((signed char) 4ULL);
                        }
                        arr_36 [i_1] [i_1] [i_3] [i_2] = ((/* implicit */unsigned long long int) var_1);
                        arr_37 [i_3] [i_2] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) var_19)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (arr_18 [i_1] [i_2] [9] [i_4]) : (arr_18 [i_1] [1] [i_3] [i_4])))) : (var_5)));
                    }
                } 
            } 
        } 
        arr_38 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)45550)), (var_1)))) ? (min((((/* implicit */long long int) max((((/* implicit */unsigned short) var_16)), (var_12)))), ((~(arr_29 [i_1]))))) : (((/* implicit */long long int) ((((((/* implicit */long long int) var_9)) > (arr_29 [i_1]))) ? (((/* implicit */int) var_11)) : (((int) (short)4128)))))));
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 7; i_8 += 3) 
        {
            for (signed char i_9 = 1; i_9 < 7; i_9 += 4) 
            {
                for (unsigned long long int i_10 = 4; i_10 < 8; i_10 += 2) 
                {
                    {
                        arr_48 [i_10] [i_10 - 4] [i_1] [2] [i_8] [i_1] = ((/* implicit */short) arr_17 [i_8] [i_8] [i_8] [i_8 + 2]);
                        arr_49 [(signed char)4] [(_Bool)1] [i_9 + 1] [6LL] [i_8] [(unsigned char)8] = ((/* implicit */_Bool) var_16);
                    }
                } 
            } 
        } 
        arr_50 [i_1] &= ((/* implicit */signed char) ((((((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_10)))) << (((((/* implicit */int) var_18)) - (13962))))) * (((/* implicit */int) ((min((arr_11 [i_1] [i_1] [i_1]), (((/* implicit */int) (unsigned short)62438)))) == (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (var_2)))))))));
    }
    for (signed char i_11 = 0; i_11 < 10; i_11 += 2) /* same iter space */
    {
        arr_54 [9] = ((/* implicit */unsigned long long int) max((((short) ((int) 72057594037927935LL))), (((/* implicit */short) (_Bool)1))));
        /* LoopNest 3 */
        for (unsigned long long int i_12 = 1; i_12 < 8; i_12 += 4) 
        {
            for (unsigned int i_13 = 1; i_13 < 7; i_13 += 4) 
            {
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                {
                    {
                        arr_65 [i_13] [(signed char)3] [i_13] [0U] [i_13 + 1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((short) var_12)))) <= (((((var_1) % (((/* implicit */long long int) -2124609576)))) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_19))))))));
                        arr_66 [i_13] [i_12] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (arr_44 [i_11] [i_13] [i_13] [i_14]) : (((/* implicit */int) arr_51 [i_14])))) >> (((((/* implicit */int) arr_6 [i_12 + 2])) + (13980)))))), (((unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3)))))));
                        arr_67 [i_11] [i_13] [(signed char)0] [(short)0] [i_11] [(short)7] = ((/* implicit */signed char) max((((/* implicit */long long int) (((~(var_0))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_13])))))), (((long long int) min((((/* implicit */unsigned short) var_3)), (var_11))))));
                        arr_68 [i_11] [i_13] [(_Bool)1] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) min((((/* implicit */short) arr_58 [i_11] [i_11] [i_11])), (var_19)))), (max((((/* implicit */long long int) arr_0 [i_14] [i_12])), (4419428482542236328LL)))))) ? (max((var_4), (((/* implicit */long long int) min((((/* implicit */short) arr_12 [i_13] [i_12] [i_13])), (var_18)))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) - (((/* implicit */int) (unsigned short)48460)))))));
                        arr_69 [i_14] [i_11] [i_13 - 1] [i_11] [i_11] = ((/* implicit */signed char) ((unsigned char) (+(((((/* implicit */int) var_7)) << (((var_5) - (1265442594U))))))));
                    }
                } 
            } 
        } 
        arr_70 [i_11] [i_11] = ((/* implicit */_Bool) (signed char)-106);
        arr_71 [i_11] [7] = ((/* implicit */short) min((((/* implicit */long long int) max((arr_39 [i_11] [i_11] [i_11]), (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65534))) : (4885009060519660689LL)))));
    }
}
