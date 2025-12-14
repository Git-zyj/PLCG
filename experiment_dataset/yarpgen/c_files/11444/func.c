/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11444
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
    var_12 = ((/* implicit */long long int) var_10);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_13 &= ((/* implicit */long long int) var_2);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 1; i_3 < 23; i_3 += 4) 
                    {
                        var_14 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_3 + 2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0]))))) : ((+(-1539758148)))));
                        var_15 = ((/* implicit */int) arr_7 [18U] [i_0] [i_1] [18U] [i_3]);
                        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (!(((/* implicit */_Bool) 2986960054002383084LL)))))));
                        arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((2198386870U) + (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? ((-(var_6))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)7)) ? (-6048896995362177419LL) : (((/* implicit */long long int) arr_2 [i_0] [i_0])))))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_0 [i_0])), (min((((/* implicit */unsigned long long int) var_1)), (arr_12 [i_4]))))))));
                        var_18 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-77)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)16732))) : (2198386870U)));
                        arr_13 [(unsigned char)12] [(unsigned char)12] [19] [i_0] [i_4] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(3308232420U)))) / (var_8)));
                        var_19 = ((/* implicit */unsigned int) var_4);
                    }
                    for (unsigned char i_5 = 3; i_5 < 24; i_5 += 2) 
                    {
                        var_20 = ((/* implicit */long long int) arr_4 [i_0] [i_0] [i_2]);
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)77))))) ? (((/* implicit */int) (signed char)37)) : (((/* implicit */int) (!(((/* implicit */_Bool) 3308232420U)))))));
                    }
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (~(((((/* implicit */int) arr_1 [i_2])) + (arr_16 [i_0] [i_0] [i_0] [i_2] [i_0]))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_6 = 0; i_6 < 21; i_6 += 4) 
    {
        for (signed char i_7 = 0; i_7 < 21; i_7 += 2) 
        {
            {
                var_23 = ((/* implicit */int) ((((/* implicit */unsigned int) (-(1318113372)))) < (2198386870U)));
                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) var_7))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_8 = 0; i_8 < 10; i_8 += 3) 
    {
        arr_23 [i_8] = (+((+((~(-8457240335301243792LL))))));
        /* LoopNest 2 */
        for (signed char i_9 = 1; i_9 < 9; i_9 += 1) 
        {
            for (signed char i_10 = 1; i_10 < 9; i_10 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 10; i_11 += 2) 
                    {
                        for (int i_12 = 0; i_12 < 10; i_12 += 4) 
                        {
                            {
                                var_25 -= ((/* implicit */long long int) (+(-1170171861)));
                                var_26 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-26909))))) / (var_6)));
                                arr_34 [i_9] [i_9] = ((/* implicit */short) arr_10 [i_8] [i_8] [i_8] [i_10 - 1] [i_12]);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_13 = 0; i_13 < 10; i_13 += 1) 
                    {
                        arr_37 [i_9] [i_9] = ((((/* implicit */_Bool) arr_5 [i_10 - 1] [i_9 - 1] [i_9] [i_8])) ? (arr_26 [i_10 - 1] [i_10 - 1] [i_10]) : (((/* implicit */long long int) arr_5 [i_10 + 1] [i_9 + 1] [i_9 + 1] [i_9])));
                        /* LoopSeq 3 */
                        for (unsigned char i_14 = 0; i_14 < 10; i_14 += 3) 
                        {
                            var_27 ^= ((/* implicit */signed char) (~(arr_32 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_10 + 1] [i_14])));
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) (signed char)85)))))));
                            var_29 = ((/* implicit */long long int) (unsigned char)221);
                            arr_40 [i_8] [i_9] = ((/* implicit */signed char) (+(arr_16 [i_9 + 1] [i_8] [15LL] [i_9] [i_10 + 1])));
                        }
                        for (int i_15 = 1; i_15 < 9; i_15 += 4) 
                        {
                            arr_43 [7U] [i_9] = ((/* implicit */signed char) (~(((/* implicit */int) var_4))));
                            arr_44 [i_8] [i_8] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_42 [i_10 + 1] [i_9 + 1] [i_15 - 1] [i_15 - 1] [i_15])) ? (arr_42 [i_10 + 1] [i_9 + 1] [i_15 + 1] [i_13] [(signed char)8]) : (arr_42 [i_10 + 1] [i_9 - 1] [i_15 + 1] [i_15] [i_15])));
                        }
                        for (long long int i_16 = 0; i_16 < 10; i_16 += 2) 
                        {
                            var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_39 [i_9 - 1] [i_9 - 1] [i_10 - 1]))));
                            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) (+(arr_20 [i_16]))))));
                            var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)-23122)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8))) : (1998605807U))))));
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_33 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)184)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (6534397346672577262LL)));
                        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_33 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] [i_17])) ? (arr_10 [i_8] [i_9] [i_10 - 1] [i_10 - 1] [(signed char)19]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1210998642)) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) arr_45 [i_17] [i_10 - 1] [i_9] [i_8] [i_8])))))));
                        arr_49 [i_9] [i_10] [i_9] [i_9] = ((var_7) ? (((/* implicit */int) ((((/* implicit */int) (signed char)79)) != (1210998642)))) : (((/* implicit */int) ((unsigned char) (signed char)37))));
                        var_35 = ((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_8] [i_9 - 1] [i_10 + 1] [i_8] [i_8] [i_9 - 1] [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [(_Bool)1] [i_9] [i_9 + 1] [i_9 + 1]))) : (arr_33 [i_9 + 1] [i_10] [i_8] [i_9 - 1] [i_10] [i_9 - 1] [i_10])));
                    }
                    for (unsigned int i_18 = 0; i_18 < 10; i_18 += 1) 
                    {
                        var_36 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) 4788119047808495832LL)) || (((/* implicit */_Bool) (signed char)19))))) | (max((arr_14 [i_9 - 1] [i_10 - 1]), (arr_14 [i_9 + 1] [i_10 + 1])))));
                        arr_53 [i_8] [i_9] [i_9] [(short)4] = ((/* implicit */_Bool) min((max((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 752603958212968320LL)) ? (arr_42 [i_8] [2] [i_8] [i_8] [i_8]) : (1230548377)))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10)))))));
                    }
                }
            } 
        } 
    }
    var_37 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)4527))) - (6534397346672577260LL)));
}
