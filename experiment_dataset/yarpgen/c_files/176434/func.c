/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176434
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) var_18);
        var_19 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) (unsigned char)3))));
        /* LoopSeq 4 */
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        arr_11 [i_3] [i_1] [i_3] [i_3] |= ((/* implicit */unsigned char) (~(((/* implicit */int) var_17))));
                        var_20 *= ((/* implicit */short) (+(arr_4 [i_0] [i_2] [i_2])));
                    }
                } 
            } 
            arr_12 [i_0] [i_1] = ((((/* implicit */int) arr_1 [i_1])) <= (((/* implicit */int) arr_1 [14U])));
            arr_13 [i_1] = ((/* implicit */int) ((short) (unsigned char)0));
        }
        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            arr_18 [i_0] [i_0] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_4])) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_4])) : (((/* implicit */int) arr_10 [i_4] [(unsigned char)0] [i_0] [i_0]))));
            arr_19 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_11);
        }
        for (unsigned char i_5 = 1; i_5 < 19; i_5 += 3) 
        {
            arr_22 [(_Bool)1] [i_5] = ((/* implicit */unsigned int) (!((_Bool)0)));
            arr_23 [i_0] [i_5] [i_5 - 1] = ((/* implicit */unsigned int) ((((/* implicit */int) var_11)) * (((/* implicit */int) arr_21 [i_5 + 1] [i_5 - 1]))));
            arr_24 [i_5] = ((/* implicit */short) (-(((/* implicit */int) var_0))));
        }
        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            arr_27 [i_0] [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */int) arr_17 [i_0])) > (((/* implicit */int) var_18))));
            arr_28 [i_6] = ((((/* implicit */_Bool) 536838144U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_4 [i_0] [i_0] [i_0]));
        }
    }
    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) 
    {
        arr_31 [i_7] = (_Bool)0;
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 22; i_8 += 1) 
        {
            for (unsigned int i_9 = 0; i_9 < 22; i_9 += 1) 
            {
                {
                    arr_38 [i_7] [i_8] [i_8] = ((/* implicit */short) min((min((((/* implicit */long long int) (~(((/* implicit */int) arr_30 [i_8]))))), (arr_29 [i_8]))), (9223372036854775807LL)));
                    /* LoopSeq 3 */
                    for (short i_10 = 1; i_10 < 18; i_10 += 2) /* same iter space */
                    {
                        arr_42 [i_8] [i_8] [0U] [i_10 + 4] [i_8] = ((/* implicit */short) ((536838144U) - ((~(2431675555U)))));
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (~(3758129151U))))));
                    }
                    /* vectorizable */
                    for (short i_11 = 1; i_11 < 18; i_11 += 2) /* same iter space */
                    {
                        arr_45 [i_7] [i_7] [(unsigned char)5] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2431675555U)) ? (((/* implicit */int) (short)30774)) : (((/* implicit */int) (_Bool)0))));
                        arr_46 [i_7] [i_8] [i_8] [i_9] [i_9] [i_11] = arr_36 [i_7] [i_7] [i_11 + 3] [i_11 + 3];
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) -906609991))));
                        arr_47 [i_8] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)12))));
                    }
                    for (unsigned int i_12 = 0; i_12 < 22; i_12 += 2) 
                    {
                        arr_51 [i_7] [(_Bool)0] [i_8] [(unsigned short)17] = ((/* implicit */_Bool) max((min((((((/* implicit */_Bool) 3758129160U)) ? (2563802638U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)147))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)204))))))), (((/* implicit */unsigned int) var_5))));
                        arr_52 [i_7] [i_7] [i_8] [i_7] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_12)) : (arr_36 [i_7] [i_7] [i_7] [(unsigned char)11]))))));
                        arr_53 [i_7] [i_8] [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) (+(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))));
                        arr_54 [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_7] [i_8]))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))))))));
                    }
                    arr_55 [i_7] [(signed char)13] [i_9] [i_8] = ((/* implicit */short) arr_32 [i_8]);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_13 = 0; i_13 < 14; i_13 += 3) 
    {
        var_23 = ((/* implicit */long long int) 7731031835206227034ULL);
        arr_58 [i_13] = ((/* implicit */signed char) ((521017355622558298ULL) > (((/* implicit */unsigned long long int) ((var_16) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)116))))))));
        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (+(((/* implicit */int) ((short) var_17))))))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_14 = 0; i_14 < 16; i_14 += 1) 
    {
        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-110)) ? (2047U) : (1863291723U))))));
        arr_62 [i_14] = ((/* implicit */long long int) (signed char)-117);
        arr_63 [i_14] [(signed char)7] = ((/* implicit */unsigned char) 1863291755U);
    }
    var_26 = ((/* implicit */unsigned int) ((var_2) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11))));
    var_27 = ((/* implicit */unsigned short) var_17);
}
