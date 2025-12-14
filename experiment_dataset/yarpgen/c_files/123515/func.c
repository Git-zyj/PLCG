/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123515
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) ((arr_2 [i_0] [i_0]) & (arr_2 [i_0] [i_0])));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_21 = ((/* implicit */unsigned short) ((arr_6 [i_1] [i_1] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1])))));
            var_22 = ((unsigned long long int) 3597752231U);
            arr_7 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(short)7])) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)99))) : (-8312813377090130139LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)29102)))));
            arr_8 [i_0] [(_Bool)1] [i_1] = ((/* implicit */unsigned char) ((long long int) arr_2 [i_0] [i_1]));
            var_23 += ((/* implicit */unsigned int) 8312813377090130138LL);
        }
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            var_24 = ((/* implicit */unsigned short) (signed char)37);
            var_25 |= (short)-24686;
            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((unsigned int) ((unsigned int) (unsigned short)65529))))));
            arr_11 [(_Bool)1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)4324)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551613ULL)) ? (-599645752) : (((/* implicit */int) (unsigned short)61847))))) : (arr_6 [i_0] [(signed char)16] [i_2])));
        }
        for (int i_3 = 4; i_3 < 14; i_3 += 2) 
        {
            /* LoopNest 3 */
            for (int i_4 = 4; i_4 < 15; i_4 += 1) 
            {
                for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    for (short i_6 = 4; i_6 < 14; i_6 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */int) arr_10 [i_6] [i_6 + 1] [i_6])) : (-1070907175))))));
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_4 - 1] [i_4 - 1] [i_5] [i_5] [i_4] [i_4 - 4])) ? (((/* implicit */int) arr_19 [13ULL] [i_4 - 2] [i_5] [i_5] [i_4 - 2] [i_0])) : (((/* implicit */int) arr_19 [i_4 + 1] [i_4 + 1] [i_5] [i_5] [i_4 - 2] [i_0]))));
                            var_29 = ((/* implicit */int) ((((/* implicit */int) arr_23 [i_0] [i_3 + 2] [i_5])) == (((((/* implicit */int) arr_15 [i_3] [i_5])) - (((/* implicit */int) (signed char)-1))))));
                            var_30 = ((/* implicit */unsigned int) arr_12 [i_0] [i_3 + 1] [i_3 + 2]);
                        }
                    } 
                } 
            } 
            arr_24 [i_3] [(signed char)9] [i_0] = ((/* implicit */unsigned short) ((arr_15 [i_3 - 2] [i_3 - 3]) ? (((/* implicit */int) arr_15 [i_3 + 3] [i_3 + 3])) : (((/* implicit */int) arr_15 [i_3 + 1] [i_3 - 4]))));
            var_31 = ((/* implicit */int) ((unsigned int) 1070907199));
            var_32 += ((/* implicit */unsigned int) arr_23 [i_0] [i_0] [i_3]);
        }
        for (signed char i_7 = 0; i_7 < 17; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_8 = 0; i_8 < 17; i_8 += 1) 
            {
                for (unsigned short i_9 = 1; i_9 < 15; i_9 += 2) 
                {
                    {
                        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) 8312813377090130127LL))));
                        var_34 = ((/* implicit */signed char) ((((arr_15 [i_0] [i_7]) ? (((/* implicit */int) arr_23 [i_0] [i_0] [i_9])) : (((/* implicit */int) arr_31 [i_0] [1] [i_8] [i_8] [i_9])))) & (((/* implicit */int) arr_3 [i_9] [i_9 + 1] [i_9]))));
                        var_35 *= ((/* implicit */signed char) ((long long int) var_10));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (int i_10 = 0; i_10 < 17; i_10 += 2) 
            {
                var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) (_Bool)1))));
                var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) (-(((/* implicit */int) arr_5 [i_10])))))));
            }
            for (int i_11 = 2; i_11 < 16; i_11 += 1) 
            {
                var_38 = ((/* implicit */signed char) ((int) arr_17 [i_11 - 2] [i_11 + 1] [i_11 - 1] [i_11 + 1]));
                arr_38 [i_0] = ((unsigned long long int) arr_3 [(short)10] [i_7] [(short)10]);
            }
        }
    }
    /* vectorizable */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
    {
        var_39 = ((/* implicit */unsigned char) var_1);
        var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_33 [i_12] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_10)));
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        var_41 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)30592))));
        arr_44 [i_13] = ((/* implicit */unsigned int) ((int) ((int) arr_17 [i_13] [i_13] [3] [i_13])));
        var_42 = ((/* implicit */_Bool) arr_25 [i_13] [i_13] [(unsigned short)10]);
        var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)61833), (var_3)))) ? ((+(var_13))) : (var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_25 [15LL] [i_13] [i_13])), (arr_17 [i_13] [i_13] [i_13] [i_13]))) == (((/* implicit */unsigned long long int) max((arr_26 [i_13] [(unsigned short)4]), (((/* implicit */unsigned int) arr_25 [i_13] [i_13] [i_13]))))))))) : (((min((arr_16 [i_13] [i_13] [i_13] [i_13]), (((/* implicit */long long int) var_2)))) - (((long long int) 602850923))))));
    }
    /* vectorizable */
    for (short i_14 = 0; i_14 < 12; i_14 += 4) 
    {
        var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 8060366944734079963ULL)) ? (((/* implicit */long long int) arr_28 [13U] [i_14] [11ULL])) : (((((/* implicit */_Bool) -971322653)) ? (-8070804407681413650LL) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_14] [(signed char)15] [i_14] [i_14] [i_14])))))));
        var_45 |= (unsigned short)65532;
    }
    var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (-599645763) : ((~(((/* implicit */int) var_6))))));
}
