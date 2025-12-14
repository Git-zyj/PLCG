/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168502
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
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((arr_1 [i_0 + 4] [i_0 + 1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
        arr_3 [(unsigned short)8] = ((/* implicit */unsigned int) (+(arr_1 [i_0] [i_0])));
    }
    for (unsigned int i_1 = 2; i_1 < 16; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((unsigned int) ((arr_0 [i_1 + 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
        arr_7 [i_1 - 1] [18ULL] = var_5;
    }
    for (unsigned int i_2 = 2; i_2 < 16; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_12 [0ULL] = ((/* implicit */_Bool) ((unsigned short) max((arr_4 [i_2 + 2]), (((((/* implicit */_Bool) arr_11 [i_2] [i_3] [i_2])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
            arr_13 [i_2] [(unsigned short)4] [i_2] = ((/* implicit */signed char) ((min((max((var_4), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) arr_10 [i_2 - 1] [i_2 - 2])))) != (((/* implicit */unsigned long long int) (~(max((((/* implicit */unsigned int) var_5)), (var_3))))))));
            arr_14 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) max((var_9), (((/* implicit */unsigned int) arr_5 [(signed char)19] [i_2]))))) <= ((((_Bool)1) ? (arr_0 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(unsigned short)19] [i_2])))))))) << (((min((arr_4 [i_2]), (var_2))) - (7248497766372166762ULL)))));
            /* LoopSeq 4 */
            for (signed char i_4 = 3; i_4 < 16; i_4 += 3) 
            {
                arr_19 [i_2] [i_2] [i_4] [i_4] = ((/* implicit */unsigned short) arr_1 [i_3] [0U]);
                arr_20 [14LL] [(signed char)4] [10] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_4 [i_2 + 2])))) ? (min((arr_4 [i_2 + 3]), (((/* implicit */unsigned long long int) var_10)))) : (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_17 [i_2]))))), (min((((/* implicit */unsigned long long int) arr_15 [(_Bool)1] [i_3] [i_3])), (var_2)))))));
            }
            /* vectorizable */
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                arr_24 [i_2] [i_3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_2) : (var_4)));
                arr_25 [i_2] = ((/* implicit */unsigned short) ((arr_0 [i_5 - 1]) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_15 [i_2] [i_3] [i_2])) : (((/* implicit */int) var_10)))))));
                arr_26 [i_5 - 1] [i_2] [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
                arr_27 [i_2] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((var_7) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_2 - 1] [i_2 + 3] [i_2 + 3] [i_2])))));
            }
            /* vectorizable */
            for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
            {
                arr_31 [i_2] [i_3] [i_6] = ((/* implicit */signed char) var_6);
                arr_32 [i_2] = ((/* implicit */signed char) ((_Bool) arr_5 [i_2] [i_2]));
            }
            for (unsigned short i_7 = 0; i_7 < 20; i_7 += 4) /* same iter space */
            {
                arr_35 [i_2] [i_3] [i_3] [i_2] = ((/* implicit */unsigned short) ((_Bool) (!(((/* implicit */_Bool) arr_30 [i_2] [(_Bool)1] [i_2] [i_2])))));
                arr_36 [i_7] [i_7] = ((/* implicit */unsigned short) ((short) max((var_3), (((/* implicit */unsigned int) arr_5 [i_2 + 1] [i_7])))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_8 = 2; i_8 < 19; i_8 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_9 = 1; i_9 < 19; i_9 += 2) 
                    {
                        arr_41 [(signed char)4] [(signed char)4] [(signed char)4] [i_8] [i_9 - 1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_8 - 2] [i_7]))));
                        arr_42 [16U] [16U] [i_2] [16U] [i_9] [i_9 + 1] = ((((/* implicit */int) arr_33 [i_2] [i_2])) < (((/* implicit */int) var_10)));
                        arr_43 [i_3] [i_3] [i_2] [i_8] [i_3] = ((/* implicit */short) (-(3099968300U)));
                        arr_44 [i_2] [i_2] [13LL] [i_8 - 1] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        arr_47 [(unsigned short)19] [i_8 - 1] [i_2] [18ULL] [i_2] [i_8] [18ULL] = arr_40 [i_8 + 1] [i_8 - 2] [i_2 + 2];
                        arr_48 [i_2] [(unsigned short)0] [i_2] [i_8] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_39 [i_2] [i_2]))));
                        arr_49 [i_2] [(signed char)18] [i_2] [12ULL] [i_10] [(unsigned short)11] = ((/* implicit */signed char) (+(arr_0 [i_2 + 4])));
                        arr_50 [i_2] [i_2] [7ULL] [i_2] [i_3] [i_3] [i_10] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_33 [i_2] [i_8 + 1]))));
                    }
                    arr_51 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_3))) || (((/* implicit */_Bool) var_4))));
                }
                for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 2) 
                {
                    arr_55 [i_2] [i_2] [i_7] [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_52 [i_2 + 3] [i_2 + 1])) ? (arr_52 [i_2 + 3] [i_2 - 2]) : (arr_52 [i_2 + 2] [i_2 + 1]))) % (((var_4) << (((arr_52 [i_2 + 2] [i_2 - 1]) - (8166406430547894895ULL)))))));
                    arr_56 [i_11] [i_2] [i_2] [i_2] = (i_2 % 2 == 0) ? (((/* implicit */short) (((((!(((/* implicit */_Bool) var_8)))) ? (max((((/* implicit */unsigned long long int) (short)6674)), (arr_4 [i_11]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) >> (((arr_8 [i_2]) + (1721751632454870738LL)))))) : (((/* implicit */short) (((((!(((/* implicit */_Bool) var_8)))) ? (max((((/* implicit */unsigned long long int) (short)6674)), (arr_4 [i_11]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) >> (((((arr_8 [i_2]) + (1721751632454870738LL))) - (2444373919307928333LL))))));
                    arr_57 [i_2] [i_3] [i_7] [i_11] [i_7] = ((/* implicit */long long int) ((((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_6))))))) : (max((((((/* implicit */_Bool) arr_46 [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_11] [i_7] [(signed char)15]))) : (var_7))), (((/* implicit */unsigned long long int) min(((unsigned short)13907), (((/* implicit */unsigned short) (_Bool)1)))))))));
                    arr_58 [i_2] [i_2] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))));
                }
                for (unsigned int i_12 = 0; i_12 < 20; i_12 += 4) 
                {
                    arr_61 [i_7] [i_7] [i_7] [i_7] [(_Bool)1] [i_2] = ((/* implicit */signed char) min((max((arr_9 [i_2 + 1]), (((((/* implicit */_Bool) arr_0 [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_2] [8ULL] [8ULL] [i_2] [17LL] [i_2]))) : (var_2))))), (min((arr_4 [i_2 + 2]), (arr_4 [i_2 + 3])))));
                    arr_62 [i_2 + 1] [i_2] [i_7] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (((/* implicit */int) ((unsigned short) arr_22 [i_2 - 1] [i_3] [10LL] [i_12]))) : (((/* implicit */int) arr_46 [i_2 + 2] [0ULL] [i_3] [i_7] [i_12]))))) ? (max((max((var_7), (((/* implicit */unsigned long long int) arr_37 [i_2 + 3] [i_3] [i_7] [i_3] [i_7] [i_3])))), (((/* implicit */unsigned long long int) arr_21 [i_2 + 4] [i_2 + 4] [i_2 + 3] [i_2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_2] [(_Bool)1]))));
                }
                arr_63 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_2] [i_2] [i_2] [i_3]))) & (var_7))), (((/* implicit */unsigned long long int) ((min((var_3), (((/* implicit */unsigned int) arr_10 [i_2] [i_2])))) >> (((min((((/* implicit */long long int) arr_34 [i_2 - 1] [i_2 - 1] [0ULL] [i_7])), (-5625192103373996623LL))) + (5625192103373996648LL))))))));
            }
        }
        for (int i_13 = 0; i_13 < 20; i_13 += 1) 
        {
            arr_67 [18U] = min((((/* implicit */unsigned long long int) (_Bool)1)), (9341193372833314141ULL));
            arr_68 [i_2] [i_2] [i_13] = ((/* implicit */short) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_2] [6LL] [i_2] [i_13]))) : (arr_8 [i_2])))) : (((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
        }
        arr_69 [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
    }
    var_11 = ((/* implicit */unsigned char) ((var_7) >> ((((+(((var_2) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) - (2281355136005177855ULL)))));
    var_12 &= ((/* implicit */_Bool) var_10);
    var_13 = ((/* implicit */unsigned char) var_3);
}
