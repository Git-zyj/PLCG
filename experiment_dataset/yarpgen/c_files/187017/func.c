/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187017
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_2] [i_3] [i_2] [i_1] [i_4]))));
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) min((((((/* implicit */_Bool) (+(6173446340709845717ULL)))) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (arr_10 [i_4] [(short)1] [i_3] [i_3] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)227))))) : (((/* implicit */unsigned long long int) ((var_2) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)144)))))))), (arr_10 [i_4 - 3] [i_1] [i_2] [i_1] [i_0]))))));
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_17)), (((((/* implicit */_Bool) arr_3 [i_4 + 2] [i_2 - 1])) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (14U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)0))))))))))));
                                var_22 -= (~(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)39027)), (var_0)))) ? ((~(2689815036U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_4 - 2] [i_2 - 1] [i_2] [i_4]))))));
                                arr_11 [i_0] [i_0] [i_2] [i_3] [24U] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0] [i_1] [i_3] [i_3] [2])) ? (((/* implicit */unsigned long long int) arr_2 [i_4])) : (((arr_10 [0] [i_2 + 1] [0] [i_4 - 1] [i_4 - 2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_17))));
                    arr_12 [i_0] [i_1] [i_2 + 1] [i_2 - 2] = ((unsigned short) max((arr_7 [i_2 - 2] [i_2 - 1] [i_2 - 1] [i_2 - 1]), ((_Bool)1)));
                    /* LoopSeq 3 */
                    for (short i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned long long int) (((-((~(((/* implicit */int) arr_3 [i_0] [i_0])))))) - (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (unsigned short)47707)) & (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((18446744073709551615ULL) != (((/* implicit */unsigned long long int) var_10)))))))));
                        var_25 = ((/* implicit */long long int) (+(((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) + (2903313973U))))));
                        var_26 *= ((/* implicit */_Bool) (-(min((((1391653306U) * (((/* implicit */unsigned int) (-2147483647 - 1))))), (((((/* implicit */_Bool) (unsigned short)39027)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                        var_27 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (+(var_2)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)26493)))) : ((-(((/* implicit */int) (unsigned short)26525))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 1; i_6 < 24; i_6 += 2) 
                        {
                            arr_18 [i_0] [i_0] [i_1] [i_2] [i_6] [i_5] [i_6] = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_28 = ((/* implicit */long long int) ((((((/* implicit */int) arr_7 [i_0] [i_0] [i_2 - 1] [i_6])) != (arr_8 [i_6 + 1] [i_5] [i_1] [i_0]))) ? ((-(18008071384779251020ULL))) : (((/* implicit */unsigned long long int) arr_0 [i_0]))));
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (signed char)-36))) ? (352439256) : (((/* implicit */int) (_Bool)0))));
                            var_30 -= ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 2903313968U)) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) arr_4 [i_0] [(unsigned short)6] [i_5] [i_6]))))))));
                        }
                    }
                    for (short i_7 = 0; i_7 < 25; i_7 += 2) /* same iter space */
                    {
                        var_31 = ((/* implicit */int) arr_19 [i_0] [i_1]);
                        arr_21 [i_0] [i_1] [i_2] [i_1] [i_0] [i_2 + 1] = ((/* implicit */signed char) min((((((((/* implicit */int) var_7)) << (((((/* implicit */int) (unsigned short)63797)) - (63768))))) + (((/* implicit */int) ((unsigned short) arr_6 [i_0]))))), (((/* implicit */int) ((((((/* implicit */_Bool) 3263386266063552212ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)26525)))) < (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) != (arr_13 [11ULL] [i_1] [i_2 + 1] [i_1])))))))));
                    }
                    for (int i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        arr_24 [i_1] [i_2] [i_8] = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                        var_32 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_17 [i_0] [i_1] [(unsigned char)14] [i_8] [i_8] [i_0] [i_8])) ? (907777888052676772ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1006523256)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [(_Bool)1] [i_1] [i_0] [i_8]))) : (3797053054U)))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_1)), (4478052218403557698LL)))) ? (((((/* implicit */int) (unsigned char)12)) - (((/* implicit */int) (unsigned char)254)))) : (((((/* implicit */int) var_1)) - (((/* implicit */int) (_Bool)1)))))))));
                        arr_25 [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_7 [i_2 - 1] [i_2] [i_2 - 2] [i_1])), (arr_23 [i_1] [i_1] [i_0] [i_8])));
                    }
                }
            } 
        } 
    } 
    var_33 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) 2533045713439445676LL)) && (((/* implicit */_Bool) 2282163324338767305LL)))));
    var_34 |= ((/* implicit */unsigned int) var_7);
}
