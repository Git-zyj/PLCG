/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120200
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
    var_10 = ((/* implicit */long long int) min((((var_9) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5)))), (((/* implicit */int) var_5))));
    /* LoopSeq 4 */
    for (int i_0 = 2; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_11 = (+((-(((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_1 [5ULL]))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            arr_6 [(unsigned short)3] [i_1 - 1] [i_0] = ((/* implicit */int) 330849825U);
            var_12 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (8745554230248875728ULL)));
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_13 = ((/* implicit */long long int) arr_5 [i_0 - 1] [i_0 + 2] [(short)14]);
            arr_9 [i_0] [2LL] = ((/* implicit */unsigned int) 9701189843460675880ULL);
            arr_10 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) ((748752269U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)13624)))))), (arr_1 [i_0]))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_7 [i_0 + 1])), (((long long int) 748752269U)))))));
        }
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
        {
            arr_14 [i_0] [i_3] = arr_11 [i_0 + 3] [i_3] [i_3];
            /* LoopSeq 1 */
            for (long long int i_4 = 1; i_4 < 24; i_4 += 3) 
            {
                var_14 -= ((/* implicit */unsigned int) arr_16 [i_4] [i_4] [i_0]);
                var_15 += ((/* implicit */_Bool) (~((-(arr_7 [i_0 + 3])))));
                var_16 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) || (((/* implicit */_Bool) arr_0 [i_0 + 2]))))), ((((!(((/* implicit */_Bool) arr_5 [i_0] [(unsigned char)17] [i_0])))) ? (((/* implicit */unsigned long long int) (-(var_7)))) : (arr_8 [i_3 - 1] [i_3 - 1] [i_4 + 1]))));
            }
            arr_18 [i_0] [i_0] [15] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_3)) ? (arr_16 [i_0 - 2] [i_3 - 1] [i_3]) : (arr_15 [6ULL] [i_0] [i_3 - 1])))));
            arr_19 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min(((-(arr_15 [i_0] [i_0] [i_3]))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_7 [i_3]), (((/* implicit */unsigned int) (signed char)27))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_3] [i_3] [i_3]))))) : (arr_7 [i_3]))))));
        }
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4538829927314669679LL)) ? ((+(var_3))) : (((/* implicit */long long int) arr_7 [i_0 + 3]))))) ? (arr_7 [9LL]) : (((((/* implicit */_Bool) arr_7 [i_0 - 1])) ? (arr_7 [i_0 + 2]) : (arr_7 [i_0 - 2])))));
    }
    for (int i_5 = 2; i_5 < 22; i_5 += 2) /* same iter space */
    {
        arr_22 [i_5] = ((/* implicit */unsigned short) var_2);
        var_18 += ((/* implicit */unsigned char) min((((/* implicit */long long int) 330849825U)), (1501041602513437501LL)));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned long long int) var_9);
            arr_26 [i_5] [(_Bool)1] = ((/* implicit */unsigned long long int) arr_24 [i_5] [(short)14] [i_5]);
            arr_27 [11ULL] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_6 - 1] [i_5 + 3])) ? (arr_4 [i_6 - 1] [i_5 - 2]) : (arr_4 [i_6 - 1] [i_5 + 2])));
        }
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
        {
            arr_32 [i_5] [i_7] = ((/* implicit */_Bool) (short)240);
            arr_33 [i_7 - 1] [i_5] [i_5 - 2] = ((/* implicit */int) arr_15 [i_7] [i_5] [i_5]);
        }
        /* vectorizable */
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
        {
            arr_36 [i_5] &= ((/* implicit */_Bool) arr_2 [i_5 - 1]);
            var_20 = ((/* implicit */unsigned char) ((arr_1 [i_5 + 3]) | (1148173362247235836ULL)));
            var_21 = ((signed char) 1593633057U);
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_22 = ((((/* implicit */_Bool) arr_43 [i_5 - 2] [i_5 - 2] [(unsigned char)23] [i_5 - 2])) ? (((((/* implicit */_Bool) arr_28 [i_10] [i_8] [i_5])) ? (((/* implicit */unsigned long long int) arr_37 [i_5] [17] [17] [17ULL])) : (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_7 [20LL])))));
                        /* LoopSeq 2 */
                        for (long long int i_11 = 0; i_11 < 25; i_11 += 3) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) arr_45 [i_5] [i_8 - 1] [i_9] [i_10] [i_9] [3]))));
                            arr_46 [i_5 + 1] [i_5 + 3] [i_8] [5] [i_11] [i_10] [i_10] = ((/* implicit */unsigned char) ((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_5] [i_5 + 1] [i_8 - 1] [i_10] [i_11] [i_8 - 1]))) : (arr_31 [i_5 + 1] [i_5 + 3] [i_8 - 1])));
                        }
                        for (long long int i_12 = 0; i_12 < 25; i_12 += 3) /* same iter space */
                        {
                            arr_50 [i_12] = ((/* implicit */short) (signed char)31);
                            var_24 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) (unsigned short)65534)) - (12288))));
                            arr_51 [i_5] [i_12] [i_12] [i_10] [i_10] [i_12] = ((((((/* implicit */unsigned long long int) arr_41 [i_5])) - (12750128942074139568ULL))) * (((/* implicit */unsigned long long int) arr_2 [i_8 - 1])));
                        }
                    }
                } 
            } 
        }
    }
    for (signed char i_13 = 3; i_13 < 13; i_13 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned long long int) (+(arr_44 [(short)21] [i_13 + 1])));
        arr_55 [i_13 - 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_35 [i_13] [i_13]), (((/* implicit */long long int) arr_2 [i_13 + 3]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)16746))))) : (arr_42 [i_13 + 1] [i_13] [i_13] [i_13 - 1])));
        arr_56 [i_13] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_31 [i_13] [i_13] [i_13]))));
        arr_57 [i_13] = ((/* implicit */int) ((unsigned short) (-(var_1))));
    }
    for (signed char i_14 = 3; i_14 < 13; i_14 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
        {
            var_26 = ((/* implicit */long long int) (-(((arr_21 [i_14 + 2] [i_15 + 1]) ? (((/* implicit */int) arr_21 [i_14 - 3] [i_15 + 1])) : (((/* implicit */int) arr_21 [i_14 - 2] [i_15 + 1]))))));
            arr_65 [i_14] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -6766477903055515937LL)) ? (16789289478692457273ULL) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */int) (unsigned short)65529)) : (((/* implicit */int) (_Bool)1))))), (((unsigned long long int) (_Bool)1))))));
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_44 [7ULL] [i_15])) ? ((~(arr_34 [i_14]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)1))))));
        }
        /* vectorizable */
        for (short i_16 = 0; i_16 < 16; i_16 += 3) 
        {
            var_28 = ((/* implicit */short) (+(((/* implicit */int) arr_25 [i_16]))));
            var_29 = ((/* implicit */unsigned long long int) ((arr_58 [i_16]) > (arr_58 [i_14 + 2])));
        }
        /* LoopNest 3 */
        for (unsigned short i_17 = 3; i_17 < 13; i_17 += 2) 
        {
            for (short i_18 = 0; i_18 < 16; i_18 += 2) 
            {
                for (unsigned short i_19 = 0; i_19 < 16; i_19 += 2) 
                {
                    {
                        var_30 += ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned long long int) var_3)), (((var_6) * (arr_31 [i_14] [i_18] [i_19])))))));
                        var_31 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))));
                    }
                } 
            } 
        } 
        arr_74 [i_14] [i_14] = arr_69 [i_14] [(_Bool)1];
        var_32 = ((/* implicit */long long int) ((((/* implicit */int) min((arr_20 [i_14 + 2] [i_14]), (arr_20 [i_14 + 1] [i_14])))) * ((~(((/* implicit */int) arr_63 [i_14 - 2] [i_14] [(_Bool)1]))))));
    }
    var_33 = ((/* implicit */long long int) (+(var_6)));
    var_34 = ((/* implicit */long long int) (+(((unsigned long long int) var_2))));
}
