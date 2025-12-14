/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174854
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (var_14)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_17 |= ((/* implicit */unsigned long long int) arr_6 [i_0]);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) /* same iter space */
                        {
                            arr_12 [i_0] [i_1] [i_0] [i_1] [i_3] [i_4] = ((/* implicit */long long int) (((_Bool)1) && (((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1 - 3] [i_1 - 3] [i_1 - 3] [i_1 - 2] [i_1 + 2]))));
                            arr_13 [i_3] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (-3807544868657248093LL)));
                        }
                        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
                        {
                            arr_17 [i_0] [16LL] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
                            var_18 += ((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)28)) & (((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))));
                            var_19 = max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)202))) <= (7778022356050166754ULL))), (arr_3 [i_0] [12U] [i_5]));
                        }
                        arr_18 [i_0] [i_1 - 3] [i_2] [i_1 - 3] [i_1 - 3] [i_3] &= (+(arr_10 [i_1 - 2] [i_1 + 2] [i_1 - 2] [i_0] [i_0]));
                        var_20 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-1)), (arr_10 [i_0] [i_1 - 3] [i_2] [i_2] [i_3]))))));
                    }
                    for (unsigned int i_6 = 2; i_6 < 17; i_6 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_7 = 2; i_7 < 18; i_7 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (min((421791260751737314ULL), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)230)) | (((/* implicit */int) (unsigned char)37))))))) | (max((((/* implicit */unsigned long long int) var_5)), (15812785312339922477ULL))))))));
                            var_22 = ((/* implicit */unsigned char) 18446744073709551587ULL);
                        }
                        for (signed char i_8 = 0; i_8 < 20; i_8 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                            var_24 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) > (8565372089091313303ULL)))), (arr_24 [i_8] [0U] [i_2] [i_0] [i_0] [i_0])))), (arr_10 [i_0] [i_8] [i_8] [i_8] [i_8])));
                        }
                        /* vectorizable */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_25 &= ((((/* implicit */_Bool) arr_9 [i_1] [i_1 - 2] [i_1 - 2] [i_1] [19LL])) || (((/* implicit */_Bool) arr_9 [i_0] [i_1 + 1] [i_0] [i_6 - 2] [i_6])));
                            arr_28 [i_9] [i_1] = ((/* implicit */int) var_12);
                            var_26 -= ((/* implicit */int) var_2);
                        }
                        arr_29 [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_6] [i_6] [i_2] [(unsigned char)13] [(unsigned char)13] [(unsigned char)13]))) != (var_14)))), (((((/* implicit */_Bool) arr_26 [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1551143020))))) : (((/* implicit */int) (_Bool)1))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 4) 
                        {
                            var_27 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_12) : ((+(var_14)))))), (arr_11 [i_0] [i_1])));
                            arr_33 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) (short)-26609)) & (((/* implicit */int) arr_32 [i_6] [i_6] [i_6] [i_6] [i_6]))))) && ((!(((/* implicit */_Bool) (unsigned char)0)))))) ? (8565372089091313272ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 3309982065772844939LL)) | (0ULL)))) ? ((-(((/* implicit */int) var_4)))) : ((~(((/* implicit */int) arr_31 [i_10] [i_6] [i_0] [i_1 - 3] [i_0])))))))));
                            var_28 = ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) > ((-((~(var_14))))));
                        }
                        for (signed char i_11 = 0; i_11 < 20; i_11 += 4) 
                        {
                            arr_37 [i_0] [i_0] [i_2] [i_11] = ((/* implicit */short) (_Bool)1);
                            var_29 -= ((/* implicit */short) var_9);
                            arr_38 [i_0] [i_0] [i_0] [i_0] = var_10;
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))));
                        }
                        arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) ((var_3) && (((/* implicit */_Bool) var_14))))) <= (((/* implicit */int) arr_5 [i_6 + 1] [i_1 + 2] [i_0]))))) < ((-(((((/* implicit */int) var_2)) ^ (((/* implicit */int) arr_21 [i_0] [i_1 - 4] [i_2] [i_6] [i_6]))))))));
                        arr_40 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))))), (arr_5 [i_1] [i_2] [i_2])));
                    }
                    arr_41 [(short)15] [i_0] [i_1 - 2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-47)), (arr_22 [i_1] [i_1 - 1] [i_1 - 4] [i_1 - 3] [i_1 - 2])))) << ((((~((+(var_11))))) - (1268656618U)))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_13 = 1; i_13 < 22; i_13 += 4) 
        {
            for (long long int i_14 = 3; i_14 < 24; i_14 += 2) 
            {
                {
                    var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_12)), (arr_42 [i_13 + 2] [i_14 - 2])))) && (((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)67)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)58)))))))))))));
                    var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (+(((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((319903922) > (((/* implicit */int) ((7480103723698614334LL) < (arr_44 [i_12] [i_12]))))))) : (((/* implicit */int) (unsigned char)189)))))));
                    var_33 &= ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_42 [i_13 + 2] [i_14]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_43 [(_Bool)1])))))));
                    arr_50 [i_12] [i_12] [i_12] = ((/* implicit */unsigned long long int) var_6);
                }
            } 
        } 
        var_34 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max(((-(var_15))), (((/* implicit */unsigned long long int) var_5)))))));
        arr_51 [i_12] = ((/* implicit */unsigned int) arr_45 [i_12] [i_12]);
    }
}
