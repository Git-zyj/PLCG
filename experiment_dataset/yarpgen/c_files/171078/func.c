/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171078
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)37260)) ? (((((/* implicit */int) (unsigned short)384)) & (((/* implicit */int) (unsigned short)399)))) : (((/* implicit */int) (unsigned short)65152))))), (arr_3 [i_0] [i_1])));
                var_19 = ((((((/* implicit */_Bool) 5990684546902513437ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)365))) : ((+(2962143642116678660ULL))))) % (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_1 [i_0] [i_1]) : ((~(arr_1 [i_0] [i_0]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_10))))))));
    var_21 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)122))) + (258048U)))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) + (268433408U)))) : ((-(var_7))))), (((/* implicit */long long int) var_2))));
    /* LoopNest 2 */
    for (long long int i_2 = 2; i_2 < 19; i_2 += 3) 
    {
        for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            {
                var_22 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1703819356)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_9 [i_2] [i_2]))))), (var_10))) >= (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_7 [i_2 + 3])), (var_9))))));
                /* LoopNest 3 */
                for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */int) (((+(((/* implicit */int) (unsigned short)21313)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2 + 1] [i_2 + 3] [i_2])))))));
                                var_24 = ((/* implicit */unsigned short) 16556806914094900243ULL);
                                var_25 &= ((/* implicit */short) ((unsigned long long int) max((max((((/* implicit */unsigned long long int) var_13)), (2962143642116678660ULL))), (((/* implicit */unsigned long long int) min(((unsigned short)44241), (((/* implicit */unsigned short) (unsigned char)255))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 4) 
                {
                    var_26 += ((/* implicit */unsigned short) arr_12 [i_2 + 3] [(unsigned short)0]);
                    var_27 = ((/* implicit */unsigned long long int) ((1703819352) >= (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)254)) && (((/* implicit */_Bool) arr_7 [i_2])))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_8 = 3; i_8 < 19; i_8 += 1) 
                    {
                        var_28 = ((/* implicit */int) 14910783918417226874ULL);
                        /* LoopSeq 3 */
                        for (unsigned int i_9 = 2; i_9 < 21; i_9 += 3) 
                        {
                            var_29 ^= ((/* implicit */int) arr_21 [i_9 + 1] [(unsigned short)18] [i_9 + 1]);
                            var_30 = ((/* implicit */unsigned char) (+(var_8)));
                            arr_28 [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */int) var_16)) % (((((/* implicit */_Bool) 16579906561279948486ULL)) ? (((/* implicit */int) (signed char)120)) : (2147483647)))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 22; i_10 += 2) 
                        {
                            var_31 += ((/* implicit */unsigned char) ((signed char) (unsigned short)65152));
                            var_32 = ((unsigned char) 6117694273944100084ULL);
                        }
                        for (unsigned short i_11 = 0; i_11 < 22; i_11 += 2) 
                        {
                            var_33 = (+(((/* implicit */int) (unsigned short)49152)));
                            var_34 = ((/* implicit */unsigned char) ((unsigned long long int) arr_29 [i_2 - 1] [i_2 + 3] [i_7] [i_8 - 1] [i_11]));
                        }
                        var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) ((((_Bool) arr_13 [i_2 - 2])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_16 [i_2] [i_3])))))));
                        var_36 = ((((/* implicit */int) (unsigned char)206)) >> (((((/* implicit */int) (signed char)-111)) + (133))));
                    }
                    for (unsigned int i_12 = 0; i_12 < 22; i_12 += 4) 
                    {
                        arr_36 [i_2 - 2] [i_12] [i_2 - 2] [i_12] [i_7] [i_2] = ((/* implicit */unsigned char) (unsigned short)55767);
                        arr_37 [i_12] [i_7] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_2 + 2] [i_2])) ? (arr_23 [i_2 - 2] [i_2] [i_2] [i_2 - 1] [i_2] [i_2 + 1]) : (((/* implicit */int) arr_9 [i_2 + 2] [i_2 + 2]))));
                    }
                    arr_38 [19] [i_3] [i_3] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_2] [i_7])) ? (((/* implicit */int) (unsigned short)49152)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_2] [i_3] [12] [i_3])))))));
                }
                for (long long int i_13 = 0; i_13 < 22; i_13 += 2) 
                {
                    arr_41 [i_2] [i_2] [i_13] = ((/* implicit */unsigned char) (-(1856468926)));
                    var_37 = (+(((((/* implicit */_Bool) var_12)) ? (258048U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_2])) && (((/* implicit */_Bool) arr_30 [i_2])))))))));
                }
                for (unsigned long long int i_14 = 2; i_14 < 20; i_14 += 1) 
                {
                    var_38 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) 1048575)) ^ (arr_17 [(unsigned short)14] [i_3] [i_3] [i_3] [i_3] [i_3]))) >= (((arr_20 [i_2 - 2] [i_3] [i_2 - 2]) * (65535ULL)))));
                    var_39 = arr_30 [i_14];
                    /* LoopNest 2 */
                    for (int i_15 = 3; i_15 < 21; i_15 += 2) 
                    {
                        for (unsigned short i_16 = 0; i_16 < 22; i_16 += 4) 
                        {
                            {
                                var_40 ^= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_43 [i_14])) >> (((/* implicit */int) arr_7 [(short)15]))))), (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)399))))), (1362459875763233732ULL)))));
                                arr_51 [i_2] [i_3] [i_14 + 2] [i_16] = ((/* implicit */int) 7234834519705875196ULL);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_17 = 0; i_17 < 22; i_17 += 4) 
                    {
                        var_41 = ((/* implicit */unsigned long long int) var_7);
                        arr_56 [i_17] [i_14] [i_3] [i_2] = ((/* implicit */unsigned short) (((+(max((((/* implicit */unsigned long long int) 2147483647)), (17636771281823464155ULL))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
                        arr_57 [i_14] [i_14] [i_14] = ((/* implicit */unsigned int) var_5);
                    }
                    for (unsigned short i_18 = 1; i_18 < 21; i_18 += 4) 
                    {
                        var_42 = ((/* implicit */int) ((var_4) * (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_33 [i_2] [i_2] [i_2] [i_2 + 3])))), (((((/* implicit */int) var_15)) + (((/* implicit */int) arr_26 [i_2] [i_2] [i_14 + 1] [i_3] [i_2 + 1])))))))));
                        /* LoopSeq 2 */
                        for (short i_19 = 1; i_19 < 21; i_19 += 3) 
                        {
                            arr_63 [i_19] [i_18] [i_19] [i_14] [i_19] [i_2] [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) ? (arr_42 [i_2 + 3]) : (arr_42 [i_2 - 2]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))));
                            var_43 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned short) arr_39 [i_2 - 2] [i_19 - 1] [3U]))), ((~(((((/* implicit */_Bool) arr_25 [i_2] [i_2] [i_19] [i_18] [i_19 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)111))) : (arr_44 [i_2] [i_2 - 1] [i_2] [i_2 + 1])))))));
                            var_44 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) (+(1703819356)))), (max((((/* implicit */unsigned long long int) (signed char)111)), (arr_40 [i_2] [i_2] [i_2] [i_2]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2 + 1]))) : (arr_32 [i_2 + 3] [i_14 + 1] [i_18 + 1] [i_19 - 1] [i_19 + 1]))))));
                            arr_64 [i_2] [i_3] [i_14 - 2] [i_19] [i_19] = ((/* implicit */_Bool) arr_39 [i_19] [i_14] [i_3]);
                        }
                        /* vectorizable */
                        for (int i_20 = 0; i_20 < 22; i_20 += 3) 
                        {
                            var_45 = var_18;
                            var_46 = ((/* implicit */_Bool) (+(arr_6 [i_18] [i_18 + 1])));
                            var_47 = ((/* implicit */unsigned long long int) 266338304);
                            var_48 = ((/* implicit */unsigned long long int) ((unsigned int) 1152921496016912384ULL));
                        }
                    }
                }
            }
        } 
    } 
}
