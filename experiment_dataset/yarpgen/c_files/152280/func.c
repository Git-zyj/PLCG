/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152280
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
    var_10 = ((/* implicit */int) min((((/* implicit */long long int) var_8)), (var_9)));
    var_11 -= ((/* implicit */int) var_8);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */int) ((unsigned long long int) min((min((arr_1 [i_0]), (((/* implicit */long long int) (signed char)59)))), (((/* implicit */long long int) (+(134217727)))))));
        var_13 ^= ((/* implicit */_Bool) arr_0 [4LL] [(short)0]);
    }
    /* LoopSeq 4 */
    for (unsigned int i_1 = 1; i_1 < 9; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_2 = 4; i_2 < 8; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                {
                    var_14 = (short)-12878;
                    var_15 = ((/* implicit */long long int) ((((/* implicit */int) (!(var_2)))) << (((/* implicit */int) ((arr_1 [i_1]) <= (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3] [i_2] [i_3] [i_1]))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 3; i_4 < 7; i_4 += 4) 
                    {
                        for (unsigned int i_5 = 2; i_5 < 7; i_5 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) var_3);
                                var_17 = ((/* implicit */_Bool) ((((min((var_6), (((/* implicit */long long int) (unsigned short)0)))) % (((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_1] [i_1 + 1]))))))) % (((/* implicit */long long int) (~(((/* implicit */int) min((var_3), (var_7)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_1] [i_1]))) ? (((((((/* implicit */int) arr_6 [i_1 + 1])) + (((/* implicit */int) (unsigned short)2827)))) - (((/* implicit */int) var_5)))) : (((((/* implicit */int) (unsigned char)153)) % (((/* implicit */int) (short)-12911))))));
    }
    for (unsigned int i_6 = 1; i_6 < 9; i_6 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */int) var_3);
        var_20 = ((/* implicit */int) ((((/* implicit */long long int) min((((/* implicit */int) arr_3 [i_6] [i_6 + 1])), ((+(((/* implicit */int) arr_3 [i_6] [i_6]))))))) > ((+(max((((/* implicit */long long int) var_0)), (var_6)))))));
    }
    for (unsigned short i_7 = 1; i_7 < 15; i_7 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) min((var_9), (((/* implicit */long long int) min((((/* implicit */unsigned int) (short)16383)), (arr_21 [i_7]))))));
        var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)32767)), (-5969329902884533484LL)))) ? (((/* implicit */int) (short)22169)) : (((/* implicit */int) ((((/* implicit */int) ((1305751175) >= (((/* implicit */int) (unsigned char)0))))) <= (((/* implicit */int) (short)12911)))))));
        /* LoopNest 3 */
        for (long long int i_8 = 0; i_8 < 17; i_8 += 4) 
        {
            for (long long int i_9 = 0; i_9 < 17; i_9 += 4) 
            {
                for (unsigned char i_10 = 0; i_10 < 17; i_10 += 4) 
                {
                    {
                        var_23 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_29 [i_7] [(unsigned short)7] [i_7 + 2])))), (((/* implicit */int) ((6931503478878329158ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_7] [i_8] [i_7 + 2]))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_11 = 0; i_11 < 17; i_11 += 4) 
                        {
                            var_24 = ((/* implicit */int) ((((arr_32 [i_7] [0ULL] [i_7 + 2] [i_7 - 1] [i_7 - 1]) <= (((/* implicit */long long int) arr_23 [i_7] [i_7])))) ? (((((/* implicit */_Bool) arr_29 [i_11] [i_11] [i_9])) ? (arr_27 [12LL] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)149))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2)))))));
                            var_25 = ((/* implicit */unsigned long long int) (!(arr_26 [i_7 + 1])));
                        }
                        var_26 = ((/* implicit */_Bool) 536870910);
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_12 = 1; i_12 < 15; i_12 += 4) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned long long int) min((min((arr_33 [i_12 - 1] [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12 - 1]), (((/* implicit */long long int) (signed char)-56)))), (((/* implicit */long long int) max(((+(((/* implicit */int) (short)-22180)))), (((/* implicit */int) (!((_Bool)0)))))))));
        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */int) (short)-2048)) / (134217727))), (255)))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-2048))) != (3892680694240270023LL))))) & (((((/* implicit */_Bool) arr_27 [i_12] [1U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_12] [i_12]))) : (13026942162763881005ULL))))))));
        var_29 |= ((/* implicit */long long int) (short)0);
        /* LoopSeq 1 */
        for (short i_13 = 0; i_13 < 17; i_13 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_14 = 0; i_14 < 17; i_14 += 4) 
            {
                for (unsigned long long int i_15 = 2; i_15 < 13; i_15 += 2) 
                {
                    {
                        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (_Bool)1))));
                        /* LoopSeq 1 */
                        for (unsigned short i_16 = 1; i_16 < 14; i_16 += 2) 
                        {
                            var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) (~(min((((/* implicit */unsigned int) (short)22166)), (4294967295U))))))));
                            var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-76))) * (0ULL)))) ? (min((0ULL), (((/* implicit */unsigned long long int) (unsigned short)39872)))) : (((/* implicit */unsigned long long int) arr_25 [i_12 + 2] [i_12 + 2] [i_14])))))));
                            var_33 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL)))))))));
                        }
                    }
                } 
            } 
            var_34 |= ((/* implicit */unsigned short) 5613644822363123563LL);
        }
    }
}
