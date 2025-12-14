/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10382
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
    var_14 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))));
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 19; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            arr_6 [i_1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_3 [i_0]))))) : (((/* implicit */int) ((arr_4 [10] [i_1] [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-32))))))))));
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) (short)5111))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 1073709056U)) ? (-9067145666637286181LL) : (((/* implicit */long long int) 1073709056U)))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)159))) | (arr_3 [i_0]))))))) : (11409432621422238036ULL)));
            /* LoopSeq 2 */
            for (int i_2 = 0; i_2 < 20; i_2 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4))) ^ (arr_3 [i_3])))))));
                            arr_15 [i_0] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */short) ((arr_3 [i_0 - 2]) & (((/* implicit */unsigned int) ((/* implicit */int) (short)30332)))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((~(18446744073709551596ULL))), (((/* implicit */unsigned long long int) arr_10 [i_1] [i_0 - 1]))))) || (((((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) < (((/* implicit */int) ((unsigned char) arr_2 [i_2])))))));
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    for (int i_6 = 1; i_6 < 18; i_6 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) (-(((/* implicit */int) (short)-17466))));
                            arr_21 [i_0] [i_0] [i_2] [i_0] [i_1] [i_1] = var_3;
                            arr_22 [i_0] [(short)11] [i_1] [i_1] [i_1] [i_1] = (+(11409432621422238013ULL));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) var_12))));
            }
            for (int i_7 = 0; i_7 < 20; i_7 += 1) /* same iter space */
            {
                var_20 = ((/* implicit */long long int) arr_13 [i_1]);
                arr_25 [i_1] = var_7;
                arr_26 [i_1] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1])) & (((/* implicit */int) arr_18 [i_0] [i_1] [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_7])) || (((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [i_1])))))) : ((~(var_10))))), (((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [14])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))) : (arr_2 [i_1]))) & (((/* implicit */long long int) ((((/* implicit */_Bool) 3586593465U)) ? (arr_7 [i_0] [0U] [i_0] [0U]) : (((/* implicit */int) var_0)))))))));
            }
            arr_27 [i_1] = ((/* implicit */long long int) ((((arr_3 [i_0 - 1]) != (arr_3 [i_0 + 1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)113))) < (arr_3 [i_0 - 2]))))) : (arr_3 [i_0 - 1])));
            arr_28 [i_1] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [11LL] [i_1] [9ULL])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_13 [i_1]))))) * (((unsigned long long int) (signed char)7)))), (min(((~(arr_0 [i_1]))), (((((/* implicit */_Bool) 1073709033U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17466))) : (arr_20 [(short)13])))))));
        }
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0]))) & (17583279244640949335ULL))))))));
        var_22 = ((/* implicit */long long int) arr_18 [i_0] [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 19; i_8 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_9 = 0; i_9 < 20; i_9 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 4) 
            {
                for (int i_11 = 0; i_11 < 20; i_11 += 1) 
                {
                    for (unsigned short i_12 = 0; i_12 < 20; i_12 += 4) 
                    {
                        {
                            arr_41 [i_11] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_4)) != (arr_7 [i_8] [i_9] [i_9] [i_9]))) || (((((/* implicit */_Bool) arr_30 [i_8])) || (((/* implicit */_Bool) var_3))))));
                            arr_42 [i_11] [i_11] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)51481))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) var_6)) ? (arr_2 [i_10]) : (((/* implicit */long long int) arr_40 [i_8] [i_9] [i_8] [i_9] [i_8]))))));
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) arr_29 [11] [i_12]))));
                            arr_43 [i_8] [i_9] [i_9] [i_10] [i_8] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_1))) ? (((((/* implicit */_Bool) arr_13 [i_10])) ? (((/* implicit */int) arr_31 [i_9] [i_9])) : (((/* implicit */int) arr_1 [i_10])))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)164)) != (((/* implicit */int) var_0)))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned char i_13 = 0; i_13 < 20; i_13 += 1) 
            {
                var_24 &= ((/* implicit */_Bool) arr_12 [i_8] [2]);
                arr_46 [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) == (arr_32 [i_9])));
            }
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
            {
                arr_51 [i_14] [i_14] [(unsigned char)17] = ((arr_24 [i_8 - 1]) & (((/* implicit */long long int) ((((/* implicit */int) arr_48 [(short)15] [(short)15] [3U] [(unsigned char)16])) & (((/* implicit */int) arr_30 [i_9]))))));
                arr_52 [i_14] [0U] = ((((/* implicit */_Bool) ((var_6) ^ (((/* implicit */int) (unsigned short)31060))))) ? (((2377985635409650378ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_8 + 1] [i_14 - 1]))));
                var_25 *= ((/* implicit */short) arr_38 [i_8] [(signed char)4] [i_14] [(short)9]);
                arr_53 [i_9] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_33 [i_8 - 1] [i_14] [(_Bool)1])) ? (((/* implicit */int) arr_33 [i_8 - 1] [(short)2] [i_8 - 1])) : (((/* implicit */int) arr_33 [i_8 - 1] [i_8 - 1] [i_8 - 1]))));
            }
        }
        var_26 *= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_45 [i_8] [i_8] [i_8] [i_8])) & (((((/* implicit */_Bool) arr_44 [i_8] [i_8] [17LL] [13])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_8] [i_8] [i_8] [i_8])))))));
    }
    for (int i_15 = 2; i_15 < 19; i_15 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_16 = 1; i_16 < 19; i_16 += 3) 
        {
            var_27 = ((((/* implicit */_Bool) (short)(-32767 - 1))) && (((/* implicit */_Bool) 480725326728599924ULL)));
            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_15] [i_15])) ? (((/* implicit */int) arr_37 [i_15] [i_15] [i_15] [i_16])) : (((/* implicit */int) var_1))))) % (min((((/* implicit */unsigned long long int) (unsigned char)179)), (arr_20 [i_16]))))))))));
        }
        arr_59 [(unsigned char)15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 16068758438299901233ULL)) ? (((((/* implicit */_Bool) arr_8 [i_15] [i_15] [i_15 + 1])) ? (((/* implicit */int) arr_8 [i_15] [i_15] [i_15 + 1])) : (((/* implicit */int) arr_8 [i_15] [i_15] [i_15 - 1])))) : (((/* implicit */int) arr_31 [i_15] [i_15]))));
    }
    var_29 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) & ((~(var_7)))));
    var_30 = ((/* implicit */long long int) var_7);
}
