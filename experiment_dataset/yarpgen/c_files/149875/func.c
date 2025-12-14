/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149875
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
    var_16 = ((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-4))) | (1775447465676020479ULL)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)43216), ((unsigned short)43233)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (((((/* implicit */int) arr_1 [i_0] [i_0])) | (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) (unsigned short)43188);
        var_17 = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1]))))) ? (((/* implicit */int) arr_1 [i_1] [i_2])) : (((/* implicit */int) (short)13527))));
            arr_8 [i_1] [i_2] = ((/* implicit */int) var_2);
            arr_9 [i_1] [i_2] [(_Bool)1] &= ((((/* implicit */_Bool) max((((/* implicit */short) arr_5 [i_2])), ((short)29133)))) ? ((+(((/* implicit */int) arr_5 [i_1])))) : (((int) var_5)));
            var_19 = ((/* implicit */_Bool) max((var_19), (((((/* implicit */int) (short)-13538)) <= (((/* implicit */int) max((((/* implicit */short) arr_1 [i_1] [i_2])), (((short) arr_6 [i_1])))))))));
            var_20 -= ((/* implicit */unsigned char) max((((/* implicit */int) max((arr_6 [i_2]), (((/* implicit */short) ((((/* implicit */int) arr_5 [i_2])) == (((/* implicit */int) var_8)))))))), (((((/* implicit */_Bool) (unsigned short)22347)) ? (((/* implicit */int) (_Bool)1)) : (-1119287613)))));
        }
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            arr_13 [i_1] [i_3] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-45))));
            var_21 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_1]))));
            arr_14 [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) (short)-12957))));
        }
        /* LoopSeq 2 */
        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) min((var_6), (((/* implicit */int) (unsigned short)43188))))), ((((_Bool)1) ? (((/* implicit */unsigned int) 1119287612)) : (4294967281U)))))) ? (((((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_4])) & (((/* implicit */int) arr_4 [i_1]))))) & (6071363478511445306LL))) : (((/* implicit */long long int) (-(((/* implicit */int) var_8)))))));
            /* LoopSeq 2 */
            for (unsigned short i_5 = 3; i_5 < 20; i_5 += 2) 
            {
                arr_20 [i_1] [i_4] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_12 [i_1] [i_5 + 3]), (((/* implicit */unsigned int) var_1))))) ? (min((arr_12 [i_1] [i_5 + 2]), (arr_12 [i_1] [i_5 + 1]))) : (((((/* implicit */_Bool) arr_12 [i_1] [i_5 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_12 [i_5] [i_5 + 3])))));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 2; i_6 < 21; i_6 += 1) 
                {
                    for (int i_7 = 1; i_7 < 21; i_7 += 4) 
                    {
                        {
                            arr_27 [i_7] [i_4] [i_5] [i_4] [i_1] = ((/* implicit */int) (unsigned char)94);
                            arr_28 [i_4] [i_4] [i_5] [i_6] [i_7] = ((/* implicit */unsigned char) min((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)22351)))), (((var_0) ? (((/* implicit */int) arr_25 [i_6 - 2] [i_6 - 2] [i_6] [i_7 + 2] [i_7])) : (((/* implicit */int) arr_25 [i_6 + 2] [i_6] [i_6] [i_7 + 1] [i_7 + 1]))))));
                            arr_29 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) var_12);
                        }
                    } 
                } 
            }
            for (int i_8 = 0; i_8 < 23; i_8 += 4) 
            {
                var_23 ^= ((/* implicit */_Bool) arr_21 [i_1] [i_4] [i_8] [i_8]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_35 [i_8] [i_4] = ((/* implicit */short) arr_4 [i_1]);
                    arr_36 [i_1] [i_1] [i_4] [i_9] [i_1] = ((/* implicit */int) (~(arr_26 [i_1] [21LL] [i_8] [i_4] [0U] [i_8])));
                    arr_37 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)34706)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 12U))));
                    arr_38 [i_4] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))));
                }
            }
            var_24 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_1] [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) (short)-13538))))) ? ((((((_Bool)0) ? (arr_26 [i_1] [i_1] [i_1] [18ULL] [i_1] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) - (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((var_7) & (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_1] [i_1])))))));
        }
        for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 1) 
        {
            arr_42 [i_10] = ((/* implicit */signed char) arr_26 [(short)19] [i_1] [i_1] [i_10] [i_10] [i_10]);
            var_25 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_1] [i_10]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_1] [i_10]))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_5 [i_1]))))))));
            var_26 = ((/* implicit */_Bool) arr_39 [i_10] [i_10]);
        }
        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)43188))))) ? (((long long int) arr_1 [i_1] [(unsigned char)2])) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [(signed char)20]))))))));
        arr_43 [i_1] [6] |= max((((/* implicit */unsigned long long int) 37U)), (var_9));
    }
}
