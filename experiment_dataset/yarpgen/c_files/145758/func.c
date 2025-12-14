/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145758
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
    for (int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((2143532198), (-2143532198)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) ((unsigned short) min((872806965), (var_19)))))));
                /* LoopSeq 4 */
                for (int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        arr_11 [i_1] [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_9 [i_1 + 2] [i_2] [i_3] [i_3]))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            arr_14 [i_0 - 2] [i_1 - 3] [i_2] [i_1] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)115)) + (arr_7 [i_0]))))));
                            arr_15 [i_0 - 2] [i_0 - 2] [i_0 - 1] [i_0] [i_1] [i_0 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_1 + 2] [i_2] [i_1 - 1])) ? (((/* implicit */long long int) arr_3 [i_0 + 1])) : (arr_9 [i_0 - 2] [i_1] [i_2] [i_1 - 1])));
                            arr_16 [i_0] [i_0] [i_2] [i_1] [i_4] [i_3] = ((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_1 + 1])) ? (arr_3 [i_3]) : (((((/* implicit */_Bool) arr_1 [i_4] [i_4])) ? (117440512) : (((/* implicit */int) var_2)))));
                            arr_17 [i_0 - 2] [i_0] |= ((/* implicit */unsigned short) (-(((int) var_8))));
                        }
                        arr_18 [i_0 - 2] [i_1] [i_3] = ((/* implicit */long long int) arr_6 [i_1] [i_1] [i_3]);
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_3] = ((((/* implicit */_Bool) arr_6 [i_1 + 2] [i_1 + 2] [i_1 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 - 3] [i_1 + 2] [i_1 - 3]))) : (var_5));
                        arr_20 [i_0] [i_3] [i_0] [i_0 - 1] |= ((((/* implicit */_Bool) (+(arr_4 [i_3])))) ? (((/* implicit */long long int) 2143532198)) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65512))) : (-6825688734205639356LL))));
                    }
                    arr_21 [i_0] [i_1 - 2] [i_1 + 2] [i_0] |= ((/* implicit */int) min((min((arr_12 [i_0 - 2] [i_0 - 2] [i_0] [i_0] [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (1645004701) : (((/* implicit */int) arr_6 [i_1] [i_1 - 3] [i_2]))))))), (min((min((var_7), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) ((((/* implicit */long long int) 77182672)) >= (var_5))))))));
                    arr_22 [i_0] = ((/* implicit */int) (((!(((/* implicit */_Bool) (signed char)123)))) ? (var_15) : (((((/* implicit */_Bool) 1561734950)) ? (((/* implicit */long long int) 1758357710)) : (-6825688734205639356LL)))));
                    arr_23 [i_1] [i_1] [i_2] = (~(max((((((/* implicit */_Bool) arr_0 [i_2])) ? (var_10) : (var_14))), (((((/* implicit */_Bool) (signed char)101)) ? (var_10) : (((/* implicit */int) arr_0 [i_0])))))));
                }
                /* vectorizable */
                for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    arr_27 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) -9199038142038513856LL);
                    arr_28 [i_0] [i_1] |= (-2147483647 - 1);
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 22; i_6 += 4) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (long long int i_8 = 0; i_8 < 22; i_8 += 4) 
                        {
                            arr_37 [i_1] [i_1] [i_6] = ((/* implicit */signed char) ((unsigned short) (-(((/* implicit */int) (unsigned short)1023)))));
                            arr_38 [i_1] = ((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) / (arr_9 [i_0 - 1] [i_0] [i_0 + 1] [i_0]));
                        }
                        for (int i_9 = 0; i_9 < 22; i_9 += 4) /* same iter space */
                        {
                            arr_42 [i_0] [i_0] [i_6] [i_1] [i_6] = ((/* implicit */long long int) arr_32 [i_1] [i_0] [i_0] [i_1] [i_0 - 1]);
                            arr_43 [i_0 + 2] [i_1 + 2] [i_6] [i_1] [i_0 + 1] = (~(((/* implicit */int) arr_24 [i_1 - 2] [i_1 + 1] [i_1])));
                        }
                        for (int i_10 = 0; i_10 < 22; i_10 += 4) /* same iter space */
                        {
                            arr_47 [i_1] [i_1] = ((int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)124))) == (var_15)));
                            arr_48 [i_0 - 2] [i_1 - 2] [i_6] [i_10] [i_10] |= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) -7123457938906297439LL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned short)12551))))) / (((long long int) arr_33 [i_1] [i_6] [i_7] [i_7]))));
                            arr_49 [i_0 - 1] [i_1] [i_6] [i_7] [i_0] [i_10] |= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_45 [i_6] [i_0 - 2] [i_6] [i_1 + 2] [i_6]))))));
                            arr_50 [i_1] [i_1] [i_1 - 1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                        }
                        arr_51 [i_1] [i_1] [i_1] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)124)) ? (7LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-90)))));
                        arr_52 [i_0] [i_0 - 1] [i_0 + 2] [i_1] [i_0] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)104))) > (arr_36 [i_0 - 1] [i_0 + 1] [i_1 + 2] [i_0 - 1] [i_7])));
                    }
                    for (signed char i_11 = 0; i_11 < 22; i_11 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_12 = 3; i_12 < 21; i_12 += 2) 
                        {
                            arr_61 [i_6] [i_12] [i_12] [i_12] [i_12 - 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 2])) ? (arr_34 [i_12 - 2] [i_12] [i_12 - 1] [i_12] [i_12]) : (arr_40 [i_0] [i_0] [i_1] [i_6] [i_11] [i_0])));
                            arr_62 [i_0 + 2] [i_6] [i_0 - 1] [i_0] [i_0 + 2] [i_0 + 2] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_0] [i_1 - 1] [i_1 - 1] [i_11] [i_12 - 1])) ? (arr_12 [i_0 + 2] [i_0 + 2] [i_0] [i_0] [i_0 + 1]) : (arr_12 [i_0 + 1] [i_1] [i_1 + 1] [i_11] [i_12])));
                            arr_63 [i_0] [i_1 - 2] [i_6] [i_1] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)51194)) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_12 - 3] [i_12 - 3] [i_1]))) : (arr_12 [i_12] [i_12] [i_12] [i_12 - 2] [i_12 + 1])));
                        }
                        arr_64 [i_1] = ((/* implicit */int) arr_26 [i_6]);
                        arr_65 [i_11] [i_1] [i_6] [i_6] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_31 [i_0 - 1] [i_0 - 1] [i_1 - 2] [i_1 + 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)23))))) : (((long long int) var_1))));
                    }
                    arr_66 [i_0 - 1] [i_1] [i_6] = ((/* implicit */signed char) ((9038705698252428087LL) / (((/* implicit */long long int) -745736368))));
                    arr_67 [i_6] [i_1] = ((((/* implicit */_Bool) arr_36 [i_0] [i_0] [i_0 - 2] [i_0 - 2] [i_6])) ? (arr_36 [i_0 + 1] [i_0] [i_0 - 2] [i_1 - 1] [i_1 + 2]) : (arr_36 [i_0 - 1] [i_0 + 2] [i_0 - 2] [i_0] [i_0 + 2]));
                    arr_68 [i_0] [i_1] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) 6825688734205639348LL)) ? (7725674635987201838LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)115)))));
                }
                for (unsigned short i_13 = 1; i_13 < 20; i_13 += 1) 
                {
                    arr_72 [i_1] [i_13 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_31 [i_1] [i_1 - 2] [i_1] [i_1 - 3]), (((/* implicit */unsigned short) (signed char)-118))))) ? (((((/* implicit */int) arr_1 [i_0] [i_1 - 1])) + (((/* implicit */int) (unsigned short)27728)))) : (max((((/* implicit */int) arr_60 [i_0] [i_0] [i_0] [i_1] [i_1])), (745736357)))))) ? (var_4) : (((int) (!(((/* implicit */_Bool) var_10)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 0; i_14 < 22; i_14 += 3) 
                    {
                        for (int i_15 = 2; i_15 < 21; i_15 += 4) 
                        {
                            {
                                arr_77 [i_0] [i_1 - 2] [i_0] [i_1] [i_15 + 1] = ((/* implicit */signed char) max(((+(arr_57 [i_1] [i_1] [i_1 - 2] [i_1] [i_1] [i_1 - 2]))), (((/* implicit */long long int) min((398519711), (2139095040))))));
                                arr_78 [i_1] = ((/* implicit */int) var_6);
                                arr_79 [i_0 + 1] [i_0] [i_13 - 1] [i_0 + 1] [i_15] [i_15] |= max(((((!(((/* implicit */_Bool) -2139095040)))) ? ((~(2139956471539015695LL))) : (((/* implicit */long long int) min((arr_39 [i_0] [i_0] [i_0] [i_0] [i_0 - 2] [i_0] [i_0]), (((/* implicit */int) (unsigned short)14320))))))), (((/* implicit */long long int) max(((-2147483647 - 1)), (((/* implicit */int) (signed char)18))))));
                                arr_80 [i_0] [i_0] [i_13] [i_13] [i_15] |= min((((/* implicit */unsigned short) ((min((((/* implicit */long long int) (signed char)127)), (arr_57 [i_0] [i_0] [i_1 - 2] [i_13 - 1] [i_14] [i_15 - 2]))) > (min((arr_33 [i_0] [i_1 + 2] [i_1 + 2] [i_15 + 1]), (((/* implicit */long long int) arr_3 [i_13]))))))), (min(((unsigned short)38988), ((unsigned short)51194))));
                            }
                        } 
                    } 
                    arr_81 [i_1] [i_1] [i_13] = ((/* implicit */int) (~(var_5)));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (unsigned short)51194)))) : ((+(((/* implicit */int) (unsigned short)52940)))))))));
}
