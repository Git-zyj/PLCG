/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124125
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
    for (short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        arr_2 [10U] = ((/* implicit */signed char) ((unsigned char) ((((((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (var_1) : (((/* implicit */int) var_2)))) + (2147483647))) << (((/* implicit */int) ((var_1) > (((/* implicit */int) var_0))))))));
        var_17 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) arr_1 [i_0])))))) & (var_4)));
        var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) 11199102997492735052ULL)))));
    }
    for (unsigned short i_1 = 1; i_1 < 18; i_1 += 3) 
    {
        arr_5 [i_1] [(signed char)0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(0LL)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)37797))))) : (((((/* implicit */long long int) (+(arr_3 [i_1])))) / ((-(arr_4 [i_1 - 1])))))));
        var_19 = ((/* implicit */unsigned int) 464481220);
        arr_6 [i_1] = ((/* implicit */long long int) (+((-(-464481224)))));
    }
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_14))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        for (unsigned int i_3 = 3; i_3 < 13; i_3 += 2) 
        {
            {
                arr_13 [i_2] [i_3] = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_2] [i_3])) && (((/* implicit */_Bool) var_6))))), (arr_12 [i_2] [i_3])));
                /* LoopSeq 2 */
                for (int i_4 = 3; i_4 < 12; i_4 += 1) /* same iter space */
                {
                    var_21 = arr_14 [i_2] [i_3 + 1] [i_4 + 2] [i_4 - 1];
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_5 = 1; i_5 < 12; i_5 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            var_22 = ((/* implicit */short) arr_7 [i_3 - 3] [i_5 + 1]);
                            arr_22 [(_Bool)1] [i_3 - 3] [i_3] [i_3] [(signed char)5] = ((/* implicit */short) var_10);
                        }
                        var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_2] [i_2] [i_4 + 1] [i_3]))));
                        arr_23 [i_2] [i_2] [i_3] [i_2] = (+((+(((/* implicit */int) arr_16 [6LL] [i_5 + 1] [i_4] [(signed char)8])))));
                    }
                    /* LoopNest 2 */
                    for (short i_7 = 2; i_7 < 12; i_7 += 2) 
                    {
                        for (unsigned char i_8 = 4; i_8 < 13; i_8 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) (+((+(arr_12 [i_3 - 3] [i_3])))));
                                var_25 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_27 [i_8 - 2] [i_3] [i_8 - 2] [i_8 - 2] [(unsigned char)12])), (arr_15 [i_2] [i_4] [i_7] [(_Bool)1])))) ? (((((/* implicit */int) var_7)) & (((/* implicit */int) var_5)))) : (var_3)))) < (arr_20 [i_3 - 2] [8ULL] [i_7 - 1] [8ULL])));
                                var_26 = ((/* implicit */int) (+(var_4)));
                            }
                        } 
                    } 
                }
                for (int i_9 = 3; i_9 < 12; i_9 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_10 = 2; i_10 < 12; i_10 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_11 = 3; i_11 < 12; i_11 += 2) 
                        {
                            arr_37 [i_3] [i_3 - 3] [i_3] [i_3 - 3] [i_3 - 3] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) - (arr_4 [i_2])));
                            var_27 = ((/* implicit */unsigned char) arr_17 [i_3] [i_3] [0LL] [(short)9]);
                            var_28 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (-2147483647 - 1))) ? (2130706432U) : (((/* implicit */unsigned int) 464481220))))));
                        }
                        var_29 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_34 [i_2] [i_3] [i_3] [i_3] [i_10 - 1])) : (((/* implicit */int) arr_8 [12] [i_3 - 1]))))))) && (((((/* implicit */_Bool) arr_26 [i_10 - 1] [i_10] [(signed char)12] [i_10 + 1] [i_10])) && (((/* implicit */_Bool) arr_16 [i_10 - 1] [(unsigned short)10] [5ULL] [(short)7]))))));
                    }
                    for (long long int i_12 = 1; i_12 < 12; i_12 += 2) 
                    {
                        var_30 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((5768355171773313985ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50154))) : ((+(-4742395929442712084LL)))));
                        arr_40 [i_3] [i_9] [i_3] [i_3] = ((/* implicit */long long int) var_5);
                        var_31 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((4207765281295630419ULL) & (12678388901936237625ULL)))) || (((/* implicit */_Bool) var_12)))) ? (((unsigned long long int) 4742395929442712078LL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [12LL] [2LL]))))))));
                    }
                    for (int i_13 = 0; i_13 < 14; i_13 += 4) 
                    {
                        arr_43 [7] [i_3] [7] [i_3] [i_3] [(unsigned char)5] = ((/* implicit */short) (-(var_3)));
                        arr_44 [i_2] [i_3] [i_9] [i_9] = ((/* implicit */short) max((((unsigned long long int) 4ULL)), (((/* implicit */unsigned long long int) var_6))));
                        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_2] [i_3] [i_2] [i_2])) ? (((((/* implicit */int) var_7)) + (((/* implicit */int) arr_27 [i_2] [i_3] [i_2] [i_2] [i_2])))) : (((/* implicit */int) var_7))))) <= ((+((-(arr_9 [(unsigned short)10] [i_3])))))));
                    }
                    var_33 = var_13;
                }
            }
        } 
    } 
    var_34 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(max((5768355171773313969ULL), (((/* implicit */unsigned long long int) 2LL)))))))));
    var_35 = ((/* implicit */unsigned short) var_4);
}
