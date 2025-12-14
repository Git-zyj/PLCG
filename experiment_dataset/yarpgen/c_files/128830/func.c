/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128830
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
    var_11 = ((/* implicit */unsigned char) var_5);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            var_12 = ((/* implicit */short) min((((((/* implicit */int) arr_3 [i_0])) ^ (((/* implicit */int) var_9)))), (((((/* implicit */_Bool) var_6)) ? (-1) : (-1)))));
            var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */signed char) var_7)), (arr_2 [i_0])))) ? ((+(((/* implicit */int) var_0)))) : ((~(((/* implicit */int) var_7)))))))));
        }
        arr_5 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) min((var_9), ((unsigned char)15))))));
    }
    for (short i_2 = 2; i_2 < 17; i_2 += 3) 
    {
        var_14 = (unsigned char)184;
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned long long int) var_5);
    }
    var_15 = ((/* implicit */unsigned int) min((((/* implicit */int) var_7)), ((~(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_2))))))));
    /* LoopSeq 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                arr_16 [i_5] [i_3] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_13 [i_5] [i_3])) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) (short)-3080))))));
                var_16 = ((var_4) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_4]))))) : (-738799155));
            }
            for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                arr_19 [i_6] [i_4] [3] = ((/* implicit */unsigned int) ((signed char) max((((/* implicit */short) var_3)), ((short)31))));
                var_17 = ((/* implicit */unsigned char) (~(max((((/* implicit */int) min(((short)13742), ((short)12288)))), (((((/* implicit */_Bool) (unsigned char)71)) ? (((/* implicit */int) (unsigned char)71)) : (((/* implicit */int) (signed char)-70))))))));
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)768)) + (((/* implicit */int) var_9))))), ((~(18435628260202200661ULL)))))) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), (max((((/* implicit */signed char) (_Bool)1)), ((signed char)-47)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_13 [i_3] [i_3])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)105)))) <= ((-(((/* implicit */int) (short)23504)))))))));
                var_19 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))));
            }
            for (signed char i_7 = 3; i_7 < 9; i_7 += 1) 
            {
                arr_22 [i_7 + 1] [i_7] [i_7] [i_3] = ((/* implicit */unsigned char) (short)32767);
                var_20 = ((/* implicit */short) (signed char)127);
                arr_23 [i_7] = ((/* implicit */unsigned long long int) var_8);
            }
            arr_24 [(unsigned char)11] = ((/* implicit */_Bool) max((((arr_14 [i_3]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (max((arr_14 [i_4]), (((/* implicit */unsigned long long int) (_Bool)1))))));
            /* LoopSeq 3 */
            for (int i_8 = 2; i_8 < 11; i_8 += 3) 
            {
                var_21 = ((/* implicit */short) ((((((var_0) ? ((-(1299872309))) : ((-(((/* implicit */int) (signed char)69)))))) + (2147483647))) >> ((((~(((/* implicit */int) (short)8383)))) + (8393)))));
                var_22 = ((/* implicit */short) min(((((!(((/* implicit */_Bool) -1319364476)))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) 1099511627775ULL)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (short)768)))))), (((((/* implicit */int) max((((/* implicit */short) (unsigned char)162)), ((short)3999)))) / (((/* implicit */int) min(((unsigned char)64), (((/* implicit */unsigned char) (_Bool)1)))))))));
                var_23 = (((!(((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)85)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(14ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251))))))) : (((unsigned long long int) var_7)));
            }
            /* vectorizable */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_24 = ((/* implicit */int) var_9);
                arr_31 [(short)1] [i_3] [i_3] [i_9] = ((((/* implicit */_Bool) -1536083765)) ? (((/* implicit */int) ((3670016) < (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) (unsigned char)10)));
            }
            /* vectorizable */
            for (unsigned char i_10 = 0; i_10 < 12; i_10 += 1) 
            {
                arr_35 [i_3] [i_10] [i_4] = ((/* implicit */signed char) (-(((/* implicit */int) ((11115813507350954ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)230))))))));
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [(unsigned char)8] [(unsigned char)8] [(unsigned char)8] [(short)6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((3464938506U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)35)))))));
            }
            var_26 = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (1991539541)))), (max((((/* implicit */unsigned long long int) (signed char)-95)), (14ULL))))), (((/* implicit */unsigned long long int) (_Bool)0))));
        }
        for (unsigned char i_11 = 0; i_11 < 12; i_11 += 2) /* same iter space */
        {
            arr_38 [i_11] = ((/* implicit */int) ((min((arr_13 [i_3] [i_11]), (((/* implicit */unsigned long long int) (unsigned char)44)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
            /* LoopNest 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        arr_45 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) max((((((/* implicit */_Bool) ((int) var_3))) ? (min((2866167786U), (((/* implicit */unsigned int) var_1)))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_8), (((/* implicit */signed char) var_5)))))))), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (unsigned char)255)))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_27 = (-((-(((/* implicit */int) (unsigned char)1)))));
                            var_28 = ((/* implicit */short) var_8);
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_29 = ((/* implicit */short) ((((/* implicit */int) var_6)) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_2), (((/* implicit */unsigned char) var_4)))))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) * (arr_18 [i_3] [i_3] [i_13]))))))));
                            var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) var_6)))));
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_16 = 0; i_16 < 12; i_16 += 4) 
            {
                for (short i_17 = 0; i_17 < 12; i_17 += 2) 
                {
                    {
                        var_31 = ((/* implicit */short) ((18446744073709551601ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)190)))));
                        arr_56 [i_17] [i_11] [i_11] [i_3] = (((-(((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) var_6))))))) / (((int) max((var_6), (((/* implicit */unsigned char) (_Bool)1))))));
                        arr_57 [i_16] [i_11] [i_16] = var_10;
                        var_32 = (short)-32731;
                    }
                } 
            } 
        }
        var_33 = ((unsigned char) arr_26 [i_3] [i_3] [i_3]);
        /* LoopNest 3 */
        for (short i_18 = 3; i_18 < 9; i_18 += 2) 
        {
            for (short i_19 = 4; i_19 < 11; i_19 += 4) 
            {
                for (short i_20 = 0; i_20 < 12; i_20 += 2) 
                {
                    {
                        arr_66 [i_3] [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-125)) ? (4194272U) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_3), (((/* implicit */signed char) ((((/* implicit */int) var_3)) > (((/* implicit */int) (short)-32731)))))))))));
                        var_34 = ((/* implicit */unsigned char) (((+((-(2891421793U))))) - (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) + (arr_64 [i_18 - 1] [i_19 + 1] [i_18 + 2] [(short)8] [i_20] [i_18 + 2]))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_21 = 1; i_21 < 13; i_21 += 3) 
    {
        var_35 = ((/* implicit */signed char) max(((-(((/* implicit */int) (signed char)-126)))), ((-(((/* implicit */int) var_0))))));
        arr_71 [i_21 - 1] [i_21] = ((/* implicit */unsigned char) (((~(((((/* implicit */int) var_5)) - (arr_0 [i_21] [i_21]))))) > (max((((/* implicit */int) (short)5950)), (((((/* implicit */_Bool) 4160749568ULL)) ? (((/* implicit */int) (signed char)98)) : (arr_69 [i_21])))))));
        var_36 = ((/* implicit */unsigned char) (~(min((4290773023U), (((/* implicit */unsigned int) arr_7 [i_21 - 1]))))));
    }
}
