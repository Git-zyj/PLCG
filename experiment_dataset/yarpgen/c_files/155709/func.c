/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155709
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
    var_17 = var_8;
    var_18 = ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) -7911862756224933026LL)), ((-(min((14945724504845453221ULL), (((/* implicit */unsigned long long int) 7911862756224933034LL)))))))))));
        var_20 = (((+(((7911862756224933015LL) / (-7035652553639456865LL))))) / (((-7911862756224933030LL) / (-7371924298156621990LL))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            arr_4 [i_0] [i_0] [i_1] = ((/* implicit */signed char) arr_3 [i_0] [i_0] [i_0]);
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned char) arr_3 [i_0] [i_0] [i_1])))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) (signed char)-102);
                        var_22 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_0 [(unsigned char)6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [(signed char)13]))) : (-7911862756224933026LL))));
                        arr_12 [i_0] [i_1] [i_2] [(unsigned short)5] = ((((/* implicit */_Bool) ((long long int) (-9223372036854775807LL - 1LL)))) ? (arr_7 [i_0] [(unsigned short)14] [i_2] [6ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3]))));
                    }
                } 
            } 
            arr_13 [i_0] [i_1] = ((/* implicit */short) arr_11 [i_0] [3ULL] [i_1] [i_1]);
        }
        for (unsigned short i_4 = 1; i_4 < 16; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 1; i_5 < 16; i_5 += 4) 
            {
                for (unsigned short i_6 = 1; i_6 < 15; i_6 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_7 = 2; i_7 < 15; i_7 += 2) 
                        {
                            arr_23 [i_0] [i_4] = ((/* implicit */unsigned short) arr_1 [i_0]);
                            arr_24 [i_0] [i_4] [2LL] [i_6] [i_7] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */unsigned long long int) 9071047356963566607LL)) < (18303765493413506990ULL))));
                            arr_25 [i_4] [i_6] [0LL] [i_4] [i_4 - 1] [i_0] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_8 [i_4 + 1] [i_5 + 1] [i_6 - 1] [i_7 + 2]))));
                            arr_26 [i_0] [i_4] [i_0] [i_6] [i_4] [i_5 + 1] = ((((/* implicit */_Bool) var_13)) ? (((7820515006475805292LL) ^ (arr_22 [i_4] [i_4] [i_7]))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)8685)) ^ (((/* implicit */int) arr_19 [i_0] [i_4]))))));
                        }
                        arr_27 [i_0] [i_4] = arr_18 [6ULL];
                    }
                } 
            } 
            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (-(max((arr_2 [i_4 + 1] [i_4 - 1]), (((/* implicit */unsigned long long int) (unsigned short)56850)))))))));
        }
        for (signed char i_8 = 0; i_8 < 17; i_8 += 2) 
        {
            arr_31 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_14 [i_0] [i_8])), (6122935379812693874ULL)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((unsigned short) (signed char)102)))))) ? (((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_8])) ? (max((((/* implicit */unsigned long long int) var_10)), (var_16))) : (arr_7 [(unsigned short)3] [i_0] [(unsigned short)7] [i_8]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((-9071047356963566608LL), (((/* implicit */long long int) var_11))))) ? (9071047356963566608LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16577)))))));
            arr_32 [i_0] [i_8] = ((/* implicit */long long int) var_12);
        }
        var_24 *= ((/* implicit */unsigned short) ((min((281474976710655LL), (((/* implicit */long long int) arr_1 [i_0])))) <= (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) 9071047356963566608LL))))))))));
        arr_33 [1LL] = (+(-9071047356963566608LL));
    }
    /* LoopSeq 2 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_10 = 1; i_10 < 21; i_10 += 1) 
        {
            for (signed char i_11 = 2; i_11 < 21; i_11 += 2) 
            {
                for (int i_12 = 0; i_12 < 23; i_12 += 3) 
                {
                    {
                        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 281474976710655LL)))))));
                        arr_49 [i_9] [i_9] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) arr_44 [i_9] [i_9] [i_11 - 1])))));
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (~(min((((/* implicit */long long int) ((unsigned short) 7911862756224933026LL))), ((+(9071047356963566608LL))))))))));
                    }
                } 
            } 
        } 
        arr_50 [i_9] = ((/* implicit */long long int) var_8);
        /* LoopSeq 1 */
        for (unsigned char i_13 = 1; i_13 < 21; i_13 += 2) 
        {
            var_27 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_13 - 1] [i_13] [i_13]))) : (-9071047356963566628LL))) != (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) ((signed char) (signed char)97))), ((unsigned short)55477)))))));
            var_28 = ((/* implicit */long long int) arr_41 [i_9] [i_9] [i_9] [i_13]);
        }
    }
    /* vectorizable */
    for (unsigned short i_14 = 0; i_14 < 22; i_14 += 2) 
    {
        arr_56 [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_54 [18LL] [i_14])) && (((/* implicit */_Bool) (signed char)-92))));
        arr_57 [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) 0ULL)) ? (-9071047356963566609LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)35)))));
        var_29 = ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)127))))) ? (((/* implicit */unsigned long long int) -281474976710655LL)) : ((~(arr_46 [(signed char)14] [i_14] [i_14] [i_14]))));
    }
}
