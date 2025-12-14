/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169192
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
    var_13 = ((/* implicit */long long int) var_3);
    var_14 = ((/* implicit */_Bool) ((((unsigned long long int) (!((_Bool)1)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-5)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [4ULL])) + (((/* implicit */int) arr_0 [i_0] [(_Bool)1]))))) ? (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_0 [i_0] [i_0])))) : ((-(((/* implicit */int) arr_1 [i_0] [i_0]))))));
        var_16 -= ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) (short)-30545)) < (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        arr_2 [13U] = ((/* implicit */int) arr_1 [i_0] [i_0]);
        var_17 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) var_5))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */int) (((~(((/* implicit */int) arr_5 [7U] [i_2] [i_2])))) >= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)41516)))))))) << (((((/* implicit */int) max((((/* implicit */unsigned short) (!((_Bool)1)))), (max((arr_0 [i_1] [i_2]), (arr_0 [i_2] [(signed char)19])))))) - (39624)))));
                /* LoopSeq 1 */
                for (signed char i_3 = 4; i_3 < 15; i_3 += 3) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3 + 1] [i_3])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_1]))) : (1123919764U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3171047531U)) ? (arr_4 [(unsigned short)12]) : (((/* implicit */int) (unsigned short)1692)))))))) ? ((+(4294967295U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) min(((unsigned short)7265), (arr_13 [i_3] [i_2])))))))));
                        var_20 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21036))) : (((((/* implicit */_Bool) 1115954296U)) ? (2204669861U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3] [i_2])))))))));
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [9U] [9U]))))) ? ((+(-1860389651))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && ((_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : ((-(((7258434241655324045ULL) - (((/* implicit */unsigned long long int) 4029564647809745123LL)))))))))));
                        arr_14 [i_3] [i_2] [i_3 - 3] [i_4] = ((signed char) (unsigned short)61662);
                    }
                    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_10 [i_3]))) ? (((((/* implicit */_Bool) 1266254726U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22537))) : (arr_6 [(_Bool)1] [(_Bool)1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_5])))))) ? (((/* implicit */int) arr_13 [i_3] [i_5])) : ((-(((((/* implicit */int) (unsigned short)511)) ^ (((/* implicit */int) var_7))))))));
                        arr_18 [(signed char)9] [i_3] [i_1] [i_2] [(unsigned short)2] [i_5] = ((/* implicit */signed char) (-(min((((/* implicit */unsigned int) ((unsigned short) 1000575238U))), (min((((/* implicit */unsigned int) (signed char)-82)), (1073725440U)))))));
                    }
                    for (long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        var_23 = ((/* implicit */int) (-(var_8)));
                        var_24 = ((/* implicit */long long int) (((-(max((((/* implicit */unsigned int) 1700849305)), (var_8))))) == (((/* implicit */unsigned int) (~(((((/* implicit */int) (signed char)89)) | (((/* implicit */int) arr_0 [i_2] [i_3])))))))));
                    }
                    arr_21 [i_1] [i_3] [i_3] = ((((/* implicit */_Bool) ((short) max((11U), (((/* implicit */unsigned int) arr_20 [i_3] [(unsigned short)1] [i_3] [i_3])))))) ? ((+(((/* implicit */int) arr_5 [i_3 - 1] [i_3 - 2] [(unsigned short)3])))) : ((+(((((/* implicit */int) (short)22743)) - (((/* implicit */int) var_12)))))));
                    arr_22 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((11151297243807657835ULL), (((/* implicit */unsigned long long int) 0U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-110))))), (((((/* implicit */_Bool) (signed char)82)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (3781111198144073686ULL)))))));
                }
                var_25 = ((/* implicit */signed char) min(((_Bool)1), ((!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_5)), ((unsigned short)37306))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 1) 
    {
        for (short i_8 = 0; i_8 < 16; i_8 += 3) 
        {
            for (long long int i_9 = 0; i_9 < 16; i_9 += 2) 
            {
                {
                    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (signed char)107))));
                    arr_31 [i_9] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned short)64891)))))));
                    var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-27)), (max((arr_13 [i_9] [i_8]), (((/* implicit */unsigned short) (unsigned char)106)))))))));
                }
            } 
        } 
    } 
}
