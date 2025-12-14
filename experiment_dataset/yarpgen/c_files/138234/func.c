/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138234
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
    var_11 &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) -222035328)) + (min((((/* implicit */long long int) ((((/* implicit */unsigned int) var_2)) * (var_9)))), (var_3)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_3 [13LL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) ((unsigned short) (signed char)-56))) : (arr_1 [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                arr_12 [12LL] [i_2] [i_2] [(unsigned short)6] &= ((/* implicit */int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (var_3) : (6461006544773385652LL))))))));
                /* LoopSeq 2 */
                for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    arr_16 [i_1] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned short) (unsigned short)1023))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) var_9))))) : (2147483647))) << (((/* implicit */int) max(((!(((/* implicit */_Bool) var_2)))), ((!(((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_2] [i_3] [i_2])))))))));
                    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) 13730501512930775482ULL))));
                }
                for (long long int i_4 = 2; i_4 < 14; i_4 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        arr_24 [i_5] [i_0] [i_2] [i_0] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) arr_23 [i_0] [i_0] [i_2] [i_0] [i_4] [i_1])), (var_5)))))) ? (((((/* implicit */_Bool) ((arr_2 [i_0]) ? (var_2) : (((/* implicit */int) arr_23 [2ULL] [i_0] [(unsigned short)14] [i_2] [i_4 - 2] [i_4 - 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_11 [i_2] [i_2] [i_2]))))) : ((+(var_10)))));
                        arr_25 [i_0] [i_1] [i_2] [i_4] [(unsigned char)6] |= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_10 [i_2] [i_4 + 1] [i_4 - 2] [i_4 - 2])) && (((/* implicit */_Bool) arr_10 [i_2] [i_4 - 1] [i_4 - 1] [i_4])))) ? (max((arr_10 [i_0] [i_4 - 2] [i_4 - 2] [i_4]), (((/* implicit */unsigned long long int) arr_21 [i_1] [i_4 + 1] [i_4 + 1] [i_1] [i_4 + 1])))) : (((/* implicit */unsigned long long int) ((int) arr_10 [i_0] [i_4 + 1] [i_4 - 2] [i_4 - 2])))));
                        arr_26 [i_1] [7ULL] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) arr_15 [i_2] [i_1] [i_2] [i_4] [(_Bool)1]);
                        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_8 [i_0] [i_4 + 1] [i_4]))))) - (7698961383432550867ULL)))) ? (((arr_14 [i_1] [i_5] [i_2] [i_2]) % (((/* implicit */int) (unsigned short)65535)))) : (max((arr_1 [i_5]), (((/* implicit */int) max((((/* implicit */unsigned short) arr_9 [i_2] [i_2] [i_4 + 1])), (arr_6 [i_1] [i_4 - 1] [i_5])))))))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 13; i_6 += 3) 
                    {
                        arr_29 [i_1] [i_0] = ((/* implicit */int) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_4 [i_2])))));
                        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65506)) | (((((/* implicit */int) arr_9 [i_1] [i_1] [i_1])) | (((/* implicit */int) var_0))))));
                    }
                    var_15 += ((/* implicit */int) (unsigned short)64512);
                    arr_30 [i_1] [i_2] [9LL] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_2) & (((((/* implicit */int) (unsigned short)65520)) ^ (((/* implicit */int) (unsigned short)0))))))) && (((/* implicit */_Bool) max(((((_Bool)1) ? (13720450450810879049ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [(unsigned char)5] [i_1]))))), (((((/* implicit */unsigned long long int) var_3)) | (18005602416459776ULL))))))));
                }
                var_16 = ((/* implicit */unsigned short) arr_23 [10ULL] [i_1] [i_2] [1] [4] [0U]);
            }
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 15; i_7 += 4) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 2) 
                {
                    {
                        arr_38 [0U] [i_1] [i_1] [i_8] = ((/* implicit */int) (-(arr_11 [i_1] [i_1] [i_8])));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned short i_9 = 0; i_9 < 15; i_9 += 4) 
                        {
                            arr_41 [i_9] [i_9] [i_7] [(unsigned short)10] [i_9] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_9 [i_0] [i_8] [i_0]))));
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) arr_31 [i_1] [i_1] [i_1] [14U]))))) > (((/* implicit */int) (signed char)-56))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_46 [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_2 [i_0])) - (((/* implicit */int) arr_2 [i_0]))))));
                            arr_47 [i_10] [i_1] [i_10] = (i_1 % 2 == zero) ? (((((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)1024)) ? (((/* implicit */int) (unsigned short)6)) : (((/* implicit */int) (_Bool)1))))) == (((var_7) << (((arr_37 [i_1] [i_1] [i_1]) - (692068816U)))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) / (var_8))))))))) : (((((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)1024)) ? (((/* implicit */int) (unsigned short)6)) : (((/* implicit */int) (_Bool)1))))) == (((var_7) << (((((arr_37 [i_1] [i_1] [i_1]) - (692068816U))) - (241476149U)))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) / (var_8)))))))));
                        }
                        for (unsigned char i_11 = 1; i_11 < 13; i_11 += 4) 
                        {
                            arr_50 [i_0] [i_1] [i_1] [i_8] [i_11 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_6 [i_0] [i_1] [i_7]))) / (((/* implicit */int) max((arr_6 [i_11 + 1] [i_7] [i_1]), ((unsigned short)1004))))));
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_45 [14ULL] [i_7] [2ULL] [i_7] [i_0])) ? (((((/* implicit */unsigned long long int) 2147483638)) * (min((((/* implicit */unsigned long long int) var_1)), (arr_35 [i_11 + 2] [i_8] [i_8] [i_8] [(_Bool)1] [i_0]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (var_7)))) ? (var_10) : (var_10))))))));
                            var_19 = (-(arr_45 [(unsigned char)9] [i_1] [i_7] [i_8] [i_11 - 1]));
                        }
                        for (unsigned int i_12 = 3; i_12 < 13; i_12 += 1) 
                        {
                            var_20 |= arr_7 [i_0] [i_8];
                            var_21 ^= ((/* implicit */unsigned short) ((unsigned long long int) ((long long int) arr_34 [2LL] [i_12 + 1] [i_7] [i_8])));
                            arr_54 [i_0] [i_8] [i_1] [i_1] [i_0] = (i_1 % 2 == 0) ? (((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_32 [i_1])) ? (((/* implicit */int) (unsigned short)65507)) : (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), (((arr_32 [i_1]) << (((arr_32 [i_1]) - (967780751)))))))) : (((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_32 [i_1])) ? (((/* implicit */int) (unsigned short)65507)) : (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), (((((arr_32 [i_1]) + (2147483647))) << (((((((arr_32 [i_1]) - (967780751))) + (1289184865))) - (6))))))));
                        }
                        arr_55 [i_8] [i_1] [i_1] [8ULL] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (unsigned short)30427)), (((((arr_42 [11ULL] [i_1]) << (((((/* implicit */int) arr_44 [i_0] [(unsigned short)1] [(_Bool)1] [i_7] [i_7] [i_8] [i_8])) - (55))))) << (((((unsigned int) var_5)) - (1988310168U)))))));
                    }
                } 
            } 
            arr_56 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1]))))) << (((((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64544))) : (var_10)))) - (64524ULL)))));
            arr_57 [i_1] = ((/* implicit */int) ((((/* implicit */int) (unsigned short)37400)) <= (((/* implicit */int) ((((/* implicit */int) (unsigned short)59871)) <= (((/* implicit */int) arr_9 [i_1] [i_0] [i_1])))))));
        }
        arr_58 [5] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((var_4) >> (((18446744073709551615ULL) - (18446744073709551597ULL))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))))))));
    }
}
