/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113890
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
    var_14 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) var_7)), (var_10)));
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned int) (unsigned short)24169)))))));
    var_16 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)6)) - (((/* implicit */int) (_Bool)0))))), (min((-2709346321290974597LL), (((/* implicit */long long int) (_Bool)1))))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        arr_2 [(unsigned short)0] = ((/* implicit */signed char) ((unsigned short) ((signed char) arr_0 [(unsigned short)6])));
        arr_3 [i_0] = ((/* implicit */signed char) (((-(((/* implicit */int) (_Bool)1)))) != ((-(((/* implicit */int) (unsigned short)18315))))));
    }
    for (int i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((_Bool) arr_4 [i_1]);
        arr_8 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_1 [i_1]) / (arr_1 [i_1])))) ? (((/* implicit */int) (!(arr_5 [i_1] [i_1])))) : (max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) <= (arr_0 [(unsigned char)4])))), (-40916222)))));
        arr_9 [i_1] [i_1] = ((/* implicit */short) var_8);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 10; i_2 += 3) /* same iter space */
    {
        arr_12 [i_2] [i_2] = ((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) var_6)))));
        arr_13 [(unsigned char)6] = ((/* implicit */_Bool) var_11);
        arr_14 [i_2] = ((/* implicit */unsigned int) (~((+(arr_0 [(unsigned short)4])))));
        arr_15 [6U] [i_2] = ((/* implicit */int) arr_10 [i_2]);
        /* LoopSeq 3 */
        for (short i_3 = 1; i_3 < 9; i_3 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                /* LoopSeq 4 */
                for (signed char i_5 = 0; i_5 < 10; i_5 += 4) /* same iter space */
                {
                    arr_25 [i_2] [i_3] [i_2] [i_5] = ((/* implicit */int) ((((arr_20 [i_2] [i_2] [i_2]) - (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) + (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0)))))));
                    arr_26 [i_2] [i_5] [i_4] [i_5] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 4048968550U))));
                    arr_27 [i_2] [i_5] [i_4] [i_5] = ((/* implicit */short) arr_0 [i_5]);
                }
                for (signed char i_6 = 0; i_6 < 10; i_6 += 4) /* same iter space */
                {
                    arr_30 [(unsigned short)3] [i_4] [i_3] = ((/* implicit */short) (~(2311797554U)));
                    arr_31 [i_2] [i_3] [i_3] [9ULL] [i_3] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) -1000359349))))) * (((/* implicit */int) arr_11 [i_3 - 1] [i_6]))));
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        arr_34 [i_2] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((_Bool) arr_16 [i_3 - 1] [i_3 + 1]));
                        arr_35 [i_2] [i_6] [i_4] [i_2] [i_7] &= ((/* implicit */_Bool) var_12);
                        arr_36 [(short)6] [i_3] [i_3 - 1] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_3 - 1])) % (((/* implicit */int) arr_10 [i_3 + 1]))));
                    }
                    for (unsigned char i_8 = 1; i_8 < 7; i_8 += 4) 
                    {
                        arr_41 [i_3] [(signed char)2] [i_4] [(_Bool)1] [9U] [(signed char)3] [i_8 + 3] = ((/* implicit */unsigned short) (short)24552);
                        arr_42 [(unsigned char)4] [(_Bool)1] [i_4] [i_6] [i_6] &= ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 4041391523U)))))));
                        arr_43 [i_3] [i_3 + 1] [i_4] [i_6] [i_8 + 2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_9)))) != ((+(16U)))));
                        arr_44 [i_4] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) -676440956)) ? ((+(arr_38 [i_2] [i_3] [i_2] [i_6] [i_3]))) : (((/* implicit */int) var_13))));
                    }
                    arr_45 [i_2] [i_3] [i_6] [i_6] = ((/* implicit */int) (!(((((/* implicit */_Bool) 7643000823039417379LL)) && (((/* implicit */_Bool) arr_19 [i_2] [i_6] [i_6]))))));
                }
                for (signed char i_9 = 0; i_9 < 10; i_9 += 4) /* same iter space */
                {
                    arr_48 [i_3] [i_4] = ((((/* implicit */int) (signed char)-81)) == (((/* implicit */int) var_12)));
                    arr_49 [i_3] = (!(((/* implicit */_Bool) (-(((/* implicit */int) var_6))))));
                    arr_50 [i_3] [i_3 + 1] [i_4] [i_4] = ((/* implicit */long long int) (-(((((/* implicit */unsigned long long int) arr_18 [i_2] [i_3 + 1])) + (arr_23 [i_2] [i_3 + 1] [i_2] [i_2])))));
                }
                for (signed char i_10 = 0; i_10 < 10; i_10 += 4) /* same iter space */
                {
                    arr_54 [i_2] [i_2] [i_3] [i_4] [i_3] [i_10] = ((/* implicit */short) var_9);
                    arr_55 [(signed char)2] [i_3] [i_4] [i_3] = ((/* implicit */_Bool) (+(686835186)));
                    arr_56 [i_2] [i_3] [(_Bool)1] [i_10] [i_3] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1962024434)) ? (((/* implicit */int) arr_40 [i_2] [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) (unsigned short)58346))));
                    arr_57 [i_3] [i_10] = ((((/* implicit */int) arr_22 [i_2] [i_2] [i_3] [i_3 - 1] [i_3])) > (0));
                }
                arr_58 [i_2] [i_3] = (!(((/* implicit */_Bool) var_11)));
                arr_59 [i_2] [i_3] [i_4] [i_2] = ((/* implicit */signed char) (short)-21831);
                arr_60 [i_2] [i_3] [i_4] [(signed char)8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_3 + 1] [i_3 + 1] [i_3 + 1])) && ((!((_Bool)1)))));
                arr_61 [i_2] [i_3] [(short)5] [i_3] = ((/* implicit */long long int) ((unsigned char) arr_18 [i_2] [i_4]));
            }
            for (unsigned int i_11 = 3; i_11 < 9; i_11 += 3) 
            {
                arr_65 [i_2] [i_3] [i_2] [i_11] = ((/* implicit */short) arr_29 [i_2] [i_3] [7ULL]);
                arr_66 [i_2] [i_2] [i_3 + 1] [4U] = ((/* implicit */int) (+(952267083039014339ULL)));
            }
            for (unsigned long long int i_12 = 1; i_12 < 9; i_12 += 1) 
            {
                arr_69 [(signed char)6] [i_12 - 1] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_11))))));
                arr_70 [i_3] [i_3 - 1] [i_12] [i_12 - 1] = ((/* implicit */unsigned long long int) ((unsigned short) arr_19 [i_3 - 1] [i_3] [(unsigned short)0]));
                arr_71 [i_2] [i_3 - 1] [i_3] = ((/* implicit */signed char) (_Bool)1);
                arr_72 [i_3] [(_Bool)1] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) % (var_9)));
            }
            arr_73 [i_2] [2U] |= (~(-6223735898790610210LL));
        }
        for (signed char i_13 = 1; i_13 < 9; i_13 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_14 = 0; i_14 < 10; i_14 += 2) 
            {
                arr_78 [i_2] [i_13] [i_14] = ((/* implicit */unsigned char) var_3);
                /* LoopSeq 1 */
                for (signed char i_15 = 0; i_15 < 10; i_15 += 4) 
                {
                    arr_81 [i_2] [i_2] [i_2] [i_13 + 1] [(signed char)6] [i_15] = ((/* implicit */unsigned char) 3020748619U);
                    /* LoopSeq 1 */
                    for (short i_16 = 0; i_16 < 10; i_16 += 1) 
                    {
                        arr_84 [i_2] [8LL] [8LL] [i_15] [i_16] = ((/* implicit */short) (~(((/* implicit */int) var_12))));
                        arr_85 [i_2] [i_2] [i_14] [i_14] = ((/* implicit */long long int) (-((-(((/* implicit */int) arr_21 [(_Bool)1] [i_14] [i_15]))))));
                        arr_86 [i_2] [(short)1] [i_16] [3] [i_16] = ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
                        arr_87 [i_2] [(short)0] [(unsigned short)0] [i_15] [(short)0] [i_16] = ((/* implicit */long long int) (+(var_9)));
                    }
                    /* LoopSeq 1 */
                    for (short i_17 = 0; i_17 < 10; i_17 += 3) 
                    {
                        arr_91 [i_2] [i_17] [5ULL] = ((/* implicit */int) ((arr_28 [i_2] [i_13 + 1] [i_15] [i_17]) <= (((/* implicit */unsigned long long int) var_9))));
                        arr_92 [i_17] = ((/* implicit */long long int) 1464149344);
                    }
                    arr_93 [i_2] [i_13 + 1] [i_14] [i_15] = ((/* implicit */_Bool) ((arr_23 [i_2] [i_13 - 1] [i_15] [i_15]) | (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_79 [i_2] [1ULL] [i_13] [i_14] [i_15] [i_15])))))));
                }
                arr_94 [i_2] = ((/* implicit */signed char) (unsigned char)255);
            }
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                arr_97 [i_18] [i_2] [i_18] [i_18] = (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)15813)) == (((/* implicit */int) var_2))))));
                /* LoopSeq 3 */
                for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                {
                    arr_101 [i_2] [i_2] [i_2] [i_18] [i_18] = ((/* implicit */_Bool) arr_83 [(unsigned short)5] [i_2] [i_2] [i_13 + 1] [i_19 - 1] [i_18]);
                    arr_102 [i_18] = ((/* implicit */short) 4826173848354866003ULL);
                    arr_103 [i_18] [i_18] [i_18] [i_18] [i_19] [1] = ((/* implicit */_Bool) (signed char)18);
                }
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    arr_106 [(signed char)8] [i_13] [(signed char)8] [(signed char)8] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0)))))));
                    /* LoopSeq 2 */
                    for (signed char i_21 = 3; i_21 < 8; i_21 += 1) 
                    {
                        arr_109 [i_2] [i_18] [i_20] [i_2] = ((/* implicit */int) (unsigned short)65535);
                        arr_110 [(_Bool)1] [i_13] [i_18] [i_20] [9U] [i_18] = ((/* implicit */_Bool) arr_67 [i_2] [i_13] [i_18]);
                        arr_111 [i_2] [i_18] [i_13] [i_18] [i_20] [i_21] = ((/* implicit */short) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_107 [i_2] [i_2] [i_18] [i_20] [i_21])))));
                    }
                    for (unsigned short i_22 = 1; i_22 < 9; i_22 += 3) 
                    {
                        arr_116 [i_2] [3LL] [5] [i_18] [i_22] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_2] [i_13] [i_18] [i_18] [i_20] [i_18] [i_22])) ? (((/* implicit */int) arr_96 [i_2] [i_13] [i_18] [i_18])) : (((/* implicit */int) var_4)))));
                        arr_117 [i_18] [i_2] [i_13] [i_18] [i_2] [i_18] [i_22] = ((/* implicit */short) (~((~(1984131539713373168LL)))));
                    }
                    arr_118 [i_2] [i_13 + 1] [(short)6] [4U] [i_18] [i_20] &= ((/* implicit */_Bool) arr_17 [(_Bool)1] [i_13 + 1] [i_18]);
                    arr_119 [(unsigned short)6] [i_13] [(short)2] [(short)2] [(signed char)4] [i_20] = ((/* implicit */unsigned int) arr_11 [i_2] [i_13 + 1]);
                }
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    arr_123 [i_2] [i_2] [i_18] [i_2] [i_23] [i_2] = (!(((/* implicit */_Bool) (signed char)-67)));
                    arr_124 [i_18] = var_11;
                    arr_125 [i_2] [i_18] [i_18] = ((/* implicit */short) var_2);
                }
            }
            arr_126 [i_2] [i_2] [i_13] = ((/* implicit */signed char) arr_113 [3U] [i_13 - 1] [i_13] [3U] [i_13 - 1] [i_13 - 1] [i_13]);
        }
        for (long long int i_24 = 0; i_24 < 10; i_24 += 1) 
        {
            arr_130 [i_24] = ((/* implicit */short) (~(((/* implicit */int) var_10))));
            arr_131 [i_2] [i_24] [i_24] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) var_7)) != (var_5))));
        }
    }
    for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
    {
        arr_135 [i_25] &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_134 [i_25]))));
        arr_136 [i_25] [i_25] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_134 [i_25 - 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(1423595931))))))) : (((/* implicit */int) arr_132 [i_25 - 1] [i_25 - 1]))));
        arr_137 [i_25] = ((/* implicit */long long int) var_1);
        arr_138 [i_25] = ((/* implicit */unsigned char) var_5);
    }
}
