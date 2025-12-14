/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103124
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
    var_14 -= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) > (((((((/* implicit */int) var_8)) + (((/* implicit */int) var_8)))) - (((/* implicit */int) var_5))))));
    var_15 = ((/* implicit */short) ((((/* implicit */int) (signed char)100)) & (((/* implicit */int) (unsigned char)137))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (-(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) * (((/* implicit */int) var_9))))) : (min((var_3), (var_0))))))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_17 ^= ((/* implicit */short) min((((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_13)))))), ((-(((/* implicit */int) (unsigned char)137))))));
            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((((/* implicit */int) (short)14157)) - (((/* implicit */int) arr_5 [i_0] [i_1])))) - (((/* implicit */int) ((_Bool) arr_5 [i_0] [i_0]))))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            arr_10 [i_0] &= min((min((((((/* implicit */long long int) ((/* implicit */int) var_9))) & (arr_3 [i_0] [i_0]))), (((/* implicit */long long int) ((((/* implicit */int) var_13)) != (((/* implicit */int) arr_5 [i_0] [i_0]))))))), (var_2));
            /* LoopNest 2 */
            for (long long int i_3 = 2; i_3 < 20; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (unsigned char)137))));
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_3] = ((/* implicit */int) (~(((arr_15 [i_0] [i_0] [i_3] [i_3 - 2] [i_3 - 2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                            var_20 = ((/* implicit */_Bool) min((var_20), (((((/* implicit */unsigned long long int) (~(arr_9 [i_0] [i_2] [i_0])))) == ((-(arr_15 [i_5] [i_4] [i_3] [i_0] [i_0])))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            arr_20 [i_0] [i_2] &= ((/* implicit */long long int) (signed char)29);
                            var_21 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_7)) & (((/* implicit */int) arr_6 [i_3 + 1] [i_3 + 2] [i_6])))) | (((((/* implicit */_Bool) arr_5 [i_3 + 2] [i_3 + 2])) ? (((/* implicit */int) arr_6 [i_3 - 1] [i_3 - 1] [i_3 - 1])) : (-1292352197)))));
                            arr_21 [i_3] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */int) (short)14154)) != (((/* implicit */int) (_Bool)0)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)116))) : (9223372036854775807LL)));
                        }
                    }
                } 
            } 
            arr_22 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_5 [i_0] [i_0])))) ? (((/* implicit */int) max(((unsigned char)116), (((/* implicit */unsigned char) (signed char)29))))) : (((var_12) ? (((/* implicit */int) (unsigned char)129)) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0])))))))));
        }
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) var_13)) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])))))));
        /* LoopNest 2 */
        for (short i_7 = 1; i_7 < 21; i_7 += 3) 
        {
            for (long long int i_8 = 0; i_8 < 22; i_8 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 1; i_9 < 21; i_9 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_10 = 0; i_10 < 22; i_10 += 1) 
                        {
                            arr_32 [i_7] [i_7] = ((/* implicit */_Bool) min(((-(((/* implicit */int) arr_30 [i_9 - 1] [i_9 + 1] [i_8] [i_7 - 1] [i_7 + 1])))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-1050)) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_9 + 1]))))));
                            var_23 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)14157)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)239)), (1400342371553162087LL)))) != (((arr_1 [i_0] [i_0]) - (12493586688399000238ULL)))))) : (((/* implicit */int) (_Bool)1))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_9 + 1] [i_9 - 1] [i_0] [i_9 + 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_7] [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_9 + 1]))) : (767444440U)))) || (((/* implicit */_Bool) min(((unsigned char)139), (((/* implicit */unsigned char) arr_12 [i_9 - 1] [i_9 + 1] [i_7] [i_9 - 1])))))));
                            var_25 += ((unsigned int) (~(((((/* implicit */int) var_9)) | (((/* implicit */int) (signed char)-28))))));
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_7 [i_0] [i_0] [i_0])))) + (arr_1 [i_0] [i_0])));
                            var_27 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned short)31)))) && (((/* implicit */_Bool) min((((long long int) 191637605073002908ULL)), (((/* implicit */long long int) max((3093121799U), (738887117U)))))))));
                        }
                        arr_36 [i_0] [i_8] [i_7] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_8)) ? (arr_23 [i_7 + 1] [i_7 - 1] [i_9 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55230)))))));
                        var_28 = ((/* implicit */signed char) var_1);
                    }
                    /* LoopNest 2 */
                    for (signed char i_12 = 1; i_12 < 21; i_12 += 1) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 22; i_13 += 4) 
                        {
                            {
                                var_29 = ((/* implicit */long long int) min((((4294967295U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24849))))), (((866397361U) + (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                                var_30 = ((/* implicit */long long int) arr_4 [i_0] [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
