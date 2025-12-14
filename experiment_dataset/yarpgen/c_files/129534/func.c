/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129534
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
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) 34359607296LL);
        var_18 += ((/* implicit */signed char) arr_0 [i_0]);
    }
    for (unsigned char i_1 = 1; i_1 < 11; i_1 += 2) 
    {
        var_19 = ((/* implicit */short) ((arr_5 [i_1]) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1 + 2])) || (((/* implicit */_Bool) arr_5 [4LL]))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                arr_10 [i_1] [i_3] [i_3] = ((/* implicit */signed char) ((_Bool) var_2));
                var_20 += ((/* implicit */unsigned char) arr_9 [i_1] [i_3] [12LL] [i_1]);
                arr_11 [i_1] [i_3] = ((/* implicit */long long int) (~((~(((/* implicit */int) var_4))))));
                var_21 = ((/* implicit */unsigned long long int) ((short) arr_5 [i_2 - 1]));
                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((unsigned char) arr_8 [8] [i_3] [i_3 - 1] [i_3])))));
            }
            for (unsigned int i_4 = 3; i_4 < 12; i_4 += 2) 
            {
                arr_14 [i_4] [i_4] [i_4] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_1] [i_2 - 1] [i_2 - 1])) ? (arr_12 [i_4 - 2] [(short)0] [i_1 - 1]) : (arr_12 [i_2] [i_2] [i_4 + 2])));
                arr_15 [i_4] [i_2] [i_1] = (-(var_3));
                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) arr_6 [i_1 - 1] [i_2 - 1] [i_2]))));
            }
            var_24 = ((/* implicit */int) var_6);
            /* LoopNest 2 */
            for (short i_5 = 2; i_5 < 12; i_5 += 1) 
            {
                for (unsigned int i_6 = 4; i_6 < 11; i_6 += 2) 
                {
                    {
                        var_25 = ((/* implicit */_Bool) ((arr_8 [i_6] [i_6] [i_2] [i_6]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_6 - 3] [i_5 + 1] [i_1 + 3])))));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_4 [i_1 + 2])));
                    }
                } 
            } 
            var_27 = ((/* implicit */long long int) ((_Bool) (short)0));
        }
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
        {
            arr_25 [i_1] [i_7] = ((/* implicit */_Bool) var_7);
            var_28 ^= ((/* implicit */_Bool) ((signed char) (signed char)-118));
            arr_26 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [(unsigned short)6])) ? (arr_12 [i_7 - 1] [i_1] [i_1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_22 [i_7] [i_7] [i_7 - 1] [i_1]))) ? (((/* implicit */int) arr_18 [i_1 + 3] [i_1])) : (((/* implicit */int) ((_Bool) arr_13 [i_1 + 1] [i_1] [i_7] [i_7]))))))));
            var_29 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_13 [i_7 - 1] [(_Bool)1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_7] [i_1 + 1] [i_1]))) : (arr_19 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_1 + 3])))));
            /* LoopNest 3 */
            for (unsigned int i_8 = 1; i_8 < 10; i_8 += 2) 
            {
                for (unsigned short i_9 = 2; i_9 < 13; i_9 += 2) 
                {
                    for (unsigned short i_10 = 2; i_10 < 13; i_10 += 2) 
                    {
                        {
                            var_30 *= ((/* implicit */unsigned int) arr_18 [i_7] [i_1]);
                            var_31 |= ((/* implicit */int) ((var_0) ? (((var_17) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41043))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)41043)) + (((/* implicit */int) var_11)))))));
                            var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65535))))) < ((-(((((/* implicit */_Bool) var_6)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))))))))));
                            var_33 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_7))))))) : (((((/* implicit */_Bool) ((var_16) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_12)))) ? (arr_19 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */long long int) var_12))))));
                            var_34 = ((/* implicit */short) (((~(var_15))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                        }
                    } 
                } 
            } 
        }
        var_35 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned int) ((signed char) (unsigned short)61541)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) ((unsigned char) var_3))) ? (((unsigned long long int) (unsigned char)166)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17348)))))));
    }
    var_36 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */int) ((unsigned char) var_0))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-32671)))))));
    /* LoopNest 3 */
    for (signed char i_11 = 4; i_11 < 17; i_11 += 1) 
    {
        for (unsigned short i_12 = 4; i_12 < 17; i_12 += 1) 
        {
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                {
                    var_37 = ((/* implicit */signed char) ((((_Bool) var_0)) ? (((arr_35 [i_13] [i_13 - 1] [i_13 - 1]) ? (((/* implicit */int) arr_39 [i_12] [i_13 - 1] [i_12])) : (((/* implicit */int) arr_35 [18U] [i_13 - 1] [i_13 - 1])))) : ((-(((/* implicit */int) arr_35 [i_13 - 1] [i_13 - 1] [i_13 - 1]))))));
                    var_38 *= (!(((/* implicit */_Bool) ((short) ((arr_36 [(unsigned short)16]) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-32764))))))));
                    var_39 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)167))));
                    /* LoopNest 2 */
                    for (short i_14 = 4; i_14 < 18; i_14 += 1) 
                    {
                        for (short i_15 = 1; i_15 < 17; i_15 += 2) 
                        {
                            {
                                arr_46 [i_11] [(_Bool)1] [i_12 - 4] [i_12] [i_13] [i_12] [i_15] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_43 [i_11] [1U] [i_12 - 4] [i_12] [i_15])) ? (var_8) : (6ULL)))));
                                var_40 = ((/* implicit */_Bool) ((signed char) ((arr_35 [i_11 - 3] [i_11] [i_11]) && (((/* implicit */_Bool) var_8)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)37))));
}
