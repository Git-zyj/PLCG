/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116484
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_4))))))))) : ((-(min((7U), (((/* implicit */unsigned int) (signed char)-105))))))));
    var_14 = ((/* implicit */_Bool) max((min((((/* implicit */int) var_11)), ((+(((/* implicit */int) (unsigned short)54693)))))), (min((var_5), (((/* implicit */int) min((var_7), (((/* implicit */unsigned short) var_9)))))))));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((short)32767), (((/* implicit */short) (signed char)103))))) ? (((/* implicit */int) var_7)) : ((~(((/* implicit */int) (signed char)93))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_16 = ((/* implicit */int) min((max((1695856957U), (arr_1 [i_0 + 1] [i_0]))), (((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])) ? (arr_1 [i_0 + 1] [i_0 + 1]) : (arr_1 [i_0 + 1] [i_0])))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) max(((-(max((arr_2 [i_0]), (((/* implicit */int) (unsigned char)3)))))), (arr_2 [i_0])));
        arr_4 [i_0] = ((/* implicit */unsigned int) (~(arr_2 [i_0])));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_17 = ((/* implicit */int) ((arr_6 [i_1]) - (((arr_6 [i_1]) & (arr_5 [10ULL])))));
        /* LoopNest 3 */
        for (unsigned int i_2 = 1; i_2 < 15; i_2 += 3) 
        {
            for (signed char i_3 = 3; i_3 < 14; i_3 += 1) 
            {
                for (int i_4 = 1; i_4 < 14; i_4 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) arr_12 [i_1] [i_2] [i_1] [i_4]);
                        arr_14 [i_1] [i_2] = ((/* implicit */short) (unsigned short)65529);
                        var_19 = ((/* implicit */long long int) (~(((unsigned long long int) 12019883825417751848ULL))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned char i_5 = 1; i_5 < 14; i_5 += 2) 
        {
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)54693)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1 - 1]))) : (arr_5 [i_1 - 1])));
            /* LoopSeq 1 */
            for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) 
            {
                arr_19 [i_1 - 1] [i_5] [i_6] = ((/* implicit */short) (+(((/* implicit */int) arr_8 [i_1]))));
                /* LoopSeq 3 */
                for (long long int i_7 = 1; i_7 < 13; i_7 += 1) 
                {
                    arr_22 [i_1 - 1] [i_5] [i_7] [6LL] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_1] [(unsigned short)2])) & (((/* implicit */int) arr_9 [i_1] [i_5 - 1] [i_6] [i_5 - 1]))))) ? (((/* implicit */int) arr_15 [i_1 - 1] [i_1 - 1])) : ((~(((/* implicit */int) arr_10 [i_1] [i_1] [i_7] [i_7]))))));
                    var_21 = ((/* implicit */unsigned char) ((unsigned long long int) (unsigned char)252));
                }
                for (unsigned short i_8 = 2; i_8 < 14; i_8 += 3) 
                {
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7779))) : (-7692606105316185988LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_1] [i_5] [i_5] [i_5] [i_8] [(_Bool)1]))) : (1737151352U)));
                    var_23 = ((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_1 - 1] [i_5 + 1]))));
                    arr_25 [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_1])) << (((((/* implicit */int) arr_8 [3ULL])) - (33)))))) && ((!(((/* implicit */_Bool) arr_7 [i_1] [i_5]))))));
                    arr_26 [i_8] [i_1] [i_6] [i_8] = arr_21 [i_1 - 1] [i_5 + 2] [i_5 + 2] [i_1 - 1] [i_5 + 2] [i_8];
                    var_24 = ((/* implicit */unsigned int) arr_8 [i_1 - 1]);
                }
                for (unsigned int i_9 = 1; i_9 < 15; i_9 += 3) 
                {
                    arr_31 [i_1] [i_9] [i_6] [i_9] = ((/* implicit */unsigned short) (unsigned char)13);
                    var_25 = ((/* implicit */unsigned short) (-((((_Bool)1) ? (((/* implicit */int) arr_24 [i_1] [i_5 + 2] [i_6] [i_9] [i_5 + 2])) : (((/* implicit */int) arr_10 [(short)0] [i_5] [i_9] [14ULL]))))));
                    arr_32 [i_9] [i_5] = ((/* implicit */unsigned short) var_8);
                }
            }
            arr_33 [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(arr_28 [i_1] [i_1] [i_1] [i_5])));
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_20 [6LL] [i_1 - 1])) & (((/* implicit */int) arr_20 [14LL] [i_1 - 1]))));
        }
        for (unsigned short i_10 = 0; i_10 < 16; i_10 += 2) 
        {
            var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [i_1] [i_1 - 1] [i_10] [i_1 - 1]))));
            arr_36 [i_1] [i_1] = ((/* implicit */signed char) arr_16 [i_1 - 1] [i_1 - 1]);
            var_28 = ((/* implicit */unsigned int) ((((6426860248291799767ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1]))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_10] [i_1 - 1])))));
        }
        for (unsigned short i_11 = 0; i_11 < 16; i_11 += 4) 
        {
            var_29 = ((/* implicit */signed char) (unsigned short)51525);
            /* LoopSeq 2 */
            for (unsigned short i_12 = 0; i_12 < 16; i_12 += 1) 
            {
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 13; i_13 += 2) 
                {
                    for (short i_14 = 0; i_14 < 16; i_14 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned short) ((((unsigned long long int) arr_43 [i_1] [i_11] [i_12] [i_13])) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 8584687076443527703ULL))))))));
                            arr_48 [i_11] [(unsigned char)11] = ((/* implicit */signed char) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) < (1323787303190586133ULL)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_15 = 2; i_15 < 13; i_15 += 2) 
                {
                    for (unsigned short i_16 = 0; i_16 < 16; i_16 += 2) 
                    {
                        {
                            arr_56 [i_1 - 1] [i_11] [i_11] [7LL] [i_1 - 1] [(_Bool)1] [i_1 - 1] = ((/* implicit */signed char) ((unsigned char) arr_16 [i_1 - 1] [i_1 - 1]));
                            var_31 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_54 [(unsigned short)8] [i_11] [(unsigned short)8] [(unsigned short)8] [i_16]))))));
                            var_32 = ((/* implicit */short) var_6);
                        }
                    } 
                } 
            }
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                var_33 = 1695856957U;
                var_34 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)219))));
                var_35 = ((/* implicit */_Bool) 16777215ULL);
                var_36 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_43 [(signed char)7] [(signed char)7] [(signed char)7] [i_1 - 1]))));
            }
        }
        var_37 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_20 [0LL] [i_1 - 1]))));
    }
    /* vectorizable */
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        arr_63 [i_18] = ((((/* implicit */_Bool) arr_44 [i_18] [i_18] [i_18])) ? (arr_44 [i_18] [i_18] [i_18]) : (((/* implicit */unsigned long long int) var_10)));
        arr_64 [i_18] = ((/* implicit */short) (((!((_Bool)1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_18]))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)7260)) : (((/* implicit */int) arr_9 [i_18] [i_18] [(unsigned short)10] [(unsigned char)13]))))));
        /* LoopSeq 1 */
        for (int i_19 = 0; i_19 < 15; i_19 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_20 = 0; i_20 < 15; i_20 += 1) 
            {
                for (signed char i_21 = 2; i_21 < 14; i_21 += 1) 
                {
                    {
                        var_38 = ((/* implicit */unsigned short) arr_50 [i_18] [i_19] [i_20] [i_21]);
                        arr_72 [i_20] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_50 [i_21] [i_21 - 1] [i_21] [9U])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_51 [(short)4] [i_21 - 1] [i_21] [(short)4] [i_21] [i_21])));
                        var_39 = ((/* implicit */unsigned int) arr_6 [i_18]);
                    }
                } 
            } 
            var_40 = ((/* implicit */unsigned char) (+(arr_43 [i_19] [(short)5] [i_18] [i_18])));
        }
    }
    for (long long int i_22 = 2; i_22 < 7; i_22 += 1) 
    {
        arr_77 [i_22] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((~(arr_76 [(unsigned short)0])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)0)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [i_22 - 2] [i_22] [i_22] [i_22]))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_22] [i_22 + 2] [i_22] [i_22] [i_22] [i_22 + 2]))))))) : (((max((-3164572601084284876LL), (((/* implicit */long long int) arr_2 [i_22])))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)32760)) && (((/* implicit */_Bool) 3967889382U))))))))));
        var_41 = ((/* implicit */signed char) arr_44 [(unsigned short)5] [i_22] [i_22]);
    }
}
