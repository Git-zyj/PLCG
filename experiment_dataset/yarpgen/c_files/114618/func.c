/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114618
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
    var_18 = ((/* implicit */unsigned int) var_16);
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((max(((unsigned short)65532), ((unsigned short)46632))), (((/* implicit */unsigned short) var_16)))))) : (min((((/* implicit */unsigned int) var_2)), (min((((/* implicit */unsigned int) var_5)), (var_9)))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_20 |= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_0 [(short)14] [17LL])))) : (arr_1 [i_0])))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)29949)) && (((/* implicit */_Bool) ((var_12) - (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)65514), (((/* implicit */unsigned short) arr_3 [i_0])))))))))));
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) arr_3 [i_0]))));
        var_23 = min((((unsigned long long int) arr_0 [i_0] [i_0])), (((/* implicit */unsigned long long int) max((arr_1 [i_0]), (((/* implicit */unsigned int) var_2))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (unsigned int i_3 = 3; i_3 < 21; i_3 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_4 = 2; i_4 < 20; i_4 += 1) /* same iter space */
                        {
                            var_24 ^= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))) ^ (arr_4 [i_3] [i_3 + 1] [i_3])));
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((((/* implicit */int) (short)-27217)) >= (((/* implicit */int) (short)7219)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-92))) : (((((/* implicit */_Bool) arr_6 [i_2] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(signed char)10]))) : (9223372036854775807ULL))))))));
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16235)))));
                            arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_13 [i_4 - 2] [(short)16] [10U] [(short)16] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))))));
                        }
                        for (signed char i_5 = 2; i_5 < 20; i_5 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6833769871517943513LL)) ? (((((/* implicit */_Bool) max((arr_10 [i_0] [i_0] [i_0] [i_5]), (arr_10 [i_0] [i_0] [i_2] [i_5])))) ? (((/* implicit */int) arr_15 [(unsigned short)0] [i_1] [i_2] [i_3 - 1] [i_5])) : (((/* implicit */int) ((((/* implicit */int) arr_15 [i_5] [i_3 - 1] [i_2] [i_1] [i_0])) < (((/* implicit */int) arr_16 [i_0] [i_0] [i_2] [i_3] [i_5 + 2] [i_5]))))))) : (((/* implicit */int) arr_12 [i_2]))));
                            arr_18 [i_2] = ((/* implicit */unsigned int) arr_8 [i_3 + 1] [i_2] [(short)3]);
                        }
                        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) arr_13 [i_1] [i_1] [i_1 + 1] [i_1 + 1] [21U]))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 2 */
    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) 
    {
        arr_22 [(unsigned short)4] |= ((/* implicit */unsigned long long int) arr_9 [i_6]);
        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (max((arr_9 [(short)4]), (((/* implicit */long long int) (+(((/* implicit */int) (short)-29933))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_6] [i_6] [(unsigned short)16] [i_6] [i_6])) ? (((((/* implicit */int) (short)-27217)) * (((/* implicit */int) (signed char)22)))) : (((/* implicit */int) arr_6 [i_6] [i_6])))))));
        arr_23 [i_6] = ((/* implicit */unsigned int) (-(max((((/* implicit */unsigned long long int) min((((/* implicit */short) arr_3 [i_6])), (arr_8 [i_6] [i_6] [i_6])))), (min((arr_7 [i_6] [(signed char)17]), (6495947165925069885ULL)))))));
    }
    for (unsigned int i_7 = 2; i_7 < 16; i_7 += 2) 
    {
        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) arr_9 [i_7 - 2]))));
        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(unsigned char)9]))))))))));
        var_32 += ((/* implicit */signed char) (~(max((((/* implicit */unsigned long long int) (unsigned short)49298)), (arr_7 [i_7 - 2] [i_7 + 2])))));
        var_33 *= max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [i_7])), (var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-17))) : (((((/* implicit */_Bool) (unsigned short)14)) ? (((/* implicit */long long int) ((/* implicit */int) (short)29949))) : (-858179190890482492LL)))))), (var_0));
    }
}
