/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120283
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
    var_18 = ((/* implicit */signed char) var_14);
    var_19 = ((/* implicit */int) (+((+(((((/* implicit */_Bool) (unsigned char)172)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((short) arr_5 [(signed char)20])))));
            var_21 = ((/* implicit */short) (+(((/* implicit */int) var_15))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                var_22 = ((/* implicit */unsigned char) ((_Bool) (-(var_1))));
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)59175)) ? (-1LL) : (16769024LL)))) ? (((/* implicit */int) arr_2 [i_2 + 1])) : ((~(((/* implicit */int) arr_5 [i_0])))))))));
                /* LoopSeq 1 */
                for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    var_24 = ((/* implicit */unsigned short) var_14);
                    /* LoopSeq 3 */
                    for (unsigned short i_4 = 4; i_4 < 20; i_4 += 1) 
                    {
                        var_25 -= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 3854856145U)))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_4 + 2])))));
                        var_26 = ((/* implicit */unsigned short) ((int) var_13));
                        var_27 *= ((/* implicit */unsigned int) var_1);
                        var_28 = ((/* implicit */unsigned short) (-(((long long int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
                    {
                        var_29 = (unsigned short)65515;
                        var_30 = ((/* implicit */int) ((((/* implicit */_Bool) (short)6611)) ? (((/* implicit */unsigned long long int) arr_14 [i_0] [i_1] [i_2] [i_2 - 1] [i_1])) : (var_2)));
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)252)) ? (((var_0) + (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_16))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 2) /* same iter space */
                    {
                        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_11 [(short)13]))) ? (((((/* implicit */_Bool) 14971972075005923707ULL)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (short)6611))))) : (((/* implicit */long long int) ((arr_14 [19] [i_1] [i_2 + 1] [i_3] [i_6]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3]))))))));
                        arr_20 [i_6] [i_1] [i_2 - 1] [i_6] [i_6] [i_3] &= ((/* implicit */unsigned int) var_11);
                        var_33 = ((/* implicit */unsigned char) (-(arr_15 [i_2 + 1] [i_6] [i_6] [i_6] [i_6] [i_6])));
                        var_34 = ((/* implicit */int) arr_7 [i_6]);
                        arr_21 [i_6] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)6626))))) ? (((unsigned long long int) (short)6625)) : (((/* implicit */unsigned long long int) arr_12 [i_2 - 1] [i_2] [i_2 - 1] [i_2] [i_2 + 1] [i_6]))));
                    }
                    var_35 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_5 [(unsigned char)16])) ? (var_4) : (arr_1 [i_1]))) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
                    var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775807LL)))) && (((/* implicit */_Bool) 27LL))));
                }
            }
        }
        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 3) /* same iter space */
        {
            arr_25 [i_0] [9ULL] = ((/* implicit */long long int) (+(((/* implicit */int) arr_22 [i_0]))));
            var_37 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))) != (1680231448U));
            var_38 = ((/* implicit */short) ((unsigned short) ((unsigned int) arr_9 [i_7])));
            arr_26 [i_7] [i_7] [i_0] = ((unsigned char) arr_2 [i_0]);
        }
        for (unsigned char i_8 = 0; i_8 < 22; i_8 += 3) /* same iter space */
        {
            var_39 = ((/* implicit */unsigned char) ((((unsigned int) var_14)) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0] [(short)7] [i_0] [(short)7] [6])) || (((/* implicit */_Bool) (unsigned char)91))))))));
            /* LoopSeq 1 */
            for (long long int i_9 = 0; i_9 < 22; i_9 += 3) 
            {
                arr_32 [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_1)) ? (var_4) : (arr_14 [i_0] [i_8] [i_8] [i_9] [i_9]))) << (((((/* implicit */int) ((unsigned short) (unsigned char)115))) - (85)))));
                var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) ((((/* implicit */int) arr_8 [i_0] [i_8] [i_0] [i_0])) / (((/* implicit */int) arr_8 [i_0] [7LL] [10LL] [i_9])))))));
            }
            var_41 = ((/* implicit */short) (+(((/* implicit */int) arr_18 [i_0] [i_0] [(short)12]))));
            var_42 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */long long int) var_4)) : (-865977380124011192LL))) >= (((/* implicit */long long int) ((int) arr_8 [i_0] [i_0] [(unsigned char)15] [i_8])))));
        }
        var_43 -= ((/* implicit */unsigned char) var_15);
    }
    var_44 = ((/* implicit */unsigned short) var_15);
}
