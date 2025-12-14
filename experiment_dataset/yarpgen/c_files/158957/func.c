/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158957
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (-(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) 3790759517U))))))));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)26848)) + (((/* implicit */int) (unsigned short)1590))));
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */_Bool) arr_6 [i_2]);
        var_19 = ((unsigned short) (unsigned short)60433);
    }
    for (short i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_3] [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60448))) : (arr_10 [i_3])));
        var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)14))) != (((unsigned long long int) arr_0 [i_3] [i_3]))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)50280)) & (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_3] [i_3])) && (((/* implicit */_Bool) 16776192U)))))));
    }
    for (short i_4 = 1; i_4 < 13; i_4 += 2) 
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            for (long long int i_6 = 2; i_6 < 13; i_6 += 3) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_8 = 2; i_8 < 15; i_8 += 4) /* same iter space */
                        {
                            arr_25 [i_8] [i_5] [i_4] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) arr_4 [i_7] [i_8]);
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) arr_14 [i_4]))));
                            arr_26 [i_4] [i_4] [i_6] [i_7] [i_8] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_19 [i_5] [i_8 - 2])) ? (min((((/* implicit */unsigned long long int) (unsigned short)15249)), (7276717215525752866ULL))) : (((/* implicit */unsigned long long int) 3874715936U)))) >= (((/* implicit */unsigned long long int) ((int) (+(600211095444538051LL)))))));
                            arr_27 [i_4 + 3] [i_5] [i_5] [i_6] [i_7] [i_8 - 2] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) ((max((var_16), (((/* implicit */int) var_11)))) | (((/* implicit */int) ((signed char) arr_4 [i_8] [i_8 + 1]))))))));
                            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_5] [i_6] [i_6] [i_6] [i_6 + 2] [i_8 - 2] [i_8 - 1]))))) < ((+(((/* implicit */int) arr_22 [i_4] [i_4 + 3] [i_4 + 1] [i_5] [i_6 + 2] [i_7] [i_8 - 1])))))))));
                        }
                        for (unsigned char i_9 = 2; i_9 < 15; i_9 += 4) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) var_8))));
                            arr_31 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */signed char) arr_19 [i_5] [i_6]);
                        }
                        /* vectorizable */
                        for (unsigned char i_10 = 2; i_10 < 15; i_10 += 4) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_4] [i_4] [i_4 + 3])) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4 - 1] [i_5] [i_4 + 3])))));
                            var_26 = ((/* implicit */unsigned int) arr_21 [i_4 + 1]);
                            var_27 = ((/* implicit */signed char) ((var_13) < (-1129543493)));
                        }
                        var_28 *= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */int) (unsigned short)49775)) : (-794818610)));
                        var_29 = ((/* implicit */short) ((unsigned int) arr_33 [i_4] [i_5] [i_6 + 1] [i_7] [i_7]));
                        arr_34 [i_4] [i_4] [i_5] [i_4] [i_7] [i_7] = ((/* implicit */unsigned int) var_5);
                    }
                } 
            } 
        } 
        var_30 *= ((/* implicit */unsigned short) ((int) (unsigned char)127));
        arr_35 [i_4] = ((max((var_13), (((/* implicit */int) arr_16 [i_4 - 1])))) + (((((/* implicit */_Bool) -1605828918)) ? (-845846723) : (((/* implicit */int) (unsigned short)49775)))));
    }
    for (unsigned short i_11 = 0; i_11 < 14; i_11 += 4) 
    {
        var_31 = ((/* implicit */unsigned short) ((unsigned char) min((max((arr_29 [i_11] [i_11] [i_11] [i_11] [i_11]), (((/* implicit */int) arr_16 [i_11])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_11] [i_11]))))))));
        var_32 = ((/* implicit */unsigned int) arr_19 [i_11] [i_11]);
        var_33 = ((/* implicit */signed char) (short)2442);
        /* LoopNest 3 */
        for (long long int i_12 = 0; i_12 < 14; i_12 += 4) 
        {
            for (long long int i_13 = 0; i_13 < 14; i_13 += 2) 
            {
                for (unsigned short i_14 = 1; i_14 < 11; i_14 += 1) 
                {
                    {
                        var_34 = ((/* implicit */unsigned short) ((int) arr_28 [i_11] [i_11] [i_13] [i_14 + 2] [i_13] [i_14 + 1]));
                        var_35 = ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)200))) : (arr_13 [i_11] [i_13])))))));
                        var_36 = ((/* implicit */unsigned short) (short)-32759);
                        var_37 = var_8;
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned short i_15 = 0; i_15 < 20; i_15 += 1) 
    {
        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
        {
            {
                arr_50 [i_16] [i_16] = ((/* implicit */short) arr_48 [i_16 - 1] [i_16]);
                var_38 -= ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_7)) ? (arr_0 [i_16] [i_16 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_15] [i_16 - 1]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_17 = 2; i_17 < 16; i_17 += 4) 
    {
        var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)56453)) ? (((/* implicit */int) (signed char)33)) : (((/* implicit */int) (signed char)8)))))));
        /* LoopSeq 2 */
        for (unsigned int i_18 = 1; i_18 < 13; i_18 += 2) 
        {
            arr_55 [i_17] [i_18 + 4] [i_18 + 4] = ((/* implicit */unsigned short) arr_54 [i_17] [i_17]);
            arr_56 [i_17] [i_18] [i_18] = (!(((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) (unsigned short)43134)))))));
        }
        for (int i_19 = 0; i_19 < 17; i_19 += 2) 
        {
            arr_60 [i_17 - 1] = ((/* implicit */long long int) (-((-(((/* implicit */int) (unsigned char)99))))));
            var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_59 [i_17 + 1] [i_19] [i_19])) ? (((/* implicit */int) arr_49 [i_19])) : (((int) arr_46 [i_17] [i_19]))));
            arr_61 [i_19] = ((/* implicit */unsigned char) (+((-(((((/* implicit */_Bool) arr_49 [i_19])) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19620)))))))));
            var_41 = ((((/* implicit */_Bool) (+(3754222053U)))) ? ((+(((/* implicit */int) arr_53 [i_17 + 1] [i_19])))) : (((((/* implicit */_Bool) arr_53 [i_17 + 1] [i_19])) ? (((/* implicit */int) arr_53 [i_17 - 2] [i_17 - 2])) : (((/* implicit */int) arr_53 [i_17 - 2] [i_19])))));
        }
        arr_62 [i_17] = ((/* implicit */unsigned short) (short)-8928);
    }
}
