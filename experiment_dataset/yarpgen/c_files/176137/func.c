/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176137
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
    for (long long int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        arr_4 [i_0] |= ((/* implicit */unsigned short) ((arr_1 [i_0 + 1]) == (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 1])))))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) ^ (max((var_1), (((/* implicit */unsigned long long int) arr_1 [i_0 + 2]))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) arr_5 [(signed char)3]))));
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) var_2))));
    }
    for (short i_2 = 2; i_2 < 20; i_2 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) (~((+((-(((/* implicit */int) var_8))))))));
        /* LoopSeq 4 */
        for (unsigned short i_3 = 1; i_3 < 20; i_3 += 4) 
        {
            arr_15 [i_2] [i_2] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) var_10)), (arr_7 [i_2 + 4]))), (((/* implicit */unsigned long long int) ((signed char) var_8)))));
            arr_16 [i_2] [i_2] = ((/* implicit */unsigned char) ((max(((-(var_4))), (max((arr_7 [(signed char)0]), (((/* implicit */unsigned long long int) (unsigned short)49285)))))) * (((/* implicit */unsigned long long int) ((int) (unsigned short)23951)))));
        }
        for (int i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            arr_20 [i_2] [i_2 + 1] [i_2] = ((/* implicit */int) var_1);
            arr_21 [i_2] [(_Bool)1] [i_2] = ((/* implicit */unsigned short) (((~(((/* implicit */int) (short)31082)))) < (((/* implicit */int) ((unsigned short) (short)-31077)))));
            var_19 += ((/* implicit */unsigned char) (~(((/* implicit */int) min((arr_11 [i_2 + 4]), ((unsigned short)59466))))));
        }
        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            /* LoopNest 3 */
            for (signed char i_6 = 0; i_6 < 24; i_6 += 4) 
            {
                for (short i_7 = 1; i_7 < 23; i_7 += 2) 
                {
                    for (unsigned short i_8 = 2; i_8 < 20; i_8 += 3) 
                    {
                        {
                            var_20 |= ((/* implicit */int) 2237209916U);
                            var_21 |= ((/* implicit */unsigned int) ((((min((((var_7) | (((/* implicit */long long int) ((/* implicit */int) (short)3806))))), (((((/* implicit */_Bool) (unsigned short)6054)) ? (arr_1 [i_8 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42111))))))) + (9223372036854775807LL))) >> (((((arr_18 [0ULL]) / (((/* implicit */unsigned long long int) 7U)))) - (256055944037014063ULL)))));
                        }
                    } 
                } 
            } 
            var_22 = ((((/* implicit */_Bool) arr_29 [i_2] [i_2] [i_2] [i_2] [i_5] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_5]))) : (((((/* implicit */_Bool) arr_22 [i_5] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_25 [i_5] [18U] [i_2]) < (((/* implicit */int) (unsigned short)32767)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59453))) | (var_9))))));
            var_23 = (i_2 % 2 == 0) ? (((/* implicit */unsigned char) ((((((((/* implicit */int) (signed char)-118)) % (2147483647))) + (2147483647))) >> (((((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (arr_23 [i_2]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)139))))) - (8557362195777841298ULL)))))) : (((/* implicit */unsigned char) ((((((((/* implicit */int) (signed char)-118)) % (2147483647))) + (2147483647))) >> (((((((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (arr_23 [i_2]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)139))))) - (8557362195777841298ULL))) - (16208932724097539893ULL))))));
        }
        for (signed char i_9 = 1; i_9 < 22; i_9 += 2) 
        {
            var_24 += ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) var_13)) == (arr_18 [i_9 + 2]))) ? ((((+(var_1))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_4)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) ^ (var_10)))) < (((unsigned int) var_9))))))));
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)35331)) >> (((/* implicit */int) arr_24 [i_9 - 1] [i_9 + 2] [i_2] [i_9 + 1]))))) * ((~(var_12)))));
            arr_33 [i_2 + 4] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_12 [i_2 + 3] [i_2 + 3] [i_2]) || (arr_12 [i_2 + 4] [i_2 + 4] [i_2])))) + (((arr_12 [i_2 + 2] [i_2 + 4] [i_2]) ? (((/* implicit */int) arr_12 [i_2 - 1] [i_2 + 4] [i_2])) : (((/* implicit */int) arr_12 [i_2 + 3] [i_2 - 1] [i_2]))))));
        }
        arr_34 [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_7 [(short)7])) ? (arr_9 [i_2] [i_2 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2])))));
        /* LoopNest 3 */
        for (unsigned int i_10 = 1; i_10 < 22; i_10 += 2) 
        {
            for (signed char i_11 = 4; i_11 < 23; i_11 += 2) 
            {
                for (long long int i_12 = 2; i_12 < 23; i_12 += 2) 
                {
                    {
                        arr_41 [i_12] [i_12] [i_11 - 1] [i_11] [i_10 + 1] [i_12] |= ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (390733329U) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_5), (((/* implicit */unsigned short) max(((unsigned char)120), (((/* implicit */unsigned char) (signed char)119)))))))))));
                        var_26 += ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_29 [i_2] [i_10] [i_10] [i_12 + 1] [i_10] [i_12 + 1])), ((~(var_4)))));
                        var_27 = ((/* implicit */int) arr_35 [i_11 + 1]);
                    }
                } 
            } 
        } 
        arr_42 [(unsigned short)6] |= ((/* implicit */long long int) (((-(((/* implicit */int) arr_29 [i_2] [i_2] [i_2 + 4] [i_2 + 1] [i_2] [i_2 + 3])))) <= (((/* implicit */int) (((-(arr_23 [(signed char)6]))) == (((/* implicit */unsigned long long int) ((long long int) arr_10 [i_2 + 1]))))))));
    }
    for (short i_13 = 1; i_13 < 12; i_13 += 2) 
    {
        var_28 &= ((/* implicit */_Bool) (~((~(arr_44 [i_13 - 1])))));
        var_29 = ((/* implicit */signed char) max((((((/* implicit */_Bool) 8586514296240967673ULL)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (short)31096))))), (((/* implicit */long long int) (signed char)92))));
    }
    var_30 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)31093)) >= (((/* implicit */int) ((unsigned short) var_11))))))));
}
