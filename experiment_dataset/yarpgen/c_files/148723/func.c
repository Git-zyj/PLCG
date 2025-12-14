/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148723
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
    var_11 = ((/* implicit */unsigned char) var_10);
    var_12 = ((/* implicit */unsigned short) var_3);
    var_13 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_8)))) ? (max((((/* implicit */unsigned int) var_2)), (var_3))) : (min((var_10), (((var_4) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            {
                arr_5 [2ULL] = ((/* implicit */signed char) (+(((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 17429273230977285452ULL)))))) - ((~(var_10)))))));
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((var_3), (((/* implicit */unsigned int) arr_4 [i_0] [i_0 - 1] [i_0]))))), ((~(min((var_8), (((/* implicit */unsigned long long int) var_6))))))));
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 3) /* same iter space */
                {
                    arr_9 [i_0] [i_0] = min((var_0), (((/* implicit */signed char) arr_0 [i_2 + 1])));
                    arr_10 [i_2] [i_0] [i_0] = ((/* implicit */int) ((unsigned long long int) min((((/* implicit */int) arr_7 [i_0 - 3] [i_1 + 4] [i_2 - 1] [i_0])), (((((/* implicit */_Bool) 366778348206828589ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-2331)))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 2; i_3 < 21; i_3 += 3) /* same iter space */
                    {
                        arr_14 [i_0 - 3] [(unsigned short)10] [i_0 - 3] = ((/* implicit */short) max(((~(((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0 - 1] [(unsigned char)21] [i_0 - 1]))))))), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) 13922536582144879725ULL)))))))));
                        arr_15 [i_2] [8ULL] [8ULL] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_11 [i_1 + 2] [i_0] [i_0 - 1]), (arr_11 [i_1 + 1] [i_0] [i_0 + 1])))) != (((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) 2602891076U)) : (arr_13 [i_0] [i_0 - 1] [(unsigned short)14] [i_0]))) > (((/* implicit */unsigned long long int) var_3)))))));
                        arr_16 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */unsigned long long int) (signed char)32))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)58))))) : (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-114)), (arr_11 [i_3 + 2] [i_1] [i_2])))))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2 + 1] [i_2 + 1])))))));
                        arr_17 [(short)22] [i_0] [i_2] [i_3] = max((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) - (arr_13 [i_0] [5ULL] [i_0] [i_3])))) ? (((arr_0 [11ULL]) ? (580320185058829435ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-50)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)89))) : (var_10)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (((/* implicit */unsigned int) arr_1 [i_2 + 1])) : (var_10)))));
                        arr_18 [i_0 - 2] [i_3] [i_0] [i_0] [i_0 - 2] [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0] [i_2 - 1] [i_0])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)7))))) : ((-(((((/* implicit */_Bool) (signed char)-59)) ? (arr_8 [i_0] [i_1] [i_0]) : (var_10)))))));
                    }
                    for (unsigned short i_4 = 2; i_4 < 21; i_4 += 3) /* same iter space */
                    {
                        arr_21 [i_0] [14] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((short) max((2999351708666140950ULL), (((/* implicit */unsigned long long int) var_0)))))), ((~(max((((/* implicit */unsigned long long int) var_2)), (arr_19 [i_0])))))));
                        arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((3072187341462542313LL), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) (!((_Bool)1))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)46))))) ? (arr_1 [i_1 + 2]) : (arr_3 [i_0 - 1] [i_0] [i_2]))) : (max((((((/* implicit */_Bool) var_0)) ? (arr_3 [i_4] [i_0] [i_0]) : (((/* implicit */int) (unsigned char)22)))), (var_5)))));
                    }
                    for (unsigned short i_5 = 2; i_5 < 21; i_5 += 3) /* same iter space */
                    {
                        arr_27 [i_0] [i_1 + 4] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (-(((/* implicit */int) arr_23 [i_0 - 2] [i_0] [i_2] [i_0] [19U] [i_0]))))) ? ((~(((/* implicit */int) var_7)))) : (((1347383169) << (((((/* implicit */int) arr_23 [i_0] [i_0] [i_0 - 1] [(unsigned short)11] [i_0] [19ULL])) - (162)))))))));
                        arr_28 [i_0] [i_0] [i_1] [i_0] [i_5] [i_0] = ((/* implicit */short) min(((-((-(var_3))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_23 [i_5] [i_0] [i_2 + 1] [i_1] [i_0] [12ULL])))))));
                    }
                    arr_29 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) var_7)), (arr_3 [i_0] [i_0] [i_1 - 3])))) ? (max((max((arr_4 [i_0] [(unsigned short)14] [i_0]), (((/* implicit */int) var_6)))), (((arr_0 [i_2 + 1]) ? (((/* implicit */int) var_4)) : (arr_1 [i_2]))))) : ((-(arr_4 [i_0] [i_1] [i_0])))));
                }
                for (unsigned long long int i_6 = 1; i_6 < 22; i_6 += 3) /* same iter space */
                {
                    arr_32 [10U] [i_1] = max((((min((var_10), (((/* implicit */unsigned int) var_0)))) >> (((((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */unsigned long long int) -3052460015887848906LL)))) - (16035300807223099262ULL))))), (((/* implicit */unsigned int) ((_Bool) (signed char)7))));
                    /* LoopSeq 1 */
                    for (signed char i_7 = 0; i_7 < 23; i_7 += 3) 
                    {
                        arr_35 [(unsigned char)2] [(unsigned char)2] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_31 [i_7] [4] [4] [i_0 + 1])) ? (var_8) : (var_8))));
                        arr_36 [i_0] [i_1 - 2] = ((/* implicit */signed char) min(((+(var_3))), (((/* implicit */unsigned int) max((((((/* implicit */int) (unsigned short)34970)) << (((/* implicit */int) (_Bool)1)))), (69065979))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 4; i_8 < 22; i_8 += 3) 
                        {
                            arr_41 [(unsigned short)20] [i_6] [(signed char)22] [i_8 + 1] &= ((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) var_4)), (1959349293U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)2)) ? (((((/* implicit */_Bool) 2305843009213693952ULL)) ? (((/* implicit */int) (short)3190)) : (((/* implicit */int) (unsigned short)35406)))) : (134217664))))));
                            arr_42 [i_0] [i_0] [i_0] [11] [i_0] = (-(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_7)))))));
                        }
                        arr_43 [i_1 - 1] [(unsigned short)12] [i_7] = ((/* implicit */unsigned short) min((((((((/* implicit */int) var_7)) + (2147483647))) << (((((/* implicit */int) arr_39 [i_0 - 2] [i_0 + 1] [(unsigned short)20] [(unsigned short)0] [i_1 + 3] [i_1 + 2] [i_6 + 1])) - (61962))))), ((-(((/* implicit */int) (_Bool)1))))));
                        arr_44 [i_0] [(_Bool)1] [i_1 + 3] [(_Bool)1] [(_Bool)1] = max((((/* implicit */unsigned short) arr_26 [18U] [18U])), ((unsigned short)0));
                    }
                }
                for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 3) /* same iter space */
                {
                    arr_48 [i_0] [12ULL] [i_9] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_39 [i_0 + 1] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_8 [(unsigned short)0] [i_1] [i_9])))))))));
                    arr_49 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 4742083665504660752ULL)) ? (((/* implicit */int) (unsigned short)33297)) : (((/* implicit */int) arr_11 [i_0 + 1] [i_1] [i_9])))), (((/* implicit */int) ((short) arr_13 [i_0 - 3] [i_1] [i_0] [i_9])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1695299960))))) : ((~(arr_24 [i_0] [i_0 + 1] [i_9] [i_1 - 3])))));
                    arr_50 [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (4294967292U)))) ? (((((((/* implicit */int) arr_0 [i_0])) != (var_5))) ? ((+(((/* implicit */int) arr_40 [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((signed char) -724161788))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63847))) >= (((unsigned int) arr_39 [i_0] [i_1] [i_1] [i_9] [i_9] [i_9] [i_9])))))));
                }
                for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 3) /* same iter space */
                {
                    arr_53 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 12306280782450363972ULL)) ? (((/* implicit */int) (unsigned short)2)) : (((/* implicit */int) var_7)))))))), (max((((/* implicit */int) var_4)), (arr_12 [i_0] [i_0 - 2] [i_0 + 1] [i_0 - 2])))));
                    arr_54 [i_0] = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_11 [(unsigned short)12] [i_1] [i_10]))))));
                    arr_55 [i_0] = min((arr_25 [i_0] [i_0] [i_1 - 1] [(_Bool)1]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_0] [6] [i_0])) || (((/* implicit */_Bool) arr_11 [18ULL] [i_1] [i_1]))))));
                    arr_56 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((arr_1 [i_1]) << ((((~(max((((/* implicit */unsigned long long int) var_4)), (arr_2 [i_0]))))) - (14748940969947462314ULL)))));
                }
            }
        } 
    } 
}
