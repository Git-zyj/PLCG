/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172398
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
    var_14 = ((/* implicit */short) ((unsigned short) ((unsigned short) var_0)));
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) var_0))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_16 += (((~(((/* implicit */int) min((var_4), (((/* implicit */unsigned short) (short)-27338))))))) <= ((~(((/* implicit */int) ((_Bool) arr_1 [i_0 - 1]))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_17 += ((/* implicit */unsigned short) var_1);
                        arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) ((12896107198832767447ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) && (((/* implicit */_Bool) arr_7 [i_0 + 2]))));
                        arr_11 [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0 - 1] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) max((-1347551899035379784LL), (-7554062244165164336LL)))) && (((/* implicit */_Bool) var_4)))));
                        arr_12 [i_2] [i_2] [i_1] [i_0 - 1] = ((/* implicit */unsigned short) max((min((var_12), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) (short)24770))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            for (signed char i_5 = 2; i_5 < 20; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 22; i_7 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_0 + 1] [i_0 + 2] [i_5 - 2])) << (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_17 [i_7] [20LL] [20LL])), (arr_7 [i_4])))) ? (((/* implicit */long long int) ((((/* implicit */int) var_8)) >> (((/* implicit */int) arr_8 [i_0] [i_4] [i_5] [i_4]))))) : (arr_7 [i_6])))));
                                var_19 = ((/* implicit */long long int) ((((((((/* implicit */int) arr_17 [(_Bool)1] [i_0 - 1] [(_Bool)1])) >= (((/* implicit */int) (signed char)-1)))) ? (((((/* implicit */int) (unsigned short)23977)) << (((((((/* implicit */int) (signed char)-117)) + (139))) - (17))))) : (((/* implicit */int) (signed char)-120)))) - ((+(((/* implicit */int) ((18446744073709551615ULL) <= (((/* implicit */unsigned long long int) 0LL)))))))));
                                var_20 |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) max((var_2), (arr_14 [i_0 - 1] [i_0 + 2] [i_0 + 1]))))) | (((((/* implicit */_Bool) ((unsigned short) var_8))) ? (arr_5 [i_7] [i_0 + 2] [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                                arr_23 [i_0 - 1] [i_4] [i_5 + 2] [i_4] = ((/* implicit */int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4] [i_4] [i_4] [i_4]))) * (18446744073709551615ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)23))) : (var_3)))));
                                var_21 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+(var_12)))), (min((((((/* implicit */unsigned long long int) arr_7 [1LL])) * (0ULL))), (((((/* implicit */_Bool) arr_13 [(signed char)5])) ? (8134997572754984390ULL) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0 + 1]))))))));
                            }
                        } 
                    } 
                    arr_24 [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 2] = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-8879)) ? (((/* implicit */int) var_0)) : (arr_16 [i_0] [i_5] [i_0] [i_5])))) ^ (((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */unsigned long long int) 0LL)) : (549755813824ULL))))), (((/* implicit */unsigned long long int) (((-(arr_1 [i_0]))) <= (((/* implicit */int) var_7)))))));
                    var_22 = ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_4 [i_0] [i_4])), (var_9)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_5] [i_5] [i_0 + 2])) || (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) ((unsigned char) arr_18 [i_0] [12]))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_8 = 3; i_8 < 6; i_8 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_9 = 0; i_9 < 10; i_9 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (unsigned short i_11 = 0; i_11 < 10; i_11 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            arr_38 [i_8] [i_11] [i_8 - 2] [1] [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-2147483647 - 1)))));
                            var_23 &= ((/* implicit */unsigned char) ((((/* implicit */int) ((short) -1705353434))) >> (((arr_1 [i_8 - 2]) + (1451159029)))));
                        }
                        var_24 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)213)) : (-1439994730))));
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_36 [i_8 - 2] [i_8 + 4] [i_8 + 2] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_8 + 3] [i_8 - 3] [i_8 - 3] [i_11]))) : (1076299482945303392LL)));
                        arr_39 [i_8 + 2] [i_8 + 2] [i_9] [i_10] [(unsigned short)6] [i_11] = ((((/* implicit */_Bool) arr_25 [i_11] [i_8 + 1])) ? (((/* implicit */int) ((signed char) var_2))) : (((/* implicit */int) (short)24771)));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_13 = 0; i_13 < 10; i_13 += 3) 
            {
                arr_44 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned long long int) (short)32749);
                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) 22LL))));
            }
            arr_45 [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_19 [i_8 + 2] [i_9]))));
        }
        for (unsigned int i_14 = 0; i_14 < 10; i_14 += 3) /* same iter space */
        {
            arr_48 [i_8] [i_8 + 2] = ((/* implicit */_Bool) arr_41 [i_8 + 1] [i_8 + 1] [i_14] [i_8 + 1]);
            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) arr_14 [i_8 + 3] [i_8 + 3] [i_8 - 2]))));
        }
        /* LoopSeq 2 */
        for (unsigned short i_15 = 1; i_15 < 8; i_15 += 1) 
        {
            arr_51 [i_15] [i_15] [i_15] = ((/* implicit */_Bool) ((1705353426) & (var_10)));
            var_28 = ((/* implicit */unsigned long long int) ((((3325238315U) <= (((/* implicit */unsigned int) -1626359556)))) ? (((((/* implicit */_Bool) (unsigned short)57983)) ? (((/* implicit */int) arr_21 [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_15 - 1] [i_15] [i_15 + 2])) : (((/* implicit */int) arr_30 [i_8] [i_15] [i_15])))) : (((/* implicit */int) arr_34 [2] [i_8] [i_8 - 1] [i_8]))));
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            /* LoopNest 3 */
            for (short i_17 = 0; i_17 < 10; i_17 += 2) 
            {
                for (unsigned char i_18 = 0; i_18 < 10; i_18 += 2) 
                {
                    for (int i_19 = 0; i_19 < 10; i_19 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned char) ((((unsigned int) arr_22 [i_8 - 3] [i_8] [i_8 + 3] [i_8 - 3] [i_8 + 3])) / (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                            arr_62 [i_8] [i_8 - 3] [i_8 - 3] [i_8 + 2] [i_8 + 4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_20 [i_8 - 1] [i_8 + 1] [i_8 - 1])) | (arr_49 [i_8])));
                        }
                    } 
                } 
            } 
            arr_63 [i_8] = ((/* implicit */_Bool) var_9);
        }
        /* LoopNest 2 */
        for (long long int i_20 = 2; i_20 < 9; i_20 += 2) 
        {
            for (short i_21 = 0; i_21 < 10; i_21 += 2) 
            {
                {
                    var_30 = ((/* implicit */long long int) ((_Bool) (short)24756));
                    arr_68 [i_21] [i_20 - 2] = ((/* implicit */unsigned short) ((((arr_33 [i_8] [i_20 + 1]) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_32 [i_20] [i_20 - 1] [i_20] [i_20 - 1])) + (39))) - (30)))));
                    var_31 = ((/* implicit */int) max((var_31), (((((((/* implicit */int) arr_47 [i_8 - 1])) >= (((/* implicit */int) (short)22159)))) ? ((+(((/* implicit */int) arr_20 [i_20] [i_20] [i_20 - 2])))) : (((/* implicit */int) arr_64 [i_8 - 2] [i_20 + 1]))))));
                }
            } 
        } 
        var_32 = ((/* implicit */unsigned int) (~(4070994161140100728LL)));
    }
    var_33 = ((/* implicit */signed char) ((var_0) ? (max((max((var_13), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */unsigned int) (short)12337))))))) : (((/* implicit */unsigned long long int) var_11))));
}
