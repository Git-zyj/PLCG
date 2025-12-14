/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173751
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
    var_14 = ((/* implicit */unsigned short) 524287);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            {
                arr_7 [i_0] [0LL] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8719388585760291333LL)) ? (arr_6 [i_0] [i_0] [i_0 + 2]) : (arr_6 [12U] [(_Bool)1] [i_0 + 3])))) ? ((~(min((-357612672), (((/* implicit */int) arr_1 [12U])))))) : ((~(((/* implicit */int) arr_1 [8U]))))));
                arr_8 [i_0] [9U] [(unsigned char)1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_5 [i_0] [i_0 + 3] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_8))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((min((var_7), (((/* implicit */unsigned long long int) arr_4 [i_0])))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-121)))))))));
                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((unsigned char) arr_0 [11LL] [11LL])))));
                arr_9 [(_Bool)1] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) arr_4 [i_0]))) ^ ((~((~(((/* implicit */int) (signed char)105))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) max((((/* implicit */unsigned int) (((~(((/* implicit */int) (unsigned short)60951)))) ^ ((~(((/* implicit */int) (unsigned short)65532))))))), (var_8)));
    /* LoopSeq 2 */
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) ((unsigned char) ((((unsigned int) var_4)) * (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-121)) - (arr_11 [i_2] [i_2])))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        arr_19 [(_Bool)1] [i_3] [i_2] [(_Bool)1] &= ((min((((((/* implicit */_Bool) (signed char)-88)) ? (((/* implicit */int) arr_16 [i_2])) : (((/* implicit */int) arr_16 [(_Bool)1])))), (max((arr_10 [i_3]), (((/* implicit */int) (unsigned short)60959)))))) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) min((arr_11 [i_2] [i_5]), (((/* implicit */int) arr_15 [i_2] [i_2] [i_2]))))) != (var_7)))));
                        arr_20 [i_3] [i_2] = ((/* implicit */int) ((long long int) ((unsigned char) arr_10 [i_4])));
                        var_18 += ((/* implicit */unsigned int) ((var_10) < (((/* implicit */int) ((_Bool) arr_14 [(short)16])))));
                        arr_21 [i_5] [i_2] [(signed char)6] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((arr_17 [i_3] [9LL] [(unsigned short)11]) / (((/* implicit */int) arr_18 [i_2] [2ULL] [8] [2ULL])))), (((/* implicit */int) arr_16 [i_5]))))) ? (((/* implicit */int) (unsigned short)65490)) : (((/* implicit */int) min((max((((/* implicit */short) arr_16 [(_Bool)1])), (arr_18 [i_2] [(_Bool)1] [i_4] [i_5]))), (((/* implicit */short) ((_Bool) (unsigned char)6))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_24 [i_6])) ^ (((/* implicit */int) arr_15 [i_2] [i_2] [i_2]))))))));
                    var_20 |= ((/* implicit */unsigned char) 9223372036854775803LL);
                }
            } 
        } 
    }
    for (long long int i_8 = 0; i_8 < 24; i_8 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 1) 
        {
            for (unsigned int i_10 = 0; i_10 < 24; i_10 += 4) 
            {
                {
                    var_21 = ((/* implicit */signed char) arr_33 [(_Bool)1] [(_Bool)1]);
                    var_22 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_28 [i_10])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_33 [(short)6] [i_10])))) << (((/* implicit */int) ((((/* implicit */int) arr_28 [i_8])) < (((/* implicit */int) arr_31 [i_8] [i_9] [i_10])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 2; i_11 < 23; i_11 += 3) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 24; i_12 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (~((~(max((2540503087U), (((/* implicit */unsigned int) arr_37 [(short)9] [i_8] [6LL] [6LL] [(unsigned char)5] [(unsigned char)6])))))))))));
                                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((_Bool) (((((~(((/* implicit */int) arr_29 [i_9])))) + (2147483647))) >> ((((~(((/* implicit */int) arr_28 [14])))) - (64)))))))));
                            }
                        } 
                    } 
                    var_25 ^= ((((((/* implicit */_Bool) arr_31 [i_10] [i_10] [i_10])) || (((/* implicit */_Bool) arr_31 [i_8] [i_8] [i_8])))) ? (((/* implicit */int) arr_31 [i_8] [i_9] [i_10])) : (((((/* implicit */int) arr_31 [i_8] [i_9] [i_10])) + (((/* implicit */int) arr_31 [i_8] [i_9] [i_8])))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (int i_14 = 0; i_14 < 24; i_14 += 2) 
            {
                {
                    arr_46 [i_13] [i_13] [19U] = ((/* implicit */short) (~(var_11)));
                    /* LoopSeq 1 */
                    for (int i_15 = 1; i_15 < 22; i_15 += 4) 
                    {
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_8] [i_8] [13U])) ? (((/* implicit */int) arr_44 [i_8])) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) arr_42 [i_13])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_41 [i_8] [i_8] [15U])))) : (((/* implicit */int) arr_41 [i_15 + 1] [i_15 + 1] [i_15 + 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32747))) : (var_13)));
                        arr_51 [i_13] [15] = ((/* implicit */short) var_12);
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_36 [(unsigned char)13] [2LL] [(_Bool)1] [(unsigned short)10])) : (((((/* implicit */int) arr_41 [(_Bool)1] [1ULL] [(_Bool)1])) % (((/* implicit */int) arr_31 [(signed char)11] [(signed char)11] [1])))))), (((/* implicit */int) (_Bool)1)))))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_16 = 2; i_16 < 23; i_16 += 2) 
        {
            for (unsigned long long int i_17 = 3; i_17 < 20; i_17 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_18 = 0; i_18 < 24; i_18 += 1) 
                    {
                        arr_59 [6U] [i_16] [i_17] = ((/* implicit */unsigned int) (unsigned short)4571);
                        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */int) min((arr_37 [i_17 - 2] [i_16] [i_16 - 1] [(unsigned char)19] [3ULL] [i_16]), (arr_37 [i_17 + 3] [(_Bool)1] [i_16 - 2] [i_16] [7] [(_Bool)1])))) | (((/* implicit */int) (_Bool)1)))))));
                    }
                    arr_60 [(unsigned char)6] [i_8] [i_17] [i_17] = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) (signed char)104)) ? (12806000370749036788ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)106))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) | (((/* implicit */int) arr_49 [i_8] [(signed char)3] [(signed char)3] [i_8]))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)104)))));
                }
            } 
        } 
        arr_61 [17U] = ((/* implicit */_Bool) min((var_10), (((/* implicit */int) (_Bool)1))));
        var_29 = ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)15))))) / (((12984776511434310278ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
    }
}
