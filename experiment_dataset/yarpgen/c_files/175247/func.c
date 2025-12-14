/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175247
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_10), (max((((/* implicit */unsigned char) arr_0 [i_0])), (var_13)))))) ? ((((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((((((/* implicit */int) (signed char)-124)) + (142))) - (18))))) : (((/* implicit */long long int) ((((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) (signed char)123)))) + (((/* implicit */int) (short)2853)))))));
        var_17 = ((/* implicit */long long int) (~(((/* implicit */int) var_12))));
        arr_2 [(unsigned char)0] [(unsigned char)0] |= ((/* implicit */long long int) arr_1 [(short)0] [(short)0]);
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                {
                    var_18 = ((/* implicit */_Bool) arr_6 [i_1] [i_1]);
                    arr_11 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3]))) | (((((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1])))))));
                    var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((signed char) ((var_6) / (var_3))))), ((+(var_0)))));
                }
            } 
        } 
        arr_12 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (min((var_8), (((/* implicit */int) var_12))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - ((-(var_14))))) : (((/* implicit */unsigned int) ((((var_3) % (((/* implicit */int) (signed char)-124)))) & (min((((/* implicit */int) arr_4 [i_1])), (var_2))))))));
        arr_13 [i_1] = ((/* implicit */short) 5962269876303674547LL);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_4 = 1; i_4 < 11; i_4 += 3) 
    {
        var_20 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)-20951)) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) (signed char)-4))))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-124))))) ^ (arr_7 [i_4])));
        arr_16 [i_4] = ((/* implicit */unsigned long long int) ((((var_5) + (2147483647))) << (((((/* implicit */int) var_12)) - (321)))));
        var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_4 + 1] [i_4 + 1] [i_4 + 1]))));
        var_23 |= ((/* implicit */unsigned short) var_8);
    }
    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_6 = 3; i_6 < 19; i_6 += 3) 
        {
            for (long long int i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? ((-(((((/* implicit */_Bool) arr_18 [i_5])) ? (arr_25 [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41864))))))) : (((/* implicit */unsigned long long int) (+(((2422462381768781378LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))))));
                        var_25 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */int) (unsigned short)23098)))))))), (var_7)));
                    }
                    arr_29 [i_5] [i_5] [i_5] [i_6] = ((/* implicit */signed char) max((((/* implicit */int) ((unsigned short) var_3))), (arr_9 [i_6 + 2] [i_6 + 2] [i_6 + 2])));
                    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (0ULL)))))) : (arr_27 [(short)12]))))));
                    var_27 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (-(var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : ((+(var_7))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_9 = 0; i_9 < 21; i_9 += 2) 
        {
            for (unsigned char i_10 = 0; i_10 < 21; i_10 += 4) 
            {
                {
                    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_3)) | (arr_26 [i_5] [i_5] [i_5])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_32 [i_5] [i_5] [i_5] [i_5])))) : (((unsigned int) max((var_13), (var_13))))));
                    arr_34 [i_5] [i_5] [i_5] &= ((/* implicit */long long int) ((((/* implicit */_Bool) 15897502914721059580ULL)) ? (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (12455984326250949804ULL))), (((/* implicit */unsigned long long int) ((var_5) & (((/* implicit */int) var_1))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)124)) / (((/* implicit */int) ((_Bool) (unsigned short)3458))))))));
                    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_10 [i_10] [i_10] [i_10] [i_10])) ? (var_6) : (((/* implicit */int) arr_10 [i_5] [i_9] [i_5] [i_5])))) & (((/* implicit */int) var_12)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 0; i_11 < 21; i_11 += 2) 
                    {
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            {
                                var_30 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_1))))), (var_0)));
                                arr_41 [i_5] [i_12] [i_5] [i_5] [i_5] [i_12] [i_5] = ((/* implicit */unsigned char) var_7);
                            }
                        } 
                    } 
                    arr_42 [i_5] [i_5] [i_5] [i_5] = max((((/* implicit */unsigned long long int) max((arr_40 [i_5] [i_10]), (((/* implicit */unsigned short) var_10))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) -4380644078071759595LL)) : (var_7))));
                }
            } 
        } 
    }
    var_31 = ((/* implicit */long long int) var_2);
    var_32 = ((((/* implicit */long long int) var_2)) < (-3992639036735748264LL));
}
