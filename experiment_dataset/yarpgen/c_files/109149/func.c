/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109149
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 8; i_2 += 2) 
            {
                {
                    var_18 ^= ((/* implicit */unsigned long long int) 1019337684U);
                    var_19 = ((/* implicit */unsigned int) 0);
                    var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_0 [i_0]))));
                    var_21 ^= (-(((/* implicit */int) arr_0 [i_2 + 2])));
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 859599993U)) ? (arr_4 [i_1] [i_1] [i_1]) : (arr_4 [i_0] [i_0] [i_2 + 2])));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned char) arr_0 [i_0]);
    }
    /* vectorizable */
    for (long long int i_3 = 4; i_3 < 24; i_3 += 1) 
    {
        var_24 &= ((/* implicit */long long int) ((unsigned long long int) (unsigned char)17));
        var_25 = ((/* implicit */unsigned int) var_6);
        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) var_16))));
        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((/* implicit */int) (unsigned char)166)) >= (((/* implicit */int) arr_7 [i_3 - 1])))))));
    }
    for (short i_4 = 0; i_4 < 24; i_4 += 1) 
    {
        var_28 *= ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)27301)) > ((-(((/* implicit */int) var_17)))))))));
        arr_10 [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_9 [i_4]))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 1; i_6 < 23; i_6 += 2) 
            {
                {
                    var_29 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)183))))) * (max((arr_13 [i_4] [i_4] [i_4]), (((/* implicit */unsigned int) (unsigned char)179)))))));
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 24; i_8 += 4) 
                        {
                            {
                                var_30 = ((/* implicit */int) ((((/* implicit */_Bool) ((-6181442669268692774LL) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_4] [i_4] [i_6] [i_7] [i_4] [i_8] [i_8])) ? (((/* implicit */int) arr_20 [i_4] [i_5] [i_7] [i_6 + 1] [i_8])) : (arr_17 [i_4] [i_4] [i_4] [i_6 - 1] [i_6 - 1] [i_8]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_14 [i_6 + 1] [i_6 + 1]), (arr_14 [i_6 + 1] [i_5]))))) : ((-(arr_13 [i_7] [i_7] [i_7])))));
                                var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((int) arr_17 [i_4] [i_5] [i_5] [i_5] [i_4] [i_8])))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */unsigned int) min((var_32), (((unsigned int) ((((/* implicit */_Bool) 0U)) ? (627373931U) : (2512134681U))))));
                }
            } 
        } 
        var_33 = max((((arr_6 [i_4]) * (arr_6 [i_4]))), (arr_6 [i_4]));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_9 = 2; i_9 < 23; i_9 += 1) 
        {
            var_34 &= ((/* implicit */long long int) arr_14 [i_4] [i_4]);
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 24; i_10 += 4) 
            {
                for (short i_11 = 0; i_11 < 24; i_11 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_12 = 0; i_12 < 24; i_12 += 1) 
                        {
                            var_35 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-23411)) > (((/* implicit */int) ((((/* implicit */long long int) arr_15 [i_9] [i_9] [i_9] [i_9 + 1])) > (var_6))))));
                            var_36 ^= ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_31 [i_4] [i_4] [i_10] [i_4] [i_11])) % (((/* implicit */int) var_5))))) ^ (((((/* implicit */unsigned int) 0)) & (0U)))));
                            var_37 = ((/* implicit */unsigned char) (~(-16)));
                            var_38 |= ((/* implicit */short) ((unsigned char) ((long long int) arr_17 [i_4] [i_4] [i_9 - 2] [i_4] [i_4] [i_12])));
                        }
                        arr_34 [i_9] [i_9 + 1] [i_9] [i_11] [i_10] [i_11] = ((/* implicit */unsigned char) (~(arr_11 [i_4] [i_10] [i_11])));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_13 = 0; i_13 < 24; i_13 += 1) 
            {
                for (signed char i_14 = 0; i_14 < 24; i_14 += 4) 
                {
                    {
                        var_39 = ((/* implicit */short) ((((/* implicit */long long int) 5U)) < (arr_8 [i_9 + 1])));
                        var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) var_10))));
                    }
                } 
            } 
            var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_4] [i_9 - 2] [i_9 - 1])) ? (((/* implicit */int) arr_14 [i_4] [i_9 - 1])) : (((/* implicit */int) (short)-23411))));
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 3; i_15 < 19; i_15 += 1) 
    {
        for (short i_16 = 2; i_16 < 16; i_16 += 1) 
        {
            {
                var_42 &= (+(((arr_11 [i_15 - 2] [i_16 + 3] [i_15 - 2]) / (((/* implicit */unsigned int) arr_36 [(_Bool)1] [i_16 - 1] [i_15 + 1])))));
                arr_49 [i_15] = ((/* implicit */long long int) max((((/* implicit */int) max(((!(((/* implicit */_Bool) 10ULL)))), (((_Bool) arr_42 [i_15]))))), ((+(((/* implicit */int) arr_14 [i_15 - 1] [i_16 + 2]))))));
                /* LoopNest 3 */
                for (unsigned int i_17 = 1; i_17 < 19; i_17 += 1) 
                {
                    for (short i_18 = 1; i_18 < 18; i_18 += 2) 
                    {
                        for (unsigned int i_19 = 3; i_19 < 17; i_19 += 1) 
                        {
                            {
                                var_43 = ((/* implicit */unsigned int) ((0) | (((/* implicit */int) var_12))));
                                arr_58 [i_15] [i_15] [i_15] [i_15] = (i_15 % 2 == 0) ? (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_21 [i_16 - 1] [i_16 - 1] [i_16] [i_16 + 4] [i_19 + 3] [i_16] [i_16]) | (((/* implicit */long long int) arr_36 [i_15] [i_15] [i_19 - 3]))))) ? (((((((/* implicit */_Bool) arr_40 [i_17] [i_17] [i_15] [i_15])) ? (((/* implicit */int) (unsigned short)52062)) : (arr_40 [i_15] [i_15] [i_15] [i_15]))) << (((((((/* implicit */long long int) arr_36 [i_15] [i_15] [i_15])) ^ (var_9))) + (3750212297775098048LL))))) : (((((/* implicit */int) var_16)) << (((min((((/* implicit */unsigned long long int) arr_13 [i_15] [i_15] [i_15])), (arr_32 [i_15] [i_16 + 4] [i_16 + 4] [i_15] [i_15] [i_15]))) - (2356900231ULL)))))))) : (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_21 [i_16 - 1] [i_16 - 1] [i_16] [i_16 + 4] [i_19 + 3] [i_16] [i_16]) | (((/* implicit */long long int) arr_36 [i_15] [i_15] [i_19 - 3]))))) ? (((((((/* implicit */_Bool) arr_40 [i_17] [i_17] [i_15] [i_15])) ? (((/* implicit */int) (unsigned short)52062)) : (arr_40 [i_15] [i_15] [i_15] [i_15]))) << (((((((((/* implicit */long long int) arr_36 [i_15] [i_15] [i_15])) ^ (var_9))) + (3750212297775098048LL))) - (7500424596379116707LL))))) : (((((/* implicit */int) var_16)) << (((min((((/* implicit */unsigned long long int) arr_13 [i_15] [i_15] [i_15])), (arr_32 [i_15] [i_16 + 4] [i_16 + 4] [i_15] [i_15] [i_15]))) - (2356900231ULL))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    var_44 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_16] [i_16 + 3] [i_16 + 3] [i_16] [i_16 + 3] [i_16])) ? ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (18446744073709551608ULL))))) : (((/* implicit */unsigned long long int) min((arr_48 [(short)16]), (((/* implicit */unsigned int) ((var_9) < (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_15 - 2] [12])))))))))));
                    var_45 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_7 [i_20])) : (((/* implicit */int) arr_31 [i_15] [i_15] [0LL] [0LL] [i_15 - 1]))))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_7))))) ? (5201098693658015623ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65522))) | (var_4)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_56 [2ULL] [i_15 - 2])) ? (((/* implicit */int) (unsigned short)14378)) : (((/* implicit */int) (signed char)124))))) : (max((((/* implicit */unsigned int) -399097127)), (330249156U)))))));
                    var_46 = ((((/* implicit */_Bool) ((unsigned int) ((arr_17 [i_15] [i_15] [i_15 + 1] [i_15 + 1] [i_16 - 1] [i_20]) * (((/* implicit */int) arr_31 [i_15] [i_16 + 4] [i_15] [i_20] [i_16 + 4])))))) && (((((/* implicit */int) (unsigned short)0)) > (((((/* implicit */int) var_7)) << (((((/* implicit */int) arr_20 [i_15] [i_15] [i_15] [i_15] [i_15])) - (97))))))));
                }
            }
        } 
    } 
    var_47 = ((/* implicit */unsigned char) max((var_47), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (3764976885U) : (0U)))) ? (var_8) : (((/* implicit */unsigned long long int) var_9)))))))));
}
