/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107647
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 4; i_3 < 19; i_3 += 2) 
                    {
                        arr_12 [i_3] [i_3 - 1] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */int) ((unsigned short) arr_10 [i_1 - 3] [i_1 - 3] [i_1 - 2] [i_3 - 2]));
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (unsigned char)233)), (arr_9 [i_0] [i_0] [i_1] [i_3] [i_0] [i_0])));
                        arr_14 [i_2] [i_2] [i_1] [i_2] |= ((/* implicit */short) min(((unsigned short)32768), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) (unsigned char)255))))))));
                        arr_15 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */long long int) var_7);
                    }
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            arr_21 [i_0] [i_5] [i_1] [i_2] [i_5] [i_4] [(short)10] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(1278971479))))));
                            arr_22 [i_0] [i_4] [i_0] [i_0] [i_5] = ((/* implicit */unsigned short) -649963379);
                        }
                        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            arr_25 [i_0] [i_2] [i_2] [10ULL] [i_2] [4U] = ((/* implicit */int) arr_7 [i_2] [i_2] [i_1] [i_2]);
                            arr_26 [i_0] [i_0] [i_2] [i_6] [i_6] = ((/* implicit */int) ((long long int) -8613882841426021593LL));
                        }
                        arr_27 [i_4] [i_4] [i_4] [i_4] [i_1] [8] = ((/* implicit */long long int) arr_17 [(unsigned short)13] [(unsigned short)13] [i_0] [i_0] [i_0]);
                        arr_28 [i_2] [i_2] [i_0] = arr_23 [i_4] [i_1 - 3] [i_1] [12] [i_1] [i_1 - 2] [i_1 - 1];
                    }
                    /* LoopSeq 4 */
                    for (short i_7 = 3; i_7 < 19; i_7 += 3) 
                    {
                        arr_31 [i_2] [i_2] |= ((/* implicit */short) ((int) arr_3 [i_2] [i_1] [i_0]));
                        arr_32 [i_0] [i_0] = ((/* implicit */int) arr_1 [i_2]);
                        arr_33 [i_0] [i_7 + 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned int) ((unsigned char) ((int) var_3))));
                    }
                    for (unsigned short i_8 = 1; i_8 < 19; i_8 += 1) 
                    {
                        arr_38 [i_1] [i_1] [i_2] [i_8] [i_2] = ((/* implicit */unsigned int) var_7);
                        arr_39 [i_1] [i_2] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) 1278971485);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_9 = 1; i_9 < 16; i_9 += 3) 
                    {
                        arr_42 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) (unsigned short)39527)))));
                        /* LoopSeq 2 */
                        for (unsigned int i_10 = 4; i_10 < 17; i_10 += 1) 
                        {
                            arr_45 [i_0] [i_1] [i_2] [i_2] [i_9] [i_9] [i_10] = ((/* implicit */short) 4892348796479618243LL);
                            arr_46 [i_0] [i_0] [i_0] [i_0] [i_0] = (unsigned short)32768;
                        }
                        for (unsigned long long int i_11 = 2; i_11 < 17; i_11 += 1) 
                        {
                            arr_50 [i_0] [i_1] [i_0] [i_2] [i_9] [i_9] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) arr_16 [i_0] [i_2])))));
                            arr_51 [i_0] = ((/* implicit */int) (unsigned short)53719);
                            arr_52 [(unsigned short)6] [i_1] [i_2] [i_9] [(unsigned char)18] [i_11] = ((long long int) arr_0 [i_0] [i_0]);
                            arr_53 [i_0] [i_2] [i_9] = arr_37 [i_0] [i_0] [i_2] [i_0];
                        }
                        arr_54 [i_2] [i_2] &= ((/* implicit */long long int) (short)-9288);
                    }
                    for (unsigned short i_12 = 0; i_12 < 20; i_12 += 4) 
                    {
                        arr_57 [i_1] [i_1] [i_0] [i_12] = ((/* implicit */long long int) (unsigned short)41735);
                        arr_58 [i_12] [i_1 - 3] [i_1] [i_0] [i_2] = ((/* implicit */long long int) -342924973);
                        /* LoopSeq 3 */
                        for (short i_13 = 0; i_13 < 20; i_13 += 4) 
                        {
                            arr_61 [(unsigned short)13] [i_0] [i_2] [(unsigned short)1] [i_2] = ((/* implicit */unsigned int) arr_17 [i_0] [i_1] [i_2] [i_12] [i_12]);
                            arr_62 [i_0] [i_12] [i_1 - 1] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)56388);
                        }
                        for (short i_14 = 1; i_14 < 18; i_14 += 4) /* same iter space */
                        {
                            arr_65 [i_0] [i_0] [i_0] [11ULL] [i_14 + 1] = ((/* implicit */unsigned long long int) arr_24 [i_0]);
                            arr_66 [i_14] [i_12] [i_0] [i_0] [i_0] [i_0] = ((unsigned short) -1380050704);
                            arr_67 [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_2);
                            arr_68 [i_0] [i_0] [i_12] = ((/* implicit */_Bool) ((int) arr_24 [i_0]));
                        }
                        /* vectorizable */
                        for (short i_15 = 1; i_15 < 18; i_15 += 4) /* same iter space */
                        {
                            arr_72 [i_0] [i_1 - 3] [i_0] [i_12] [(short)5] = ((/* implicit */short) ((int) (unsigned short)26008));
                            arr_73 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned long long int) var_3));
                            arr_74 [i_0] = ((/* implicit */unsigned int) (unsigned short)39528);
                        }
                    }
                    /* LoopSeq 3 */
                    for (unsigned short i_16 = 0; i_16 < 20; i_16 += 1) 
                    {
                        arr_77 [i_0] [i_1 - 3] [i_1] [i_1] = ((/* implicit */unsigned short) 1542400740U);
                        /* LoopSeq 3 */
                        for (int i_17 = 1; i_17 < 17; i_17 += 3) 
                        {
                            arr_81 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) ((long long int) (signed char)-44)));
                            arr_82 [i_0] [i_0] [i_2] [i_0] [i_0] = (+((+(1278971479))));
                            arr_83 [i_1] [i_2] [i_16] [i_17] = (unsigned short)15649;
                        }
                        for (int i_18 = 0; i_18 < 20; i_18 += 2) 
                        {
                            arr_86 [i_18] = ((/* implicit */long long int) ((int) (-(((/* implicit */int) (signed char)35)))));
                            arr_87 [i_0] [i_0] [19LL] = (+(var_3));
                        }
                        /* vectorizable */
                        for (unsigned short i_19 = 2; i_19 < 19; i_19 += 3) 
                        {
                            arr_90 [i_0] = ((/* implicit */unsigned short) arr_70 [i_19 - 1] [i_16] [i_0] [i_1] [i_0]);
                            arr_91 [i_19 - 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) 3458764513820540928ULL);
                            arr_92 [i_1 - 1] [i_0] = ((/* implicit */short) (unsigned short)35909);
                            arr_93 [i_0] [i_1 + 2] [i_0] [i_2] [i_16] [17LL] [i_19] = ((/* implicit */int) ((long long int) var_9));
                            arr_94 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                        }
                    }
                    for (int i_20 = 0; i_20 < 20; i_20 += 4) 
                    {
                        arr_98 [i_0] [i_1] [i_0] = min((((long long int) arr_88 [i_0] [i_0] [i_0] [i_2] [i_2] [(unsigned short)9])), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_88 [i_0] [i_1] [i_0] [i_20] [i_20] [i_20]))))));
                        arr_99 [i_0] [i_1] = ((/* implicit */int) 1659130341840705946LL);
                        arr_100 [i_1 - 3] [i_1] [(unsigned short)0] [i_0] = arr_1 [i_0];
                    }
                    for (short i_21 = 0; i_21 < 20; i_21 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_22 = 0; i_22 < 20; i_22 += 2) 
                        {
                            arr_106 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) -1161214153);
                            arr_107 [i_0] [i_0] [i_22] [i_21] [i_2] = ((/* implicit */unsigned int) var_5);
                            arr_108 [15] [i_21] [i_0] [i_1 - 1] [i_0] = ((/* implicit */int) (unsigned short)12334);
                            arr_109 [i_0] [i_2] [(unsigned short)19] [i_0] [i_2] [i_21] [i_21] = ((/* implicit */int) (-(arr_18 [6] [i_1 + 1] [i_0] [i_1 + 1])));
                        }
                        arr_110 [i_0] [i_0] = ((/* implicit */unsigned short) (-(-255492709)));
                    }
                    arr_111 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((int) var_9));
                    arr_112 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) var_6);
                }
            } 
        } 
    } 
    var_10 = ((/* implicit */_Bool) (unsigned short)23545);
}
