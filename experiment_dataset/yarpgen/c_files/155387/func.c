/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155387
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    arr_7 [i_0] [i_1 - 2] [i_0] [i_1 - 1] = ((/* implicit */unsigned short) ((_Bool) ((unsigned long long int) 2450615113836059203ULL)));
                    arr_8 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */_Bool) (-(min((11172784113460255623ULL), (((/* implicit */unsigned long long int) 2145386496U))))));
                    var_17 = ((/* implicit */long long int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) / (15996128959873492418ULL))) / (((/* implicit */unsigned long long int) ((long long int) var_3))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) arr_5 [i_0])))))))));
                    arr_9 [i_0] [i_1] [i_0] [i_1] = 7273959960249296003ULL;
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 2; i_4 < 14; i_4 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned int) (unsigned short)65535);
                            arr_14 [i_0] [i_1] [(unsigned short)6] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) (unsigned short)966)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_5))) : (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) - (((/* implicit */int) arr_12 [i_0] [i_1 - 2] [i_1 - 2] [i_4 + 2] [i_2] [12ULL])))))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_12 [i_4 - 2] [i_1 + 3] [i_1 + 3] [i_4 - 2] [i_4] [i_0])), (2481364172U)))) == (min((arr_3 [i_4 - 2] [i_1]), (5949365530809496700ULL)))));
                            arr_15 [i_0] [i_1 + 3] [i_4 + 1] [i_3] [i_4] [i_0] = min((((((/* implicit */_Bool) ((int) 2271236874U))) ? (max((((/* implicit */unsigned long long int) var_16)), (var_2))) : (((/* implicit */unsigned long long int) (~(var_15)))))), (min((arr_2 [i_0]), (arr_2 [i_0]))));
                        }
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)21878))))), (arr_10 [8ULL] [(unsigned short)8] [(unsigned short)5] [i_3] [i_3] [i_3])))) ? (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2] [i_3] [i_3])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (max((18005761724970746384ULL), (((/* implicit */unsigned long long int) arr_13 [i_1 - 1] [i_3] [i_3] [i_3] [i_1])))))))));
                        var_21 = ((/* implicit */int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_2] [i_1])) : (((/* implicit */int) arr_12 [i_2] [i_1] [i_2] [i_2] [i_1 - 1] [i_2])))) == (((/* implicit */int) var_3))));
                        arr_16 [i_3] [(unsigned short)5] [i_2] [i_2] [15U] = ((((/* implicit */_Bool) ((arr_3 [i_0] [i_2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 268435455ULL)) ? (arr_2 [i_2]) : (11133708709604325067ULL))))) : ((-(min((((/* implicit */unsigned long long int) var_9)), (var_10))))));
                        var_22 = var_2;
                    }
                    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
                    {
                        var_23 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_17 [i_1 + 3] [i_1 + 3]) && (((/* implicit */_Bool) 10042022390404914270ULL)))))) == ((~(5949365530809496693ULL))));
                        var_24 *= ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned short) min((((((/* implicit */long long int) var_15)) == (var_0))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [1ULL] [1ULL] [(unsigned short)11] [i_0] [i_5] [i_0]))) != (arr_19 [i_0] [i_0] [i_1] [i_5] [i_1] [i_0]))))))));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned int) (unsigned short)33653))))) ? ((+(((/* implicit */int) var_6)))) : (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))));
                        arr_20 [i_0] [(unsigned short)1] [i_5] [i_5] [i_1 - 1] = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
                    {
                        var_26 ^= ((/* implicit */unsigned char) 1813603123U);
                        var_27 = ((unsigned long long int) ((var_12) >> (((var_4) - (11477929416561022391ULL)))));
                    }
                }
                var_28 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) < (arr_13 [i_0] [(unsigned short)14] [i_0] [i_0] [(unsigned short)14]))))) : (max((((/* implicit */unsigned int) (unsigned short)65535)), (var_15))))), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (3651648392U)))));
                var_29 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) ((var_16) != (((/* implicit */int) arr_12 [i_0] [i_1 - 1] [i_0] [i_0] [i_0] [i_0]))))))));
            }
        } 
    } 
    var_30 = ((/* implicit */long long int) var_14);
    var_31 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(max((((/* implicit */int) (unsigned short)17829)), (var_16)))))), (var_4)));
    var_32 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (var_12) : (var_2)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned long long int) var_0)))))));
    var_33 += (-(((((/* implicit */_Bool) ((unsigned int) 4294332715U))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) var_15)) : (var_10))) : (((/* implicit */unsigned long long int) (-(var_9)))))));
}
