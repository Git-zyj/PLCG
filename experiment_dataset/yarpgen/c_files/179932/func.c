/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179932
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
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) 4294967295U);
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) ^ (arr_3 [i_1 + 4] [i_1 - 1] [i_0 + 2])))));
                arr_6 [i_0] [8] [(_Bool)1] |= ((/* implicit */unsigned short) min((((17756017413602593297ULL) | (((/* implicit */unsigned long long int) -1040562337)))), (((/* implicit */unsigned long long int) ((_Bool) ((var_16) ^ (((/* implicit */long long int) (-2147483647 - 1)))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_2 = 4; i_2 < 9; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        var_18 ^= ((/* implicit */unsigned short) (unsigned char)245);
                        arr_17 [i_2] [(_Bool)1] [i_5] [i_5] = ((/* implicit */signed char) (!((_Bool)1)));
                    }
                    for (short i_6 = 2; i_6 < 10; i_6 += 4) 
                    {
                        arr_21 [i_6] [i_3] [i_4] [i_6] [i_4] = ((/* implicit */short) ((unsigned short) arr_4 [i_2 - 3]));
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (var_12))))));
                    }
                    for (signed char i_7 = 3; i_7 < 11; i_7 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_8 = 2; i_8 < 9; i_8 += 2) 
                        {
                            var_20 = ((/* implicit */_Bool) var_16);
                            arr_27 [i_2] [i_2] [i_2] [i_7 + 1] [(unsigned short)9] [i_8 + 3] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)(-32767 - 1))))) == (0ULL));
                            arr_28 [i_2] [i_2] [i_2] = ((/* implicit */signed char) arr_11 [i_8 + 3] [i_2 + 2] [i_3] [i_8 + 3]);
                            arr_29 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((signed char) ((65535) * (((/* implicit */int) var_5)))));
                            var_21 = ((/* implicit */int) arr_8 [i_2] [4ULL]);
                        }
                        for (short i_9 = 1; i_9 < 11; i_9 += 2) /* same iter space */
                        {
                            arr_33 [i_9] = ((/* implicit */long long int) arr_2 [i_2 - 1]);
                            arr_34 [i_2] [i_3] [i_3] [i_9] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((2147483647) << (((arr_0 [i_2 - 1] [i_7 - 3]) - (3785382091205293083ULL)))));
                        }
                        for (short i_10 = 1; i_10 < 11; i_10 += 2) /* same iter space */
                        {
                            var_22 += ((/* implicit */short) ((((/* implicit */int) (short)27)) & (-2147483647)));
                            arr_37 [i_2] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) & (((arr_35 [i_3] [i_3]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_2] [i_2] [i_2] [i_2]))))));
                            arr_38 [i_2] [i_3] [i_3] [i_4] [1] [i_3] [i_10] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)29227)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) / (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)41146)) / (1023))))));
                        }
                        arr_39 [(_Bool)1] [i_7] [i_7] [i_7] = ((/* implicit */short) (+(((((/* implicit */long long int) ((/* implicit */int) var_6))) + (var_16)))));
                        arr_40 [i_2] [i_2] [i_4] [i_2] = ((/* implicit */unsigned short) ((_Bool) ((-1040562338) | (-666557920))));
                        arr_41 [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((unsigned short) arr_23 [i_7 - 1] [i_4] [i_3] [i_2 + 1]));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_2] [(unsigned short)6] [i_2 + 1] [i_7 - 2]))) : (0U)));
                    }
                    /* LoopSeq 2 */
                    for (short i_11 = 0; i_11 < 12; i_11 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_12 = 0; i_12 < 12; i_12 += 2) 
                        {
                            arr_47 [i_3] [i_4] [i_12] = ((unsigned long long int) (unsigned short)65533);
                            arr_48 [i_2] [i_3] [i_4] [i_4] [i_12] = ((/* implicit */unsigned short) ((((unsigned int) (unsigned short)65533)) <= (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_9))))));
                        }
                        arr_49 [i_2] [i_2] [i_4] [4] [i_2] = ((((/* implicit */long long int) 4294967283U)) > (36028797018963967LL));
                        var_24 += ((/* implicit */short) 134217727);
                        arr_50 [i_3] [i_11] = ((/* implicit */_Bool) ((int) arr_22 [i_2] [i_2] [i_2 + 3] [i_2]));
                        var_25 = ((/* implicit */_Bool) var_6);
                    }
                    for (int i_13 = 2; i_13 < 11; i_13 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                        {
                            arr_57 [(_Bool)1] [i_3] [i_4] [i_4] [i_14] = ((/* implicit */unsigned short) ((1383091317) | (-310941601)));
                            var_26 += ((/* implicit */unsigned long long int) 2147483641);
                            arr_58 [i_14] [i_14] [i_14] [(short)4] [(short)2] = ((/* implicit */unsigned short) ((arr_3 [i_2 + 1] [i_13 - 1] [i_14]) == (((/* implicit */unsigned long long int) var_2))));
                            arr_59 [i_13] [i_14] [i_13] [i_13] [i_13] = ((/* implicit */unsigned short) 310941600);
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */int) ((short) arr_42 [i_2 + 2]));
                            arr_63 [i_2] [(short)3] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1861381867)) ? ((+(-402727950))) : (arr_20 [i_2])));
                            arr_64 [i_2] [i_15] [i_4] [i_13] [(_Bool)1] = var_13;
                        }
                        for (unsigned short i_16 = 0; i_16 < 12; i_16 += 1) 
                        {
                            var_28 = ((/* implicit */int) ((short) arr_11 [i_2 - 3] [(unsigned short)9] [i_4] [i_16]));
                            arr_68 [i_2] [i_4] [i_2] = ((int) var_16);
                        }
                        var_29 = ((/* implicit */short) ((int) 6177293016520080187ULL));
                    }
                    /* LoopSeq 4 */
                    for (int i_17 = 0; i_17 < 12; i_17 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            var_30 = arr_70 [i_2] [i_2];
                            arr_75 [i_2] [i_2] [i_17] [i_18] = ((/* implicit */short) ((unsigned char) ((((/* implicit */int) arr_66 [i_2] [i_3] [i_4] [i_4] [i_18] [i_18])) | (((/* implicit */int) arr_10 [7U])))));
                            var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)-4979)))))));
                            arr_76 [i_2 + 2] [i_2 - 1] [i_4] [i_2 + 2] [i_18] [i_18] = ((/* implicit */short) ((((/* implicit */int) arr_67 [i_2 - 3] [i_2 - 4] [i_2 + 1] [i_2 - 4] [i_2 - 1])) / (((/* implicit */int) var_10))));
                        }
                        arr_77 [i_17] [i_17] [i_4] [i_2] [i_2] [i_2] = ((/* implicit */short) arr_9 [i_2] [i_3]);
                        arr_78 [i_2] [(unsigned short)2] [5] [i_2] = ((/* implicit */short) ((-1) / (arr_20 [i_2 - 1])));
                        arr_79 [(short)6] [i_2] [i_3] [(short)6] [i_17] = ((/* implicit */int) var_5);
                    }
                    for (int i_19 = 0; i_19 < 12; i_19 += 1) 
                    {
                        var_32 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((short) (short)-4977)))));
                        arr_83 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) ((arr_19 [i_2 + 1] [i_2 + 2] [i_2 - 2]) | (((/* implicit */unsigned int) arr_11 [i_2] [i_3] [i_4] [i_19]))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_20 = 0; i_20 < 12; i_20 += 4) 
                        {
                            arr_86 [i_2 + 2] [i_3] [i_4] [(_Bool)1] [i_20] = ((((/* implicit */_Bool) (-2147483647 - 1))) ? ((-(10040566735397203524ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)240)) < (((/* implicit */int) (short)126)))))));
                            arr_87 [i_20] [i_20] [i_20] = ((((((/* implicit */long long int) ((/* implicit */int) arr_52 [i_20] [i_19] [i_4] [(_Bool)1] [6ULL] [i_2]))) / (var_2))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_67 [i_2] [i_3] [(short)9] [(short)9] [i_20])))))));
                            arr_88 [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_67 [i_2] [i_3] [i_4] [i_3] [i_20]);
                            arr_89 [i_2] = ((/* implicit */_Bool) ((signed char) arr_22 [i_3] [i_3] [i_3] [i_3]));
                        }
                        var_33 ^= ((/* implicit */int) ((unsigned long long int) ((signed char) (short)-149)));
                    }
                    for (unsigned long long int i_21 = 0; i_21 < 12; i_21 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            arr_96 [i_2] [i_3] [i_4] [i_21] [i_4] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) arr_45 [i_2] [2ULL] [(unsigned short)11] [i_22])) <= (((/* implicit */int) (short)-27573)))));
                            var_34 = (!(((_Bool) var_1)));
                        }
                        var_35 ^= ((/* implicit */long long int) (-(1U)));
                        var_36 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_44 [i_2] [i_3] [i_4] [i_21])) == (((/* implicit */int) var_3))))) <= (((/* implicit */int) ((signed char) var_16)))));
                    }
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        arr_99 [i_2] [i_3] [i_4] [i_23] = ((/* implicit */unsigned long long int) ((arr_20 [i_2 + 3]) < (((/* implicit */int) ((short) (short)-24450)))));
                        var_37 = ((/* implicit */int) min((var_37), ((-(((/* implicit */int) arr_66 [i_2] [3ULL] [i_2 - 1] [i_3] [3ULL] [i_3]))))));
                        arr_100 [i_2] [i_2] [i_3] [(_Bool)1] [i_4] [(unsigned char)4] = ((/* implicit */unsigned short) var_2);
                    }
                    arr_101 [i_2 - 3] [i_2 - 3] [i_2 - 3] = ((/* implicit */unsigned short) (-(((unsigned long long int) (short)-8230))));
                }
            } 
        } 
        var_38 = ((/* implicit */short) ((((/* implicit */int) (short)157)) + (((int) (-2147483647 - 1)))));
        var_39 += ((arr_16 [(unsigned short)0] [(unsigned short)0] [i_2 - 4] [(unsigned short)0] [(short)10] [i_2 - 1]) >> (((/* implicit */int) var_4)));
        arr_102 [i_2] [i_2] = ((/* implicit */long long int) ((int) var_1));
    }
}
