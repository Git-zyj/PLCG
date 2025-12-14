/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11378
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_8))) ? (((((((/* implicit */int) var_5)) + (var_11))) + (((/* implicit */int) var_17)))) : (min(((~(((/* implicit */int) (unsigned char)217)))), (((((/* implicit */int) var_9)) * (((/* implicit */int) (unsigned char)40))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) : (((max((((/* implicit */int) arr_1 [i_0] [i_0])), (var_13))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [(short)2])))))))));
        var_22 = ((/* implicit */unsigned int) (unsigned char)31);
        var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(((/* implicit */int) var_12))))), ((+(arr_0 [i_0])))));
    }
    for (int i_1 = 2; i_1 < 23; i_1 += 4) 
    {
        arr_4 [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1])) ? (((/* implicit */int) (unsigned char)40)) : (((/* implicit */int) (signed char)-20))))) ? (((unsigned long long int) arr_2 [i_1] [i_1])) : (var_18))), ((~(((12967955274485347786ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)20)))))))));
        arr_5 [i_1 - 1] [i_1 - 2] = ((/* implicit */short) ((long long int) var_17));
    }
    var_24 = ((/* implicit */short) ((((int) ((var_9) ? (var_13) : (((/* implicit */int) var_0))))) << ((((+((+(var_10))))) - (3977447297575117060LL)))));
    /* LoopNest 3 */
    for (signed char i_2 = 3; i_2 < 10; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_16 [i_4] [i_4] [(signed char)6] = ((/* implicit */long long int) max((arr_8 [i_2]), (((/* implicit */unsigned long long int) arr_7 [i_2]))));
                    var_25 = ((/* implicit */short) var_9);
                    arr_17 [10] [i_4] = ((int) max((((/* implicit */unsigned long long int) arr_10 [i_2 - 2])), (arr_13 [i_3 + 1] [i_2 + 1] [i_2] [(signed char)2])));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 1; i_5 < 11; i_5 += 3) 
    {
        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 1) 
        {
            {
                arr_22 [i_6] = ((/* implicit */short) arr_0 [i_5]);
                arr_23 [i_5 + 2] [i_6] [i_5 + 2] = ((/* implicit */unsigned int) arr_20 [i_5] [(_Bool)1] [i_6]);
                arr_24 [i_5 + 2] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_5 - 1] [i_5 + 3])) < (((/* implicit */int) ((((/* implicit */int) arr_1 [i_5 + 2] [i_5 + 2])) <= (((/* implicit */int) arr_1 [i_5 - 1] [i_5 - 1])))))));
                var_26 = ((/* implicit */int) arr_19 [i_5] [i_6]);
                /* LoopSeq 4 */
                for (unsigned char i_7 = 0; i_7 < 14; i_7 += 3) 
                {
                    var_27 = ((/* implicit */int) arr_19 [i_5] [i_6]);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 2) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_9 = 0; i_9 < 14; i_9 += 4) 
                        {
                            var_28 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)31)) ^ (((/* implicit */int) (unsigned char)64))))) ? (min((var_4), (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) & (((/* implicit */int) var_12))))))) : (((/* implicit */unsigned int) arr_18 [i_5 + 2] [i_6]))));
                            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((((/* implicit */int) var_12)) - (((((/* implicit */int) (unsigned short)8188)) >> (((var_4) - (677771021U))))))))));
                        }
                        for (short i_10 = 2; i_10 < 13; i_10 += 1) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned int) (~((~(((((/* implicit */int) arr_27 [i_5] [i_5 + 2])) & (((/* implicit */int) (signed char)-13))))))));
                            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) min((var_7), (((/* implicit */long long int) ((signed char) var_2))))))));
                            arr_34 [i_6] [i_7] [i_8] = ((/* implicit */unsigned long long int) ((unsigned int) ((((((/* implicit */_Bool) var_3)) && ((_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_6] [i_7] [i_8])))))) : (min((12967955274485347786ULL), (((/* implicit */unsigned long long int) arr_25 [i_6] [i_7])))))));
                            var_32 = ((/* implicit */unsigned long long int) min((var_32), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-15)) * (((/* implicit */int) arr_2 [i_5] [i_6]))))) ? ((~(((/* implicit */int) arr_21 [i_5] [i_5] [i_5])))) : (((/* implicit */int) ((unsigned char) (signed char)-110)))))) ? (((/* implicit */unsigned long long int) (-(((4294967294U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))))) : (((((/* implicit */_Bool) (~(8542726409529794690ULL)))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_16))) : (((((/* implicit */_Bool) var_8)) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)221)))))))))));
                            var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) ((arr_26 [i_10 - 1] [i_5 - 1] [i_5 + 1]) ? (((/* implicit */int) (unsigned char)128)) : (((((((/* implicit */int) arr_2 [i_7] [i_7])) >> (((/* implicit */int) arr_30 [i_5] [i_6] [i_7] [i_8] [i_10])))) >> (((var_4) - (677771042U))))))))));
                        }
                        for (short i_11 = 2; i_11 < 13; i_11 += 1) /* same iter space */
                        {
                            var_34 = ((/* implicit */unsigned long long int) var_10);
                            var_35 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)229))) & (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (max((((/* implicit */unsigned int) (unsigned char)40)), (2047745252U)))))));
                        }
                        arr_37 [i_8] [i_7] [i_5] [i_5] = arr_3 [i_5];
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 2) /* same iter space */
                    {
                        arr_40 [i_12] [3U] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((int) arr_32 [i_12] [i_5]));
                        var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) ((unsigned long long int) ((int) (unsigned char)228))))));
                        arr_41 [i_5] [i_6] [i_7] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) arr_31 [i_5 + 2])) : (arr_19 [i_5 + 3] [i_5 + 2])));
                    }
                }
                for (unsigned int i_13 = 0; i_13 < 14; i_13 += 1) 
                {
                    arr_44 [i_5] [i_13] [1] [i_5] = ((/* implicit */unsigned long long int) max((arr_26 [i_5] [i_5 + 3] [i_5 - 1]), (((var_5) || (((/* implicit */_Bool) var_14))))));
                    arr_45 [i_13] = ((((/* implicit */_Bool) ((unsigned long long int) arr_38 [i_5 + 3] [i_5 + 3] [i_5] [i_5 - 1]))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)212))))))) : ((((-(((/* implicit */int) (signed char)-49)))) - ((-(((/* implicit */int) (signed char)40)))))));
                    arr_46 [i_5 + 2] [i_5 + 1] [i_13] [i_5 + 3] = ((/* implicit */unsigned long long int) arr_25 [i_5] [(unsigned short)10]);
                    var_37 = ((/* implicit */short) arr_29 [(unsigned char)2] [i_6] [i_6] [i_13]);
                }
                for (int i_14 = 0; i_14 < 14; i_14 += 1) 
                {
                    var_38 = ((/* implicit */signed char) ((((/* implicit */long long int) max((((arr_32 [i_5] [i_6]) >> (((((/* implicit */int) arr_2 [i_6] [i_6])) - (7145))))), (((/* implicit */unsigned int) (_Bool)1))))) / (((((/* implicit */_Bool) arr_28 [i_5 - 1] [i_5 + 1] [i_5 + 2])) ? (arr_28 [i_5 + 1] [i_5 - 1] [i_5 - 1]) : (arr_28 [i_5 - 1] [i_5 + 3] [i_5 + 1])))));
                    var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) max((arr_20 [i_5] [i_14] [(signed char)10]), (((((/* implicit */_Bool) ((1357602166) - (((/* implicit */int) var_14))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_5] [i_6] [i_14]))) : (((arr_21 [2] [i_6] [i_14]) ? (arr_28 [i_6] [i_6] [i_6]) : (((/* implicit */long long int) arr_48 [i_5])))))))))));
                    arr_49 [i_14] [i_6] [i_5] = ((/* implicit */int) (!(((((/* implicit */int) var_1)) == (((/* implicit */int) arr_39 [i_5 + 1] [i_6] [i_14] [i_14]))))));
                }
                for (unsigned int i_15 = 1; i_15 < 13; i_15 += 2) 
                {
                    arr_52 [i_6] [i_6] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(var_15)))) * (4294967295U)))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_19 [2ULL] [i_6])) ? (arr_19 [i_15 + 1] [i_6]) : (var_4))), (((/* implicit */unsigned int) (short)-11066))))) : (((((/* implicit */_Bool) ((long long int) var_13))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_5] [i_15] [i_15] [i_15 - 1] [i_15 + 1]))) : (min((var_18), (((/* implicit */unsigned long long int) arr_47 [i_5]))))))));
                    var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) ((long long int) (+(var_13)))))));
                    var_41 = ((/* implicit */unsigned int) ((((_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (+(((arr_35 [i_5] [i_5] [i_5 + 1] [i_6] [(_Bool)1]) ? (arr_20 [i_5 + 2] [i_6] [i_15]) : (var_3)))))) : (((min((0ULL), (((/* implicit */unsigned long long int) var_9)))) | (max((((/* implicit */unsigned long long int) (signed char)96)), (11341102535401810618ULL)))))));
                    var_42 = ((/* implicit */signed char) min(((-((~(6917529027641081856ULL))))), (((/* implicit */unsigned long long int) ((var_2) / (var_3))))));
                }
            }
        } 
    } 
}
