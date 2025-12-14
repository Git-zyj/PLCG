/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116633
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_20 = ((/* implicit */signed char) ((unsigned short) max((((/* implicit */int) arr_0 [i_0])), ((-(((/* implicit */int) arr_1 [i_0])))))));
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    {
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (+(((unsigned long long int) arr_3 [i_1] [i_2] [i_3])))))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 4; i_4 < 9; i_4 += 2) 
                        {
                            arr_13 [i_0] [i_1] [5U] [i_3] [i_4] [11] [12] = ((/* implicit */int) (_Bool)0);
                            var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (arr_12 [i_0] [(signed char)11] [i_4 - 1] [5] [i_4 + 2] [i_0] [i_4 + 2]))) << (((max((arr_7 [(unsigned short)9] [i_1] [i_2] [8U]), (((/* implicit */int) arr_1 [i_0])))) - (819494607))))))));
                            arr_14 [i_2] [i_2] [i_2] = 98833506;
                        }
                    }
                } 
            } 
        } 
    }
    var_23 = var_11;
    /* LoopSeq 3 */
    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 3) 
    {
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (!(((/* implicit */_Bool) 2637782767U)))))));
        var_25 -= ((/* implicit */unsigned short) 2147483647);
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) 
    {
        var_26 = ((/* implicit */int) ((((arr_7 [12] [i_6] [10] [i_6]) != (((/* implicit */int) (signed char)106)))) ? ((+(arr_3 [(unsigned short)5] [(unsigned short)0] [i_6]))) : (arr_3 [i_6] [i_6] [0ULL])));
        /* LoopSeq 1 */
        for (signed char i_7 = 0; i_7 < 10; i_7 += 1) 
        {
            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (((_Bool)0) ? ((+(((/* implicit */int) arr_9 [i_6] [i_6] [i_6] [i_7] [i_7])))) : ((+(((/* implicit */int) (_Bool)1)))))))));
            var_28 |= ((/* implicit */unsigned long long int) (_Bool)1);
            arr_25 [i_7] [i_7] = (~(((/* implicit */int) arr_19 [i_6] [i_7])));
            var_29 = ((/* implicit */int) max((var_29), (((((/* implicit */_Bool) (signed char)124)) ? (-98833507) : (((/* implicit */int) (!(((/* implicit */_Bool) 2147483627)))))))));
        }
        arr_26 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)88))));
        /* LoopSeq 2 */
        for (int i_8 = 0; i_8 < 10; i_8 += 3) 
        {
            arr_29 [i_8] = arr_15 [i_6] [i_8];
            var_30 = ((/* implicit */unsigned int) (((+(((/* implicit */int) (signed char)0)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32640)))))));
        }
        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 4) 
        {
            /* LoopNest 3 */
            for (signed char i_10 = 0; i_10 < 10; i_10 += 1) 
            {
                for (signed char i_11 = 0; i_11 < 10; i_11 += 4) 
                {
                    for (int i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        {
                            var_31 += ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) 345216126)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_16 [i_6] [i_6])))));
                            arr_41 [i_10] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_10])) ? (arr_5 [i_6] [i_6] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1102042752U)) ? (0) : (((/* implicit */int) arr_0 [i_11])))))));
                            arr_42 [i_6] [7] [i_10] [i_11] [(unsigned short)5] [i_12] [8] = ((/* implicit */signed char) arr_15 [i_11] [i_10]);
                            var_32 = ((/* implicit */int) max((var_32), (((arr_24 [i_12] [i_9] [i_6]) << (((((/* implicit */int) arr_32 [i_6] [i_9] [i_9])) - (21)))))));
                        }
                    } 
                } 
            } 
            arr_43 [1] [i_9] [1] = ((/* implicit */unsigned int) (-(arr_18 [i_9])));
        }
    }
    /* vectorizable */
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            for (int i_15 = 4; i_15 < 11; i_15 += 1) 
            {
                {
                    var_33 = ((/* implicit */int) arr_52 [i_13]);
                    arr_54 [i_15] = ((((((/* implicit */_Bool) (signed char)50)) && (((/* implicit */_Bool) (signed char)118)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_53 [10U] [i_14]))))) : (((/* implicit */int) arr_17 [i_15])));
                    /* LoopSeq 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_17 = 0; i_17 < 14; i_17 += 3) 
                        {
                            var_34 = ((/* implicit */_Bool) (+(17723155204983989589ULL)));
                            arr_62 [i_13] [i_13] [(_Bool)1] [i_13] [i_17] [i_15] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)118))) < (3309155753U))));
                        }
                        for (unsigned short i_18 = 0; i_18 < 14; i_18 += 1) 
                        {
                            var_35 = ((/* implicit */signed char) (((+(839069185))) << (((680861796) - (680861795)))));
                            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [(_Bool)0] [(signed char)12])) ? (((/* implicit */int) arr_46 [13] [13])) : (((/* implicit */int) arr_50 [i_14] [i_16]))))) ? ((-(985811543U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-37)))));
                            var_37 = ((/* implicit */unsigned short) (~(arr_56 [5U] [i_14] [i_15 + 3] [i_15 + 2] [i_15 - 1] [i_16])));
                        }
                        for (int i_19 = 0; i_19 < 14; i_19 += 3) 
                        {
                            arr_67 [i_15] [12] [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_15])) ? (arr_18 [i_15]) : (((/* implicit */int) (_Bool)1))));
                            arr_68 [i_19] [i_15] [i_15] [i_15] [i_13] = ((/* implicit */signed char) (+(((/* implicit */int) arr_49 [i_13] [i_15 - 1] [i_15 - 2]))));
                        }
                        var_38 = ((/* implicit */unsigned long long int) arr_49 [i_15 + 2] [i_14] [i_15]);
                    }
                    for (unsigned short i_20 = 0; i_20 < 14; i_20 += 3) 
                    {
                        var_39 += ((/* implicit */unsigned int) arr_70 [i_13] [(_Bool)1] [i_15] [4] [(_Bool)1]);
                        var_40 -= (-(((/* implicit */int) (signed char)86)));
                        arr_71 [i_13] [i_15] [i_15] [12U] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_15 + 1]))) != ((+(arr_64 [(signed char)4] [(signed char)4])))));
                        var_41 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_52 [i_20])) << (((arr_63 [8U] [i_13] [i_13] [5ULL] [i_13] [i_13]) - (690710292)))))) ? (((/* implicit */unsigned long long int) ((-271575315) * (((/* implicit */int) (signed char)6))))) : (arr_44 [i_13] [i_14])));
                        /* LoopSeq 3 */
                        for (int i_21 = 0; i_21 < 14; i_21 += 3) /* same iter space */
                        {
                            arr_76 [i_13] [i_13] [i_15] [i_13] [i_20] [i_20] [i_21] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_50 [(unsigned short)4] [i_14])) : (((/* implicit */int) arr_55 [i_13] [i_15] [i_13])))) << (((unsigned int) (_Bool)1))));
                            var_42 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) 1788279775)) < (985811543U)))) - (arr_72 [0] [i_15 + 2] [(_Bool)1] [i_15] [i_15 + 2] [0])));
                            var_43 = ((/* implicit */unsigned int) ((unsigned long long int) arr_47 [i_15 - 3]));
                        }
                        for (int i_22 = 0; i_22 < 14; i_22 += 3) /* same iter space */
                        {
                            var_44 = ((/* implicit */signed char) arr_15 [21] [i_20]);
                            arr_79 [2] [2] [i_15] = (-(((/* implicit */int) (signed char)-45)));
                            var_45 = ((/* implicit */unsigned long long int) ((1788279775) != (((/* implicit */int) (unsigned short)54248))));
                            arr_80 [i_13] [i_14] [i_14] [i_20] [i_15] [i_14] [i_15] = ((/* implicit */_Bool) (signed char)50);
                        }
                        for (int i_23 = 0; i_23 < 14; i_23 += 3) /* same iter space */
                        {
                            arr_85 [i_15] [i_20] [i_23] = ((/* implicit */int) ((1409152099U) * (((/* implicit */unsigned int) -2147483628))));
                            var_46 -= ((/* implicit */unsigned short) (!(((-2147483628) < (((/* implicit */int) (signed char)-33))))));
                        }
                    }
                }
            } 
        } 
        arr_86 [i_13] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 0)) ? (((/* implicit */int) arr_55 [i_13] [0ULL] [0ULL])) : (((/* implicit */int) arr_17 [10])))) << (((((((((((/* implicit */int) (_Bool)1)) - (2147483647))) - (-2147483626))) + (49))) - (4)))));
        arr_87 [i_13] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) arr_52 [i_13]))) + (arr_69 [i_13] [0U] [(signed char)8] [i_13] [i_13])));
        /* LoopNest 3 */
        for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) 
        {
            for (unsigned short i_25 = 2; i_25 < 13; i_25 += 3) 
            {
                for (unsigned long long int i_26 = 0; i_26 < 14; i_26 += 3) 
                {
                    {
                        var_47 = ((/* implicit */int) max((var_47), (((/* implicit */int) ((((/* implicit */int) ((arr_90 [i_25]) == (-2147483627)))) > (arr_88 [i_13] [i_24]))))));
                        arr_96 [i_13] [(signed char)0] [i_25] [i_25 - 1] [i_25] [i_26] = (((_Bool)1) ? (((/* implicit */int) (unsigned short)19962)) : (((/* implicit */int) (_Bool)1)));
                        var_48 = ((/* implicit */int) arr_69 [5ULL] [i_26] [4] [5ULL] [i_13]);
                        arr_97 [i_26] [i_24] [i_26] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((1515421716) << (((2147483627) - (2147483627)))))) + (((((/* implicit */_Bool) -2147483623)) ? (((/* implicit */unsigned int) arr_18 [i_26])) : (1409152099U)))));
                        /* LoopSeq 1 */
                        for (unsigned int i_27 = 0; i_27 < 14; i_27 += 3) 
                        {
                            arr_100 [i_13] [i_26] [i_13] [i_26] [i_27] = ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)69))))) != (206855895U)));
                            arr_101 [i_13] [13] [i_13] [(signed char)1] [13] [i_26] [i_13] = (-(((/* implicit */int) (_Bool)1)));
                            arr_102 [i_13] [i_26] [i_26] [i_25] [i_27] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_88 [i_24 + 1] [i_24 + 1]))));
                            arr_103 [i_26] [i_26] [i_27] = ((/* implicit */unsigned long long int) ((signed char) ((signed char) arr_78 [4] [i_24] [i_25 - 1] [9U] [11U])));
                            var_49 += ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                        }
                    }
                } 
            } 
        } 
    }
}
