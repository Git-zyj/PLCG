/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165418
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
    var_11 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_7)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 10; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned short) var_10);
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 7; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 8; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_2] [i_2] [i_2 + 4])) >> (((((/* implicit */int) arr_4 [i_2] [i_2] [i_2 - 1])) - (39513)))))) ^ ((-(((((/* implicit */_Bool) arr_9 [i_0] [i_1])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2] [i_2 + 1] [i_2] [i_2] [i_0]))))))))))));
                                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_4] [i_4 + 3] [i_2] [i_4 + 2] [i_4 - 3] [(signed char)3] [i_4 + 2])) + (((/* implicit */int) arr_4 [i_2 - 1] [i_1 - 3] [i_1 - 3]))))) ? (((/* implicit */int) arr_11 [i_2] [i_2] [i_2] [i_3] [i_2])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2] [i_4 - 2])) || (arr_2 [i_1 - 3]))))));
                                arr_15 [i_2] [i_1] [i_2] [i_0] [i_4] [i_4] = ((/* implicit */unsigned int) arr_2 [i_2]);
                                arr_16 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_3] [i_3] [i_3] [i_4]))) & (var_9)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 4 */
    for (short i_5 = 0; i_5 < 15; i_5 += 2) 
    {
        arr_19 [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (var_7))))));
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (+(((((/* implicit */_Bool) arr_18 [i_5] [i_5])) ? (((((/* implicit */_Bool) arr_18 [i_5] [i_5])) ? (arr_18 [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [(_Bool)1]))))) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))))));
        arr_20 [i_5] = ((/* implicit */_Bool) arr_18 [i_5] [i_5]);
        var_16 = ((signed char) min((arr_17 [i_5]), (arr_17 [i_5])));
    }
    for (long long int i_6 = 0; i_6 < 14; i_6 += 3) 
    {
        var_17 = ((/* implicit */_Bool) ((((arr_18 [i_6] [i_6]) >> (((((arr_17 [i_6]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2)))) - (63))))) % (((/* implicit */long long int) ((((/* implicit */int) max((var_2), (arr_17 [i_6])))) << (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_6]))) / (var_9))))))));
        var_18 = ((/* implicit */signed char) ((long long int) min((arr_21 [i_6] [i_6]), (arr_21 [i_6] [i_6]))));
        /* LoopNest 2 */
        for (unsigned int i_7 = 1; i_7 < 13; i_7 += 2) 
        {
            for (signed char i_8 = 4; i_8 < 13; i_8 += 4) 
            {
                {
                    arr_31 [i_8] [i_7] [i_7] [i_6] = ((/* implicit */unsigned char) ((((arr_21 [i_7 - 1] [i_7 - 1]) ? (arr_27 [i_7 - 1] [i_7 - 1] [i_8 - 3] [i_8 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_7 - 1] [i_7 - 1]))))) >> (((arr_21 [i_7 - 1] [i_7 - 1]) ? (arr_27 [i_7 - 1] [i_7 - 1] [i_8 - 3] [i_8 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_7 - 1] [i_7 - 1])))))));
                    var_19 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)20563))) / (min((((/* implicit */unsigned int) (unsigned short)44633)), (1183177006U))))));
                    arr_32 [(signed char)0] = ((/* implicit */int) ((((long long int) ((((/* implicit */int) var_8)) & (var_0)))) / (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_7 - 1])))));
                    var_20 = ((/* implicit */_Bool) ((unsigned int) ((arr_26 [i_7 + 1] [i_7 + 1]) & (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_7 - 1] [i_7 + 1]))))));
                }
            } 
        } 
    }
    for (unsigned int i_9 = 3; i_9 < 18; i_9 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_10 = 4; i_10 < 18; i_10 += 4) 
        {
            var_21 = ((/* implicit */unsigned short) arr_40 [(unsigned char)2]);
            arr_41 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_39 [i_9] [i_10 + 2] [i_9])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_33 [i_10])) << (((arr_34 [i_9 + 3]) - (14161203598400673301ULL)))))) : (((unsigned int) min((((/* implicit */int) arr_33 [i_10 - 1])), (var_0))))));
        }
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_34 [i_9 - 1]) % (arr_34 [i_9 + 3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_39 [i_9 + 2] [i_9] [i_9 + 2]), (arr_38 [i_9] [15U] [i_9 + 1]))))) : (((arr_34 [i_9 - 1]) + (arr_34 [i_9 - 1])))));
        var_23 = ((/* implicit */int) (+(((max((((/* implicit */unsigned long long int) var_6)), (var_9))) | (((arr_34 [i_9]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
        /* LoopNest 2 */
        for (unsigned int i_11 = 2; i_11 < 20; i_11 += 2) 
        {
            for (long long int i_12 = 0; i_12 < 21; i_12 += 2) 
            {
                {
                    arr_48 [3LL] [i_11] [i_11 - 2] [3LL] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_38 [i_9 + 3] [i_11 - 1] [9U])) + (((/* implicit */int) min((arr_43 [i_9 - 3] [i_11 + 1]), (((/* implicit */unsigned char) arr_38 [i_9 + 1] [i_11 - 1] [i_11])))))));
                    arr_49 [i_9] [(unsigned short)18] [9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)48450))));
                    /* LoopNest 2 */
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        for (signed char i_14 = 0; i_14 < 21; i_14 += 2) 
                        {
                            {
                                arr_54 [i_9] [i_9] [i_9] [i_13] [i_9 - 1] [i_9 - 2] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_50 [i_11] [i_13] [i_13] [i_14])) & (((/* implicit */int) arr_33 [i_12]))));
                                var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_43 [i_11 - 2] [i_9 - 3]))));
                                var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_2)))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) > (arr_51 [i_13] [i_13] [i_9] [i_13]))))) ^ (((var_9) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
                                var_26 = ((/* implicit */short) var_10);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned int i_15 = 3; i_15 < 18; i_15 += 2) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned long long int) var_0);
        arr_59 [i_15] = ((/* implicit */_Bool) arr_47 [i_15] [i_15 + 2] [i_15 + 1] [i_15]);
        arr_60 [i_15] [i_15] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_44 [i_15 + 1])) : (((/* implicit */int) arr_44 [i_15 + 1]))))) != (((((/* implicit */_Bool) (unsigned short)27980)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16242))) : (((((/* implicit */_Bool) -3508285656208478758LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)107))) : (arr_34 [18])))))));
        arr_61 [i_15] = ((/* implicit */unsigned long long int) arr_44 [i_15]);
    }
    var_28 = ((/* implicit */unsigned int) ((signed char) var_1));
    var_29 = ((/* implicit */unsigned short) var_5);
}
