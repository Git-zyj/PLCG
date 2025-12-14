/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182149
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 4; i_1 < 6; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_3 = 2; i_3 < 9; i_3 += 4) 
                {
                    for (short i_4 = 2; i_4 < 9; i_4 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */_Bool) var_7);
                            var_12 = ((/* implicit */unsigned long long int) max((var_12), (((var_9) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [(_Bool)1] [i_3 + 1] [i_1 - 3] [i_1] [i_1])))))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1 - 3] [i_1 - 2] [i_1 - 3])) > (((/* implicit */int) arr_3 [i_1 - 4] [i_1 - 1] [i_1 - 1])))))));
                var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1880603373))));
                arr_14 [i_0] [i_0] = ((/* implicit */short) arr_12 [i_0] [i_1 - 4] [i_2] [i_2] [i_2]);
            }
            var_15 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned short)59863)) <= (((/* implicit */int) (signed char)-42)))) ? (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)222)))) : (((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) (signed char)-118))))));
        }
        for (unsigned int i_5 = 1; i_5 < 7; i_5 += 1) 
        {
            var_16 = ((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_0] [i_5 - 1])) ^ (((/* implicit */int) arr_13 [i_0] [i_5 + 1]))));
            var_17 = ((/* implicit */long long int) (-(var_4)));
            var_18 = ((/* implicit */int) ((arr_8 [i_0] [i_5 + 3]) && (arr_8 [i_0] [i_0])));
        }
        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((var_1) << (((var_1) - (1846382013U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)118)))));
            arr_20 [i_0] = ((/* implicit */_Bool) var_9);
        }
        for (int i_7 = 0; i_7 < 10; i_7 += 3) 
        {
            arr_23 [i_0] [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_13 [i_0] [i_7])) : (((/* implicit */int) arr_22 [i_0]))));
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (int i_9 = 1; i_9 < 8; i_9 += 2) 
                {
                    {
                        arr_28 [i_7] [i_0] = ((/* implicit */long long int) arr_21 [i_9 - 1] [i_9 + 1]);
                        var_20 ^= ((long long int) (signed char)118);
                    }
                } 
            } 
            var_21 = ((/* implicit */short) arr_8 [i_0] [i_0]);
        }
        var_22 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)102)));
        var_23 = ((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_0] [i_0] [(unsigned short)7]);
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_11 = 1; i_11 < 7; i_11 += 1) 
        {
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_10] [i_10])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-118))))) ? (((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) var_5))));
            arr_35 [i_10] [i_11] = ((/* implicit */unsigned long long int) arr_10 [i_10] [i_11 - 1] [i_10] [i_10] [i_10] [i_10] [5ULL]);
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 10; i_12 += 2) 
        {
            var_25 = ((/* implicit */unsigned short) var_6);
            var_26 = ((/* implicit */long long int) ((((/* implicit */int) ((short) (signed char)118))) * (((/* implicit */int) ((((/* implicit */int) arr_38 [i_10])) < (((/* implicit */int) arr_21 [i_10] [i_12])))))));
            /* LoopSeq 1 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                arr_42 [i_10] [i_12] [i_12] = ((/* implicit */long long int) arr_5 [i_10] [i_12]);
                var_27 = (signed char)117;
                /* LoopSeq 1 */
                for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 1) 
                {
                    var_28 = ((/* implicit */long long int) (signed char)124);
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)124))))) != (var_8)));
                }
            }
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_16 = 0; i_16 < 10; i_16 += 1) 
            {
                for (unsigned int i_17 = 0; i_17 < 10; i_17 += 3) 
                {
                    {
                        var_30 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-125))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_18 = 3; i_18 < 7; i_18 += 4) 
                        {
                            arr_55 [i_10] [(signed char)2] |= ((/* implicit */short) max((var_1), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) < (((((/* implicit */_Bool) arr_19 [i_10] [4] [i_15])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-103))))))))));
                            var_31 ^= ((/* implicit */short) var_9);
                            arr_56 [i_18] [i_17] [i_18] [i_18] [i_18] [i_18] [i_18 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_45 [6LL] [i_18 + 2] [i_18 + 3] [i_18 + 2]), (((/* implicit */unsigned short) arr_27 [i_18 + 2] [i_18] [i_18] [i_18] [i_18]))))) ? (((((/* implicit */int) (signed char)-123)) ^ (((/* implicit */int) arr_45 [i_18] [i_18 + 3] [(_Bool)1] [i_18 - 1])))) : (max((var_0), (((/* implicit */int) arr_9 [i_17] [(unsigned char)1] [i_18 + 2] [i_18 + 2] [i_18 - 2] [i_17]))))));
                            arr_57 [i_17] = ((/* implicit */_Bool) var_2);
                        }
                    }
                } 
            } 
            arr_58 [i_15] [i_15] [i_10] = ((/* implicit */short) arr_50 [(_Bool)1] [i_15]);
        }
        var_32 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) arr_47 [1LL] [i_10] [i_10])), (((var_4) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))), (((/* implicit */unsigned long long int) ((short) min((var_9), (((/* implicit */unsigned long long int) (signed char)117))))))));
    }
    /* vectorizable */
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
    {
        var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-120)) - (((/* implicit */int) (signed char)-118))));
        var_34 = ((/* implicit */short) var_3);
    }
    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
    {
        var_35 += ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_61 [i_20] [i_20])) : (var_4))));
        var_36 = ((/* implicit */short) ((int) ((((arr_63 [i_20]) - (((/* implicit */long long int) ((/* implicit */int) (signed char)117))))) / (((/* implicit */long long int) ((/* implicit */int) var_7))))));
    }
    var_37 = ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_4))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_6)), (var_0)))))) >> ((((+(min((var_8), (((/* implicit */long long int) var_6)))))) + (127634439923857388LL)))));
    /* LoopSeq 1 */
    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
    {
        /* LoopNest 2 */
        for (int i_22 = 0; i_22 < 16; i_22 += 3) 
        {
            for (unsigned int i_23 = 2; i_23 < 14; i_23 += 4) 
            {
                {
                    var_38 = ((/* implicit */unsigned long long int) arr_61 [i_23] [i_22]);
                    arr_73 [6] [i_21] = ((/* implicit */unsigned short) (!(max((arr_65 [i_21]), (arr_68 [i_21] [(unsigned char)4] [i_23])))));
                }
            } 
        } 
        var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) ((min((var_4), (((/* implicit */unsigned long long int) arr_67 [i_21])))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */int) arr_67 [i_21])) : (((/* implicit */int) arr_67 [i_21]))))))))));
    }
}
