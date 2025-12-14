/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160662
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
    var_11 = ((/* implicit */unsigned long long int) var_7);
    var_12 = ((/* implicit */unsigned short) ((signed char) var_5));
    /* LoopSeq 4 */
    for (short i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)15360)) && (((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 1])))) ? (((/* implicit */int) arr_2 [(unsigned char)4] [i_0 - 2])) : (((/* implicit */int) min((arr_2 [i_0] [i_0 - 2]), (arr_2 [(unsigned char)6] [i_0 + 2]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (short)-1024))));
    }
    for (unsigned short i_1 = 1; i_1 < 19; i_1 += 4) 
    {
        arr_8 [(unsigned char)6] = ((/* implicit */short) min((((((/* implicit */unsigned long long int) (+(var_5)))) | (var_6))), (((/* implicit */unsigned long long int) ((unsigned short) max((var_3), (arr_7 [i_1] [i_1])))))));
        arr_9 [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) 1048568U));
    }
    for (short i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                for (int i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    {
                        arr_20 [i_2] [i_3] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? ((+(var_6))) : (((/* implicit */unsigned long long int) var_5))));
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) 
                        {
                            arr_23 [i_2] [i_3] = ((/* implicit */unsigned short) var_10);
                            arr_24 [i_5] [i_5] [i_4] [i_5] [i_6] = ((/* implicit */unsigned long long int) 3335810491U);
                            arr_25 [i_6] [i_3] [i_4] [i_3] [i_2] = max((min((var_9), (((/* implicit */unsigned int) arr_0 [i_3])))), (var_9));
                            arr_26 [i_2] [(unsigned short)8] [i_2] [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_17 [i_2] [i_2] [i_3]);
                            arr_27 [i_2] [i_2] [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned char) (unsigned short)9634);
                        }
                        arr_28 [i_2] [i_2] [i_2] [i_3] [i_2] [i_2] = ((/* implicit */short) var_3);
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_7 = 3; i_7 < 7; i_7 += 1) /* same iter space */
        {
            arr_32 [i_7 - 1] [i_7 - 1] [i_7 - 3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 4293918727U)) & (var_6)));
            /* LoopSeq 1 */
            for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_9 = 2; i_9 < 10; i_9 += 1) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        {
                            arr_42 [i_9] [i_10] [i_7] [i_9] [i_10] [i_7] = ((/* implicit */short) ((((/* implicit */int) arr_36 [i_2] [i_7 + 4] [i_7 - 1])) < (((/* implicit */int) var_10))));
                            arr_43 [i_10] [i_9] [i_8] [i_7] [i_9] [i_2] = ((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) (signed char)-5)))));
                        }
                    } 
                } 
                arr_44 [(short)3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
            }
        }
        for (signed char i_11 = 3; i_11 < 7; i_11 += 1) /* same iter space */
        {
            arr_47 [8ULL] [i_2] [i_2] = ((/* implicit */signed char) max((((arr_17 [i_2] [i_2] [(signed char)0]) ? (7212746197151139589ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_11] [6ULL] [2U]))))), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-17)))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_12 = 1; i_12 < 10; i_12 += 3) 
            {
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    {
                        arr_55 [i_12] [i_12] [i_11] [i_2] = ((/* implicit */signed char) var_4);
                        arr_56 [i_13] [i_13] [i_13] [i_13] [i_12] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_38 [i_11 + 4] [(unsigned char)8] [i_13 - 1] [i_13 - 1]))) <= (((/* implicit */int) ((unsigned char) var_2)))));
                    }
                } 
            } 
            arr_57 [i_2] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_52 [i_2] [i_11] [i_11] [i_11] [i_11] [i_11]))) ? ((+(var_1))) : (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_10)) ? (3794283870U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
        }
        for (signed char i_14 = 3; i_14 < 7; i_14 += 1) /* same iter space */
        {
            arr_61 [i_2] [i_2] [i_2] = ((/* implicit */short) (~(((/* implicit */int) var_4))));
            /* LoopNest 3 */
            for (unsigned short i_15 = 0; i_15 < 11; i_15 += 3) 
            {
                for (unsigned char i_16 = 0; i_16 < 11; i_16 += 4) 
                {
                    for (unsigned long long int i_17 = 2; i_17 < 9; i_17 += 4) 
                    {
                        {
                            arr_69 [i_17] = ((/* implicit */unsigned char) (((-(var_5))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_14 - 3] [i_14 - 3] [i_17 - 2] [i_17])))));
                            arr_70 [i_14] [i_14 + 2] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */_Bool) (-(((/* implicit */int) var_7))));
                        }
                    } 
                } 
            } 
        }
        arr_71 [i_2] = var_7;
        arr_72 [i_2] [i_2] = ((/* implicit */signed char) 959156817U);
    }
    for (unsigned short i_18 = 0; i_18 < 13; i_18 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_19 = 1; i_19 < 9; i_19 += 3) 
        {
            arr_79 [i_19] = ((/* implicit */unsigned long long int) var_8);
            arr_80 [i_18] [i_18] = ((/* implicit */unsigned int) var_2);
            arr_81 [i_19] [i_19] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_77 [i_19] [i_19 + 3] [10LL]))));
        }
        /* LoopNest 3 */
        for (long long int i_20 = 1; i_20 < 11; i_20 += 4) 
        {
            for (signed char i_21 = 2; i_21 < 12; i_21 += 1) 
            {
                for (unsigned long long int i_22 = 3; i_22 < 11; i_22 += 4) 
                {
                    {
                        arr_90 [i_20] = 2145649079U;
                        arr_91 [8U] [i_18] [i_20] [i_21] [(unsigned char)5] = ((/* implicit */signed char) ((unsigned short) arr_75 [i_20] [i_20 - 1]));
                        arr_92 [i_18] [i_20] [i_20 + 2] [i_20 + 2] [i_21] [(signed char)11] = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) var_2)), (var_6))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_74 [i_18])))));
                    }
                } 
            } 
        } 
    }
    var_13 = ((/* implicit */short) 1073741824U);
}
