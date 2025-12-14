/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142688
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 7; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_1] [i_2] [i_2] [i_3] [i_4] [i_2] &= ((((/* implicit */long long int) (-(((arr_9 [i_2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))) & (((long long int) min((((/* implicit */unsigned long long int) var_5)), (arr_6 [i_1] [i_2])))));
                                var_10 = ((/* implicit */unsigned char) ((arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0 + 1]) % (((/* implicit */long long int) ((-457500530) + (-1))))));
                                arr_16 [i_2] &= ((/* implicit */short) max((((/* implicit */unsigned int) 469762048)), ((+(arr_9 [i_2])))));
                                var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) arr_3 [i_3] [i_4]))));
                            }
                        } 
                    } 
                    arr_17 [i_1] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) ((short) arr_4 [i_1] [i_2]))) * (0))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */int) ((unsigned long long int) max((((var_5) + (var_4))), (((/* implicit */long long int) ((unsigned short) (-2147483647 - 1)))))));
    /* LoopSeq 1 */
    for (short i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            for (short i_7 = 0; i_7 < 22; i_7 += 4) 
            {
                for (unsigned int i_8 = 0; i_8 < 22; i_8 += 2) 
                {
                    {
                        arr_30 [i_5] = ((/* implicit */short) (~(1405849530U)));
                        var_13 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_0)) ? (((long long int) (_Bool)0)) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_5])) ? (1405849530U) : (((/* implicit */unsigned int) 1073741823)))))))));
                        arr_31 [i_5] [i_8] [i_5] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_27 [i_5] [i_6] [i_7] [i_8]) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (short)-28862)))))) ? (((((/* implicit */_Bool) (short)24)) ? (4294967295U) : (arr_21 [i_5] [i_8]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_2)), (var_3)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) 47425784U)))) || (((/* implicit */_Bool) max((arr_19 [i_5]), ((short)-50)))))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) 1236853259)) : (6960604348581292604ULL)))));
                        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (((+((-(arr_24 [i_5] [i_6] [i_7] [i_8]))))) >> (((arr_18 [i_8]) - (3189406315U))))))));
                        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) arr_25 [i_7] [i_6] [i_8]))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 22; i_9 += 4) 
        {
            for (unsigned short i_10 = 0; i_10 < 22; i_10 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (long long int i_12 = 2; i_12 < 20; i_12 += 2) 
                        {
                            {
                                arr_43 [i_5] [i_9] [i_5] [i_11] [i_11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_23 [i_9] [i_10] [i_5] [i_12 + 2]))));
                                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) max((arr_41 [i_12 - 1] [i_11] [i_11] [i_10] [i_9] [i_5]), (max(((unsigned short)23283), (((/* implicit */unsigned short) var_3)))))))) * (((((var_4) < (((/* implicit */long long int) -1236853241)))) ? (var_5) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_19 [i_5])))))))));
                                arr_44 [i_5] [i_5] [i_9] [i_5] [i_11] [i_11] [i_12 + 1] = (+((~(arr_37 [i_12 - 2] [i_5] [i_11]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 0; i_13 < 22; i_13 += 1) 
                    {
                        for (long long int i_14 = 0; i_14 < 22; i_14 += 1) 
                        {
                            {
                                arr_52 [i_5] [i_5] = ((/* implicit */unsigned int) ((short) arr_37 [i_14] [i_5] [i_10]));
                                var_17 &= ((/* implicit */unsigned short) (short)15);
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_15 = 3; i_15 < 21; i_15 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_5] [i_9] [i_10])))))) & (((((/* implicit */_Bool) (-2147483647 - 1))) ? (4194303U) : (((/* implicit */unsigned int) 1236853240))))))));
                        arr_55 [i_9] [i_5] [i_9] [i_10] [i_15 - 3] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_37 [i_9] [i_9] [i_15 - 3]))));
                    }
                    for (short i_16 = 0; i_16 < 22; i_16 += 4) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_17 = 2; i_17 < 21; i_17 += 4) 
                        {
                            arr_60 [i_5] [i_17 - 1] [i_10] [i_5] [i_17 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_0) / (((/* implicit */unsigned int) 33554431))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)0))));
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((arr_37 [i_17 - 1] [i_17] [i_5]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_5] [i_5] [i_5] [i_10] [i_5] [i_5])))))) ? (((/* implicit */unsigned long long int) arr_50 [i_17 - 1] [i_17 + 1] [i_17 + 1] [i_17 - 2] [i_17 - 2] [i_17 - 2])) : ((+(2514394438888484269ULL))))))));
                            var_20 = arr_58 [i_9] [i_10] [i_10] [i_17 - 2] [i_17 - 2] [i_17 - 1] [i_17 + 1];
                        }
                        /* vectorizable */
                        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                        {
                            arr_63 [i_9] [i_5] [i_9] [i_9] = ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_7)))) + ((~(9223372036854775807LL))));
                            var_21 -= ((/* implicit */unsigned long long int) ((_Bool) arr_29 [i_5] [i_10] [i_18 - 1]));
                            var_22 = arr_59 [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18 - 1];
                        }
                        var_23 -= ((/* implicit */long long int) (+((-(((/* implicit */int) (_Bool)1))))));
                        var_24 = ((/* implicit */_Bool) min((((((/* implicit */int) (_Bool)1)) % (-1236853241))), (1073741823)));
                    }
                    /* vectorizable */
                    for (unsigned short i_19 = 2; i_19 < 20; i_19 += 2) 
                    {
                        arr_66 [i_5] [i_10] = ((((/* implicit */_Bool) 12089336084452252963ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))) : (266338304U));
                        var_25 = ((/* implicit */long long int) var_0);
                        arr_67 [i_5] [i_5] [i_9] [i_5] [i_19 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1236853231)) || (((/* implicit */_Bool) arr_64 [i_5]))));
                        var_26 = (((+(var_4))) & (arr_57 [i_19 - 2] [i_19 - 1] [i_19 - 2] [i_19 + 2]));
                        var_27 = ((/* implicit */_Bool) min((var_27), (((((/* implicit */_Bool) arr_65 [i_5] [i_10] [i_19 + 1] [i_19 - 2] [i_19 - 2])) || (((((/* implicit */unsigned int) 2147483647)) >= (503316480U)))))));
                    }
                    /* vectorizable */
                    for (int i_20 = 1; i_20 < 20; i_20 += 3) 
                    {
                        arr_71 [i_5] [i_5] [i_10] [i_20 - 1] [i_20 - 1] [i_5] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned short)65535)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                        var_28 = ((/* implicit */int) var_2);
                    }
                    /* LoopNest 2 */
                    for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) 
                    {
                        for (short i_22 = 3; i_22 < 21; i_22 += 3) 
                        {
                            {
                                arr_77 [i_21 + 1] [i_9] [i_10] [i_21 + 1] [i_22 - 2] [i_22 + 1] [i_10] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 71987225293750272LL)) ? (3791650823U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_5] [i_9] [i_10] [i_22 - 3])))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8191))) / (min((((/* implicit */long long int) var_3)), (var_5))))) : (((((/* implicit */_Bool) var_5)) ? (arr_54 [i_21 + 1] [i_21 + 1] [i_9] [i_21 + 1]) : (4611686018393833472LL)))));
                                var_29 = ((/* implicit */_Bool) arr_57 [i_22 + 1] [i_21 + 1] [i_21 + 1] [i_21 + 1]);
                                var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_5] [i_9] [i_10] [i_21 + 1] [i_22 - 1])) && (((/* implicit */_Bool) arr_40 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_5]))))), (((arr_58 [i_5] [i_9] [i_10] [i_10] [i_10] [i_21 + 1] [i_22 - 1]) & (((/* implicit */long long int) 310140314))))))) ? (((/* implicit */int) ((((/* implicit */long long int) arr_62 [i_21 + 1] [i_21 + 1] [i_22 + 1] [i_5] [i_22 - 2] [i_22 + 1])) == (((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_5] [i_9] [i_10])))))))) : (((/* implicit */int) ((unsigned short) arr_46 [i_21 + 1] [i_22 + 1] [i_22 + 1] [i_22 + 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
