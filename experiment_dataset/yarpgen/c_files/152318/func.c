/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152318
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_1] [i_1] = ((/* implicit */int) 18446744073709551608ULL);
            var_17 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (unsigned short)50919)), (arr_2 [i_1])));
            arr_7 [i_1] [i_0] [i_1] = ((/* implicit */int) (unsigned short)8191);
        }
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 4; i_2 < 8; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_17 [i_2] [i_2 - 1] [i_2] |= ((/* implicit */int) arr_12 [i_0]);
                        var_18 = ((/* implicit */_Bool) arr_13 [i_4] [i_4 - 1] [i_4 - 1] [i_2 + 1]);
                    }
                } 
            } 
        } 
    }
    for (long long int i_5 = 2; i_5 < 10; i_5 += 2) 
    {
        arr_21 [(_Bool)0] = arr_15 [i_5];
        arr_22 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (~(-1941967045)))) ? ((~(arr_2 [i_5]))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_5 + 1])))))));
    }
    /* LoopNest 3 */
    for (int i_6 = 2; i_6 < 14; i_6 += 2) 
    {
        for (short i_7 = 4; i_7 < 11; i_7 += 2) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_9 = 0; i_9 < 15; i_9 += 2) 
                    {
                        var_19 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) max((arr_34 [i_6]), (614207476)))) ? (((/* implicit */int) var_3)) : (((((/* implicit */int) arr_32 [i_6] [i_6] [i_8] [4])) ^ (((/* implicit */int) arr_30 [i_8] [i_8] [i_8]))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_10 = 3; i_10 < 14; i_10 += 2) 
                        {
                            arr_38 [(_Bool)1] [i_8] [i_8] [(_Bool)1] [i_8] [i_6] = (~((~(((arr_36 [7LL] [i_8] [i_8] [(unsigned short)4] [i_6 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_10 - 3] [i_7]))) : (arr_25 [(unsigned char)3] [i_8]))))));
                            arr_39 [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */int) arr_33 [i_8] [i_9] [i_8]);
                            arr_40 [i_8] [i_8] [(short)1] [i_8] = ((/* implicit */short) ((((((((/* implicit */_Bool) (unsigned short)10234)) ? (((/* implicit */int) arr_30 [i_6 - 1] [i_7 + 4] [i_8])) : (((/* implicit */int) arr_26 [i_6] [i_9])))) >= (((((/* implicit */_Bool) arr_35 [i_10] [i_9] [i_8] [(short)8] [i_6])) ? (arr_34 [i_8]) : (((/* implicit */int) arr_30 [(_Bool)1] [i_7] [i_8])))))) ? ((~(((((/* implicit */_Bool) arr_27 [i_6 + 1] [i_6 + 1])) ? (((/* implicit */int) arr_33 [i_8] [(unsigned char)14] [i_8])) : (((/* implicit */int) arr_23 [i_9])))))) : (max((arr_28 [i_7] [i_6 + 1]), (arr_28 [i_8] [i_6 - 2])))));
                            arr_41 [i_9] [i_8] [i_8] [i_8] [i_6] = arr_35 [i_6] [(short)13] [i_6] [i_9] [i_10 + 1];
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) arr_25 [i_7 - 4] [i_6 - 1]))));
                        }
                    }
                    for (unsigned short i_11 = 2; i_11 < 13; i_11 += 2) 
                    {
                        arr_44 [(_Bool)1] [i_7] [i_7] [i_8] = ((((/* implicit */unsigned long long int) (~(arr_28 [i_6] [(unsigned short)4])))) > (min((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_8] [i_8] [i_8]))) : (arr_25 [i_11 + 1] [i_8]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_28 [12] [12]))))))));
                        var_21 = (-(min((arr_31 [i_11] [(_Bool)1] [i_6] [i_6]), (((/* implicit */int) min((((/* implicit */unsigned short) var_14)), (arr_37 [i_8] [i_7] [(unsigned short)0] [i_7] [i_7] [i_8])))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_12 = 0; i_12 < 15; i_12 += 2) 
                    {
                        arr_48 [i_8] [i_8] [i_6] [i_8] = ((/* implicit */unsigned short) max(((~(((((/* implicit */_Bool) arr_32 [10] [i_8] [i_8] [i_6])) ? (((/* implicit */int) arr_30 [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_36 [i_6] [i_6] [(unsigned short)9] [i_12] [i_12])))))), (arr_46 [i_7 - 3] [(unsigned short)10] [i_6] [i_6] [i_6])));
                        var_22 = ((/* implicit */unsigned long long int) arr_34 [i_7 + 3]);
                        arr_49 [(short)10] [10] [(short)10] [0ULL] [i_6] [(short)10] &= ((/* implicit */int) arr_37 [i_6 - 1] [i_7] [i_7] [i_8] [0] [i_7]);
                    }
                    for (unsigned char i_13 = 0; i_13 < 15; i_13 += 2) 
                    {
                        var_23 = (~((~((~(((/* implicit */int) (unsigned short)14609)))))));
                        arr_53 [i_6] [i_8] [i_8] = ((/* implicit */unsigned long long int) (+((~(((((/* implicit */int) arr_29 [i_7] [i_7])) - (arr_35 [(short)3] [i_7] [i_6] [i_7] [i_6])))))));
                        var_24 += ((/* implicit */_Bool) (-(((((/* implicit */_Bool) -144115188075855872LL)) ? ((-(-7394062952980145006LL))) : (((/* implicit */long long int) (-(((/* implicit */int) var_3)))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 15; i_14 += 2) 
                    {
                        for (unsigned short i_15 = 2; i_15 < 13; i_15 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) arr_35 [i_8] [i_14] [i_8] [i_7] [i_6]))));
                                arr_58 [i_15] [i_8] [i_8] [i_8] [i_7] [i_8] [i_6 - 2] = (_Bool)1;
                            }
                        } 
                    } 
                    var_26 = (i_8 % 2 == zero) ? (((/* implicit */unsigned char) max((((((/* implicit */int) arr_37 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_7 + 3] [i_8])) * (((/* implicit */int) arr_37 [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_7 - 1] [i_8])))), (((/* implicit */int) min((arr_37 [i_6 - 2] [i_6 - 2] [i_6 - 1] [i_6 - 1] [i_7 + 4] [i_8]), (arr_37 [i_6 - 2] [i_6 + 1] [i_6 + 1] [i_6 - 2] [i_7 + 1] [i_8]))))))) : (((/* implicit */unsigned char) max((((((/* implicit */int) arr_37 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_7 + 3] [i_8])) / (((/* implicit */int) arr_37 [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_7 - 1] [i_8])))), (((/* implicit */int) min((arr_37 [i_6 - 2] [i_6 - 2] [i_6 - 1] [i_6 - 1] [i_7 + 4] [i_8]), (arr_37 [i_6 - 2] [i_6 + 1] [i_6 + 1] [i_6 - 2] [i_7 + 1] [i_8])))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned short) max((((/* implicit */int) var_0)), (var_12)));
}
