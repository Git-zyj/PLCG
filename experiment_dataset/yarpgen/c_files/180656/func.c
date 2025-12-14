/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180656
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
    var_17 = ((/* implicit */unsigned int) var_12);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_18 = ((/* implicit */signed char) (!(((_Bool) arr_1 [i_0] [i_0]))));
        arr_4 [i_0] &= ((/* implicit */_Bool) arr_1 [i_0] [(signed char)8]);
        /* LoopSeq 2 */
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            arr_9 [i_1] = var_10;
            var_19 = ((/* implicit */signed char) (!(((((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1])) >= (((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 1] [i_1 - 1]))))));
        }
        for (int i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            var_20 = ((/* implicit */_Bool) (short)-32763);
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) arr_1 [i_0] [(unsigned short)3]))));
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_2])) << (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_16))))))))));
            }
            for (short i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) 4294967295LL))))))));
                /* LoopSeq 4 */
                for (int i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    arr_19 [i_0] [i_4] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)1))));
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) var_8))));
                }
                for (short i_6 = 0; i_6 < 10; i_6 += 2) 
                {
                    var_25 = ((/* implicit */unsigned short) min((((((/* implicit */long long int) arr_21 [i_0] [(signed char)8] [i_4] [i_6] [i_6] [i_4])) | (arr_15 [i_6] [i_4] [(signed char)2]))), (((/* implicit */long long int) ((unsigned int) ((arr_21 [i_0] [i_0] [i_2] [i_4] [i_6] [i_6]) % (((/* implicit */int) arr_12 [i_0] [i_0] [i_6]))))))));
                    arr_22 [i_4] [i_4] = ((/* implicit */long long int) arr_18 [i_0] [i_4] [i_6]);
                }
                for (long long int i_7 = 0; i_7 < 10; i_7 += 4) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned char) var_7);
                    arr_25 [(signed char)0] [i_2] [i_4] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) * (((/* implicit */int) min((var_9), (((/* implicit */unsigned short) var_0)))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        arr_30 [i_0] [i_4] [i_4] [i_7] [i_8] = ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_13 [i_0] [i_0] [i_0])), (min((max((((/* implicit */long long int) var_3)), (var_8))), (((/* implicit */long long int) arr_0 [i_8]))))));
                        var_27 = ((/* implicit */signed char) 16777215LL);
                    }
                    for (signed char i_9 = 0; i_9 < 10; i_9 += 1) 
                    {
                        var_28 &= ((/* implicit */signed char) var_15);
                        arr_33 [i_4] [i_7] [i_9] = ((/* implicit */signed char) ((int) min((-1899619688), (((/* implicit */int) var_7)))));
                    }
                    for (signed char i_10 = 0; i_10 < 10; i_10 += 1) 
                    {
                        arr_36 [i_0] [i_4] [i_2] [i_0] &= ((/* implicit */unsigned short) min((((long long int) var_10)), (((/* implicit */long long int) arr_12 [i_0] [i_0] [i_10]))));
                        arr_37 [i_4] [(unsigned short)6] [i_4] [i_2] [i_4] [0ULL] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-85))));
                    }
                    arr_38 [i_0] [i_0] [i_4] = ((/* implicit */signed char) var_14);
                }
                for (long long int i_11 = 0; i_11 < 10; i_11 += 4) /* same iter space */
                {
                    var_29 = ((/* implicit */signed char) var_0);
                    var_30 &= ((/* implicit */unsigned int) arr_5 [i_4] [1] [i_0]);
                    arr_42 [i_0] [i_0] [i_11] [i_0] &= ((/* implicit */unsigned short) arr_26 [i_0] [i_4]);
                }
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_12 = 0; i_12 < 10; i_12 += 1) 
            {
                var_31 &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))));
                arr_46 [i_0] [i_0] [i_0] &= ((/* implicit */_Bool) (signed char)-49);
            }
            for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_14 = 1; i_14 < 7; i_14 += 3) /* same iter space */
                {
                    var_32 &= ((/* implicit */unsigned short) var_13);
                    var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) arr_51 [i_14] [i_13] [i_13] [i_2] [i_0] [i_0]))));
                    var_34 = ((/* implicit */_Bool) max((((signed char) ((((/* implicit */int) arr_26 [i_13] [(unsigned short)0])) - (((/* implicit */int) (signed char)7))))), (arr_13 [i_0] [i_0] [i_13])));
                }
                for (unsigned int i_15 = 1; i_15 < 7; i_15 += 3) /* same iter space */
                {
                    var_35 = ((/* implicit */_Bool) ((unsigned long long int) 2006706673));
                    arr_54 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_40 [i_13] [i_15 + 3] [i_15 + 1] [i_15] [i_15])) ? (((/* implicit */unsigned long long int) arr_40 [i_13] [i_15 + 3] [i_15 - 1] [i_15] [(signed char)5])) : (17089029687092315916ULL))), (((/* implicit */unsigned long long int) max((arr_40 [i_13] [i_15 + 2] [i_15 + 1] [i_15 + 2] [i_15 + 3]), (((/* implicit */unsigned int) (signed char)3)))))));
                    arr_55 [i_0] [i_13] [i_13] [i_15] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_15] [(unsigned short)9] [i_15] [8ULL]))))) | (((/* implicit */int) arr_0 [8ULL])))))));
                }
                for (unsigned int i_16 = 1; i_16 < 7; i_16 += 3) /* same iter space */
                {
                    arr_59 [(signed char)9] [i_13] [i_2] [i_13] [i_13] [i_16] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_16 + 1] [i_16 + 3] [i_16 + 1])) ? (arr_15 [i_16] [i_16 + 3] [i_16 + 2]) : (arr_15 [i_16 + 3] [i_16 - 1] [i_16 + 2]))))));
                    /* LoopSeq 2 */
                    for (signed char i_17 = 0; i_17 < 10; i_17 += 4) 
                    {
                        var_36 = ((/* implicit */_Bool) min((var_36), ((!(((_Bool) var_16))))));
                        arr_64 [i_13] [i_2] [i_13] = ((/* implicit */signed char) var_6);
                    }
                    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                    {
                        var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) ((min((arr_56 [i_0] [i_2] [i_18 - 1] [i_16 + 2] [i_18 - 1]), (((/* implicit */long long int) (unsigned short)65535)))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_14)) << (((((/* implicit */int) var_5)) + (50)))))))))))))));
                        arr_68 [i_2] [i_2] [i_2] [(signed char)8] [i_2] [i_2] [(signed char)8] &= ((/* implicit */unsigned int) var_8);
                        arr_69 [i_0] [i_2] [(_Bool)0] [4] [i_2] &= (!(((/* implicit */_Bool) ((unsigned int) var_16))));
                    }
                    arr_70 [i_13] [i_13] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) - (((((/* implicit */int) var_0)) & (arr_35 [i_16 + 1] [i_16 + 2] [i_16] [i_16])))));
                    arr_71 [i_13] [i_2] [i_2] [9LL] [i_16] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_65 [(signed char)2] [i_2] [i_13] [(signed char)5] [i_16 - 1] [i_13] [i_16 - 1])) ? (((var_2) | (arr_61 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_1))))))) / (arr_65 [i_2] [i_2] [i_16 - 1] [i_2] [i_16 + 1] [i_2] [i_2])));
                    arr_72 [i_0] [i_0] &= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_35 [i_13] [i_13] [i_16 + 3] [i_16])) || (((/* implicit */_Bool) (short)-7367)))), (((_Bool) arr_28 [i_0] [i_2] [i_13] [i_0] [i_13] [i_16]))));
                }
                arr_73 [i_0] [i_0] [i_2] [i_13] = ((/* implicit */unsigned short) min((((/* implicit */long long int) min((arr_43 [i_0] [i_0] [i_0]), (arr_43 [i_0] [i_2] [i_13])))), ((-(arr_56 [i_2] [i_2] [i_2] [i_2] [i_13])))));
                arr_74 [i_0] [i_0] &= ((/* implicit */unsigned int) min((((-8605497071044562421LL) + (((/* implicit */long long int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2])))), (((/* implicit */long long int) arr_41 [i_13] [i_2] [(unsigned short)0]))));
            }
        }
        var_38 &= ((/* implicit */long long int) var_13);
    }
    for (signed char i_19 = 2; i_19 < 21; i_19 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) min(((+(var_8))), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) (signed char)126))) * ((-(((/* implicit */int) var_9))))))))))));
            arr_80 [i_19 + 2] = var_9;
            var_40 = ((/* implicit */long long int) min((((((((/* implicit */_Bool) arr_78 [(signed char)10] [(signed char)10])) ? (arr_75 [(signed char)5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_77 [(unsigned short)10] [(unsigned short)10] [(unsigned short)10]))))), (((/* implicit */unsigned long long int) (!(arr_77 [i_19 + 2] [i_20] [i_20]))))));
        }
        var_41 = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))), (((((/* implicit */int) arr_77 [i_19] [i_19 + 2] [i_19])) << (min((1760340329), (((/* implicit */int) (_Bool)1))))))));
    }
}
