/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174880
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
    for (short i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        var_14 |= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 4264332109U)) ? (arr_1 [i_0 - 1] [i_0 + 1]) : (((/* implicit */int) var_5)))), (((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 - 2])) ? (arr_1 [i_0 + 1] [i_0 + 1]) : (arr_1 [i_0 - 1] [i_0 - 1])))));
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) max((max((((/* implicit */long long int) ((((/* implicit */int) var_7)) + (((/* implicit */int) arr_0 [i_0]))))), ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (arr_1 [i_0] [i_0])))) ? (((((/* implicit */int) var_2)) + (((/* implicit */int) arr_0 [i_0])))) : (max((((/* implicit */int) var_5)), (arr_1 [i_0] [i_0])))))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            for (int i_3 = 3; i_3 < 23; i_3 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_4 = 3; i_4 < 24; i_4 += 3) 
                    {
                        arr_16 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) var_1)))))) * (arr_5 [i_1])));
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_3 - 2] [i_1] [i_1])) * (((/* implicit */int) arr_10 [i_3 - 3] [i_1] [i_4]))));
                    }
                    for (unsigned long long int i_5 = 1; i_5 < 24; i_5 += 4) 
                    {
                        var_17 += ((/* implicit */unsigned short) (-(((/* implicit */int) ((short) var_4)))));
                        arr_19 [i_5] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_17 [i_1] [i_2] [i_2] [i_1] [i_1])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) < (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53254))) : (13805473389338307570ULL)))));
                        var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_9 [i_5 + 1] [i_2] [i_2] [i_5 + 1]))));
                        var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_3])) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        arr_22 [i_1] [i_1] [i_2] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_13 [i_1] [i_3 - 1] [i_3] [i_6] [i_2] [i_3])) : ((+(((/* implicit */int) var_0))))));
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_3 - 1] [i_3 + 1] [i_3 - 2])) ? (((/* implicit */int) arr_12 [i_3 - 3] [i_3 + 1] [i_3 + 1])) : (((/* implicit */int) var_1))));
                    }
                    arr_23 [i_1] [i_1] [i_3] = ((/* implicit */_Bool) (short)-13941);
                    /* LoopNest 2 */
                    for (short i_7 = 3; i_7 < 23; i_7 += 3) 
                    {
                        for (unsigned short i_8 = 1; i_8 < 24; i_8 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_3] [0ULL] [i_3] [i_3])) > (arr_14 [i_3 + 1] [i_3 - 1])));
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_8] [i_1] [i_8])) == (((/* implicit */int) var_12))));
                                arr_29 [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) arr_20 [i_1] [i_8] [i_8]);
                                arr_30 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(var_13)))) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_7])) && (((/* implicit */_Bool) arr_13 [i_1] [i_2] [i_1] [i_1] [9ULL] [i_8])))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned short) var_6);
                }
            } 
        } 
    }
    for (unsigned short i_9 = 0; i_9 < 25; i_9 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */int) var_1);
        var_25 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_25 [(unsigned short)0] [i_9] [i_9] [13ULL])) ? (arr_4 [(signed char)24]) : (((/* implicit */unsigned long long int) arr_20 [12] [12] [i_9])))), (((((/* implicit */_Bool) var_0)) ? (arr_4 [(short)10]) : (arr_4 [0ULL])))));
        var_26 = ((/* implicit */long long int) ((min((arr_5 [12]), (((/* implicit */unsigned long long int) var_6)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_4)), (arr_11 [i_9] [16ULL] [i_9] [i_9]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) (unsigned char)184))))))))))));
    }
    for (unsigned short i_10 = 0; i_10 < 25; i_10 += 1) /* same iter space */
    {
        var_27 = ((((/* implicit */_Bool) (+(arr_31 [i_10] [i_10])))) ? (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_21 [i_10] [i_10] [i_10] [i_10])) ? (arr_4 [i_10]) : (arr_18 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_10] [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_15 [i_10] [i_10] [i_10] [i_10]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))));
        arr_38 [i_10] = (i_10 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9223372036854775806LL)) ? (((var_8) >> (((((/* implicit */int) arr_24 [i_10] [i_10] [i_10] [i_10] [i_10])) - (31561))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_28 [i_10] [i_10] [i_10]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9223372036854775806LL)) ? (((var_8) >> (((((((/* implicit */int) arr_24 [i_10] [i_10] [i_10] [i_10] [i_10])) - (31561))) + (60574))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_28 [i_10] [i_10] [i_10])))))));
    }
    var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1745718301)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_4)))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0)))))))));
    var_29 = ((/* implicit */unsigned long long int) var_7);
}
