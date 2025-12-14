/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111841
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
    var_18 = ((/* implicit */unsigned short) ((_Bool) 11014154142314352526ULL));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] |= ((/* implicit */short) (unsigned char)216);
        arr_3 [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)32096)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7109))) : (var_9)));
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 7; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_2] = ((/* implicit */short) arr_6 [i_1 - 2] [i_1]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 7; i_3 += 3) 
                    {
                        for (long long int i_4 = 2; i_4 < 8; i_4 += 3) 
                        {
                            {
                                var_19 = ((((((/* implicit */_Bool) arr_8 [i_2] [i_3 + 1] [i_3] [i_3])) && (((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2] [i_2])))) ? (((/* implicit */long long int) var_15)) : (var_16));
                                arr_15 [i_0] [i_1 + 2] [i_2] [i_0] [i_2] [i_2] = ((/* implicit */signed char) (unsigned short)52241);
                                var_20 = ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_2] [(unsigned short)7] [i_2] [i_4])) | (((/* implicit */int) var_17))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_2] [i_0]))));
                                arr_16 [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((arr_1 [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((1832965694419151587ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)40))))))) : (((((/* implicit */_Bool) arr_1 [i_4 - 2])) ? (arr_11 [i_1] [i_1] [i_1] [i_2] [i_4 - 2]) : (arr_13 [i_0] [8LL] [i_2] [i_3] [i_4] [i_1] [i_2]))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_2] [i_3] [i_3])))));
                            }
                        } 
                    } 
                    var_21 = ((_Bool) arr_10 [i_0] [i_2] [i_0] [i_2]);
                }
            } 
        } 
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */unsigned long long int) min((6161326894271731591LL), (7237676751589287498LL)))) : (min((((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ^ (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_17)))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 3) 
    {
        arr_19 [i_5] = ((/* implicit */signed char) ((-6161326894271731603LL) / (((/* implicit */long long int) 1994922674))));
        /* LoopSeq 2 */
        for (long long int i_6 = 2; i_6 < 13; i_6 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (signed char i_7 = 0; i_7 < 15; i_7 += 3) 
            {
                arr_25 [i_7] [i_6] [i_6] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_5 - 1])) ? (((/* implicit */int) arr_18 [i_5 - 1])) : (((/* implicit */int) arr_18 [i_5 + 1]))));
                arr_26 [i_5] [i_5 + 1] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_6 - 2])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_18 [i_5]))))) : (((/* implicit */int) ((short) (signed char)11)))));
            }
            for (unsigned short i_8 = 0; i_8 < 15; i_8 += 4) 
            {
                arr_29 [i_5] [i_6] [i_6] = ((/* implicit */unsigned short) (-(arr_20 [i_6 + 2] [i_6] [i_6 - 2])));
                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_5 - 1] [i_6] [i_8])) ? (arr_20 [i_5] [i_6] [i_8]) : (var_16)))) ? (((/* implicit */int) arr_17 [i_6 + 1] [i_5 - 1])) : (var_6)));
                var_24 = ((/* implicit */long long int) ((arr_24 [i_6] [i_5 - 1]) ? (((/* implicit */int) arr_24 [i_6] [i_5 - 1])) : (((/* implicit */int) arr_24 [i_6] [i_5 - 1]))));
                var_25 = ((/* implicit */signed char) (+(arr_20 [i_5] [i_6 - 1] [i_8])));
                arr_30 [i_6 - 1] [i_6 + 1] = ((/* implicit */unsigned char) var_17);
            }
            arr_31 [i_5] [i_6] [i_6] = ((((/* implicit */_Bool) arr_17 [i_5 - 1] [i_6 - 2])) ? (((((/* implicit */_Bool) arr_28 [i_5])) ? (arr_27 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_6] [i_6]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_6 + 1]))));
        }
        for (long long int i_9 = 2; i_9 < 13; i_9 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                var_26 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_5] [i_9 + 1] [i_9])) * (((/* implicit */int) arr_32 [i_5] [i_5 - 1] [i_10]))));
                arr_38 [i_5 - 1] [i_9 - 1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_35 [i_5] [(short)14] [i_9] [(short)14])) ? (((/* implicit */int) (unsigned char)54)) : (((/* implicit */int) var_1))))));
            }
            for (unsigned char i_11 = 3; i_11 < 13; i_11 += 3) 
            {
                arr_41 [i_9] [i_11] = ((/* implicit */unsigned short) ((unsigned char) arr_36 [i_11 - 2] [i_11 + 1] [i_11 - 2] [i_11 - 2]));
                arr_42 [i_5 - 1] [i_9] = ((/* implicit */unsigned short) arr_27 [i_5]);
            }
            arr_43 [i_5 + 1] [i_5] [i_9 - 2] = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 1349439455U)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_5] [i_9])))))) > (arr_27 [i_5 - 1])));
            arr_44 [i_5] [i_5] [i_9] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_5 + 1] [i_5 + 1] [i_9])) ? (((/* implicit */long long int) ((((/* implicit */int) var_1)) - (((/* implicit */int) arr_34 [(_Bool)1] [i_9 + 2]))))) : (arr_36 [i_5 - 1] [i_9] [i_5 - 1] [i_5])));
        }
        /* LoopNest 3 */
        for (unsigned int i_12 = 1; i_12 < 14; i_12 += 1) 
        {
            for (unsigned short i_13 = 3; i_13 < 14; i_13 += 1) 
            {
                for (unsigned short i_14 = 1; i_14 < 14; i_14 += 2) 
                {
                    {
                        arr_53 [i_5 - 1] [i_14] [i_13] [i_14] [i_5] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1994922674)) ? (arr_47 [i_12 - 1] [i_14 - 1]) : (arr_47 [i_14 + 1] [i_14 + 1])));
                        arr_54 [i_5] = ((/* implicit */unsigned char) ((long long int) arr_24 [(unsigned short)12] [i_13 + 1]));
                        arr_55 [i_5] [i_12] [i_13] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */int) var_17)) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) 6161326894271731576LL))));
    }
}
