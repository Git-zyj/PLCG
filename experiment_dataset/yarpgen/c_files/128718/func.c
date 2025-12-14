/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128718
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
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                var_19 |= ((/* implicit */short) 67899527139825862LL);
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 11; i_2 += 2) 
                {
                    for (long long int i_3 = 3; i_3 < 10; i_3 += 2) 
                    {
                        {
                            var_20 = ((((/* implicit */_Bool) arr_1 [3LL] [i_0])) ? (((((/* implicit */_Bool) var_12)) ? (-1108491932490501358LL) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1 + 1] [i_2 - 1] [i_2]))))) : (((((/* implicit */long long int) max((4294967282U), (((/* implicit */unsigned int) arr_10 [i_0 - 1] [i_1] [9LL] [i_0]))))) - (((((/* implicit */_Bool) arr_8 [i_2] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-67899527139825846LL))))));
                            /* LoopSeq 4 */
                            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
                            {
                                var_21 |= ((/* implicit */int) ((((min((var_3), (((/* implicit */long long int) (signed char)23)))) | (((/* implicit */long long int) ((/* implicit */int) max((arr_2 [i_4]), (((/* implicit */signed char) arr_10 [i_3 - 3] [i_1 + 3] [(short)4] [i_4])))))))) != (min((arr_13 [i_3] [i_3] [i_3 + 1] [i_3] [i_3 + 1] [i_4] [i_3 + 2]), (((/* implicit */long long int) max((((/* implicit */unsigned char) arr_14 [i_3] [i_3 - 1] [i_3 + 2])), ((unsigned char)0))))))));
                                arr_16 [i_0] [i_0] [i_2] [i_3 - 1] [i_0] [i_1 - 1] [i_3] = ((/* implicit */long long int) (signed char)40);
                            }
                            for (int i_5 = 1; i_5 < 10; i_5 += 2) 
                            {
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_2 [(signed char)2])) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_10 [i_0 + 1] [8LL] [i_3] [0LL]))))) : (arr_12 [i_0 + 2] [10ULL] [10ULL] [i_3 + 1] [i_5] [i_2 + 1]))))))));
                                var_23 += ((/* implicit */unsigned short) var_3);
                                arr_19 [i_0] [(unsigned short)3] = ((/* implicit */unsigned int) (+((-(((((/* implicit */_Bool) arr_5 [i_0 + 3] [i_1] [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_1 + 3] [i_2 - 1]))) : (15662475350209319636ULL)))))));
                            }
                            for (signed char i_6 = 0; i_6 < 12; i_6 += 2) 
                            {
                                arr_23 [i_6] [i_0] [i_2] [i_0] [(short)8] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((((/* implicit */_Bool) 16333725847163797579ULL)) ? (arr_22 [(unsigned char)8] [i_1 + 3] [i_2] [i_2] [i_3 + 1] [i_6] [(_Bool)1]) : (((/* implicit */int) arr_6 [5LL] [i_2] [i_0])))) % (((int) arr_22 [i_0] [i_1] [i_2] [i_2] [i_1] [i_3] [i_2 + 1]))))) % (arr_8 [i_0] [i_0] [i_0])));
                                arr_24 [i_6] &= ((/* implicit */unsigned long long int) ((unsigned char) (-(((/* implicit */int) (signed char)(-127 - 1))))));
                                var_24 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)247)) ? (arr_5 [i_0] [i_2] [i_6]) : (((/* implicit */int) arr_6 [i_0] [8ULL] [i_0]))))))))));
                            }
                            for (long long int i_7 = 0; i_7 < 12; i_7 += 3) 
                            {
                                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_26 [i_0] [i_1 + 3] [i_2] [i_3] [i_0]))) ? (((long long int) -67899527139825862LL)) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 4852194797477453061LL)), (12568225046284945511ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) | (((/* implicit */int) (unsigned char)19))))) : (max((4294967265U), (((/* implicit */unsigned int) var_11)))))))));
                                var_26 *= ((/* implicit */signed char) max((((/* implicit */unsigned short) ((signed char) ((long long int) var_16)))), (var_14)));
                                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) 1908181118)) && (((/* implicit */_Bool) (unsigned short)0))));
                            }
                            var_28 -= ((/* implicit */unsigned short) max((2113018226545754039ULL), (2784268723500231973ULL)));
                        }
                    } 
                } 
                var_29 = 4608310770919610901LL;
                var_30 += ((/* implicit */_Bool) arr_3 [(short)4]);
                arr_29 [0] [i_0] [3LL] = min((max((((long long int) 6966686767259005434LL)), (6520503583011859229LL))), (max((-6299918357024187045LL), (((/* implicit */long long int) arr_17 [i_0] [i_0] [i_1] [i_1] [i_1])))));
            }
        } 
    } 
    var_31 ^= ((/* implicit */long long int) var_13);
    /* LoopNest 3 */
    for (short i_8 = 0; i_8 < 16; i_8 += 2) 
    {
        for (unsigned short i_9 = 0; i_9 < 16; i_9 += 2) 
        {
            for (unsigned short i_10 = 0; i_10 < 16; i_10 += 2) 
            {
                {
                    arr_37 [i_8] [(short)12] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)63)) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) -6299918357024187045LL)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)12722))))) ? (((/* implicit */int) max(((unsigned short)13324), (((/* implicit */unsigned short) (unsigned char)196))))) : (((/* implicit */int) (signed char)-99))))));
                    var_32 = ((short) (signed char)127);
                    var_33 ^= ((((/* implicit */_Bool) 2784268723500231969ULL)) ? (10474746677787408976ULL) : (2113018226545754017ULL));
                }
            } 
        } 
    } 
}
