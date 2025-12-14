/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104756
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned short) ((int) (short)32766));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3] [i_1] [i_2])) ? (arr_7 [i_3] [i_1] [i_0]) : (arr_7 [i_0] [i_2] [i_0]))))));
                            arr_11 [(unsigned char)15] [i_1] [i_3] = ((/* implicit */unsigned int) max((((/* implicit */short) (_Bool)1)), (((short) arr_2 [i_0]))));
                            arr_12 [i_0] [i_1] [i_1] [i_3] [i_3] [i_3] = ((/* implicit */short) arr_7 [i_1] [i_1] [i_1]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_4 = 2; i_4 < 9; i_4 += 1) 
    {
        for (short i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            for (long long int i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                {
                    arr_19 [i_4] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) min((-1LL), (((/* implicit */long long int) arr_18 [i_4] [i_4] [i_4] [i_4]))))) ? (((/* implicit */int) arr_1 [i_4 + 1])) : (((/* implicit */int) var_1))))));
                    arr_20 [i_4] [i_5] [(short)6] = ((/* implicit */signed char) (~(((unsigned long long int) arr_10 [i_4] [i_4 - 2]))));
                    /* LoopSeq 1 */
                    for (long long int i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_8 = 1; i_8 < 7; i_8 += 4) /* same iter space */
                        {
                            var_17 = ((/* implicit */short) var_15);
                            var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                            arr_27 [i_4] [i_5] [7U] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_8] [i_5] [i_5] [i_7] [i_8 + 2] [i_4])) ? (max((max((((/* implicit */unsigned long long int) -1962506192)), (arr_15 [i_5]))), (((/* implicit */unsigned long long int) arr_8 [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8 + 3])))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_23 [i_8 - 1] [i_8 + 3] [i_8 + 2] [i_4 + 1])))));
                        }
                        for (long long int i_9 = 1; i_9 < 7; i_9 += 4) /* same iter space */
                        {
                            arr_30 [i_4 - 1] [i_5] [i_4] [i_7] [i_5] [i_5] [i_4 - 2] = min((arr_17 [i_4] [i_4 + 1] [i_9] [i_9]), (((/* implicit */unsigned short) var_8)));
                            arr_31 [i_4] [i_5] [i_4] [i_6] [i_9] [i_9] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7U)) ? (min((((var_4) ? (((/* implicit */int) (short)26390)) : (((/* implicit */int) var_0)))), (((/* implicit */int) ((short) var_4))))) : (-1448895894)));
                        }
                        for (signed char i_10 = 0; i_10 < 10; i_10 += 4) 
                        {
                            var_19 = ((/* implicit */signed char) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) 4078580638U)))))), (min((((/* implicit */unsigned short) var_6)), (arr_3 [i_4] [i_6] [i_7])))));
                            arr_35 [i_4] = ((/* implicit */short) var_9);
                            arr_36 [i_4] [i_4] [i_7] [i_10] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (min((((/* implicit */unsigned long long int) -1448895910)), (arr_15 [i_4 - 2])))));
                            var_20 = ((/* implicit */unsigned char) var_4);
                            var_21 = arr_24 [i_4] [i_4 + 1] [i_4] [i_4 + 1] [i_4] [i_4];
                        }
                        var_22 = ((/* implicit */short) min((arr_15 [i_4]), (((/* implicit */unsigned long long int) ((long long int) ((unsigned int) arr_9 [2ULL] [2ULL] [i_6] [i_4] [i_6] [(unsigned char)10]))))));
                        arr_37 [i_4] [i_6] [(_Bool)1] [i_4] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) (-(arr_7 [i_4] [i_5] [i_6])))) : (3862942305U)))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_11 = 3; i_11 < 9; i_11 += 4) /* same iter space */
                        {
                            arr_40 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_4 - 1] [i_5] [i_6] [i_7])) ? (var_15) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_4 [i_4 + 1] [i_11 - 1] [i_11 - 3])) : (((((/* implicit */_Bool) 808153917185759034LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_24 [i_4] [(unsigned short)8] [i_5] [i_6] [i_4] [i_11]))))));
                            var_23 -= ((/* implicit */int) arr_5 [i_5]);
                            arr_41 [i_4] [8] [i_6] [7] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_5] [i_6] [i_11]))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_13 [i_4] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_4] [i_4] [i_4])))));
                        }
                        for (long long int i_12 = 3; i_12 < 9; i_12 += 4) /* same iter space */
                        {
                            arr_44 [i_5] [i_4] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) max((min((((unsigned int) (unsigned short)49635)), (((/* implicit */unsigned int) arr_23 [i_4 - 2] [i_4 - 1] [i_4 - 2] [i_4 + 1])))), (((/* implicit */unsigned int) arr_16 [i_4] [i_5] [(unsigned short)3]))));
                            var_24 = ((/* implicit */unsigned short) var_7);
                            var_25 = ((/* implicit */signed char) (-(((/* implicit */int) var_4))));
                            var_26 = ((/* implicit */unsigned short) arr_13 [i_12] [i_5]);
                            var_27 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_21 [i_12] [i_5] [i_6] [i_5] [i_5] [i_4]), (((/* implicit */long long int) var_7)))))))), (min((((/* implicit */unsigned int) arr_43 [i_4 + 1])), (3761026778U)))));
                        }
                    }
                    arr_45 [i_4] = ((/* implicit */long long int) min((((/* implicit */int) ((_Bool) arr_38 [i_4] [i_4] [i_6] [i_5] [3LL] [i_5] [i_5]))), ((+(((/* implicit */int) arr_28 [i_4 + 1]))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_28 = ((/* implicit */_Bool) ((signed char) var_15));
                        arr_48 [i_4 - 2] [i_4] [i_4] [8ULL] = ((/* implicit */unsigned short) ((unsigned char) arr_32 [(signed char)5] [i_4] [(signed char)5] [i_6] [i_13]));
                        var_29 ^= ((/* implicit */unsigned short) ((signed char) arr_21 [i_4] [i_4] [i_4 - 2] [i_13] [i_6] [i_4]));
                        arr_49 [i_4] [i_5] [i_6] [i_13] = ((/* implicit */unsigned int) ((unsigned char) arr_26 [i_4] [i_5] [8]));
                    }
                    for (unsigned short i_14 = 0; i_14 < 10; i_14 += 3) 
                    {
                        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) arr_39 [i_4] [i_4] [i_4] [i_5] [i_4 + 1]))));
                        var_31 = ((/* implicit */unsigned char) (signed char)-37);
                    }
                    for (int i_15 = 0; i_15 < 10; i_15 += 2) 
                    {
                        arr_55 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */long long int) min((((unsigned int) arr_4 [i_4] [i_4 - 2] [i_4 + 1])), ((~(510U)))));
                        var_32 -= ((unsigned long long int) arr_23 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_15]);
                    }
                }
            } 
        } 
    } 
    var_33 = ((/* implicit */short) var_6);
    var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) var_8))));
}
