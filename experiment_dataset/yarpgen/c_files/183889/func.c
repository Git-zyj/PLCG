/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183889
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
    var_19 = ((/* implicit */short) var_10);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_20 -= ((/* implicit */unsigned short) 4620573341631641987LL);
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)-1)) & (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)0))) > (6443864345127590069LL))))))) > (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_14))))), (((unsigned int) 7569929738162053083LL)))))))));
        arr_3 [i_0] = ((/* implicit */signed char) (-(min((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_9))), (min((127ULL), (((/* implicit */unsigned long long int) var_7))))))));
    }
    for (long long int i_1 = 1; i_1 < 21; i_1 += 4) 
    {
        var_22 = ((/* implicit */unsigned long long int) min((arr_5 [i_1] [19]), (((/* implicit */long long int) ((short) ((unsigned long long int) arr_4 [(unsigned char)3] [i_1]))))));
        var_23 = min((min((((/* implicit */unsigned long long int) arr_5 [i_1 + 3] [i_1 + 4])), (var_17))), (((/* implicit */unsigned long long int) min((((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_7)))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)-1)))))))));
    }
    for (signed char i_2 = 1; i_2 < 19; i_2 += 3) 
    {
        var_24 = ((/* implicit */unsigned short) arr_1 [i_2]);
        var_25 = ((/* implicit */signed char) ((((int) ((671805370649009404LL) >> (((5846096686152127099LL) - (5846096686152127057LL)))))) < (((/* implicit */int) (short)1984))));
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                {
                    var_26 += ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [22LL])) / (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (min((var_9), (((/* implicit */unsigned long long int) var_14)))))));
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        var_27 = ((/* implicit */long long int) min((var_27), (max((((/* implicit */long long int) (short)-8)), (max((1557335726950080737LL), (((/* implicit */long long int) 4294967295U))))))));
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (short)7))))) * (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_11)) ? (arr_2 [i_5]) : (((/* implicit */int) var_16)))))))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned short) var_18);
                            var_30 *= ((/* implicit */unsigned int) ((signed char) var_5));
                            var_31 = ((unsigned long long int) ((((/* implicit */_Bool) ((15049172798622043877ULL) | (((/* implicit */unsigned long long int) 998072512U))))) ? (var_5) : (max((((/* implicit */unsigned int) var_10)), (arr_17 [i_7])))));
                            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) (short)-10)), (6220930251531513682ULL))), (max((((/* implicit */unsigned long long int) var_1)), (var_17)))))) ? ((~((~(1598283396))))) : ((~((~(var_14)))))));
                        }
                        for (short i_8 = 2; i_8 < 14; i_8 += 2) 
                        {
                            var_33 += ((/* implicit */unsigned long long int) (~(((int) ((((/* implicit */_Bool) arr_18 [i_3] [i_6] [(unsigned short)7])) ? (((/* implicit */unsigned long long int) 3175363378U)) : (var_17))))));
                            var_34 = ((/* implicit */int) max((((/* implicit */unsigned int) max((((/* implicit */int) ((signed char) arr_27 [i_3] [6ULL] [i_3] [i_3] [i_3]))), (((((/* implicit */int) (unsigned short)31763)) | (var_14)))))), (((unsigned int) max((var_11), (((/* implicit */unsigned int) var_10)))))));
                        }
                        var_35 = ((/* implicit */short) (((~(var_9))) <= (max((var_4), (((/* implicit */unsigned long long int) var_10))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_9 = 0; i_9 < 16; i_9 += 2) 
                    {
                        arr_32 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((((arr_2 [i_9]) + (2147483647))) << (((((/* implicit */int) var_3)) - (12726))));
                        /* LoopSeq 1 */
                        for (short i_10 = 0; i_10 < 16; i_10 += 4) 
                        {
                            var_36 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_16)) ? (arr_14 [i_3] [5LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [(short)13] [14ULL] [i_5] [i_9]))))) >> (((arr_23 [i_3] [3U] [i_10]) - (12843211738319149870ULL)))));
                            var_37 = ((/* implicit */short) (~(arr_28 [i_9] [i_9] [i_4] [i_3])));
                            arr_35 [i_5] [i_9] [i_5] [i_4] [9U] = (+(((/* implicit */int) (unsigned char)72)));
                        }
                    }
                    arr_36 [i_3] [i_4] [i_4] |= min(((~(((/* implicit */int) ((unsigned short) 751489461198169610ULL))))), ((-((-(-989836959))))));
                    arr_37 [2ULL] [i_5] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((int) 0U))), (max((((/* implicit */unsigned int) (+(-1570017853)))), (max((3175363378U), (((/* implicit */unsigned int) (short)1))))))));
                    var_38 = max((((/* implicit */unsigned int) (~(((arr_21 [i_4] [i_4] [i_3]) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_19 [i_3] [i_3] [i_5] [i_3]))))))), (var_11));
                }
            } 
        } 
    } 
    var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) ((((/* implicit */_Bool) min((min((((/* implicit */int) (short)-1)), (var_14))), (((/* implicit */int) ((unsigned short) 1037376455593258119ULL)))))) ? (min((((/* implicit */unsigned long long int) (-(var_5)))), (((var_15) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37470))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_18)) & (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((9227078958232924422ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))))));
}
