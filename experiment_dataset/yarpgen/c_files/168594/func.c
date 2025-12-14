/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168594
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
    var_10 = ((/* implicit */signed char) var_0);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 4; i_3 < 12; i_3 += 3) 
                    {
                        arr_14 [i_0] [i_1] [i_2 - 1] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_2 [13LL])) : (((/* implicit */int) arr_3 [i_0])))))) + (((((/* implicit */_Bool) arr_10 [i_1 + 2] [i_2 - 1])) ? (((/* implicit */int) (_Bool)0)) : (-24661178)))));
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_4 [i_0] [i_1 + 2] [i_3 - 2]), (arr_4 [i_0] [i_1 - 1] [i_3 - 2])))) ? (((((arr_1 [(unsigned char)14]) + (((/* implicit */unsigned long long int) arr_5 [i_2] [i_2])))) * (((/* implicit */unsigned long long int) ((int) (unsigned short)44486))))) : (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [13ULL] [i_0])))))));
                            var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((unsigned short) arr_16 [i_0])))));
                        }
                        for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 3) 
                        {
                            var_13 -= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((2585758043U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) arr_7 [i_1 - 2] [i_3 - 1] [i_5 - 1] [i_5 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 - 2] [i_2 - 2] [i_5 + 1]))) : (arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_5 + 1])))));
                            var_14 = ((((24661178) ^ (((/* implicit */int) (_Bool)0)))) + (((/* implicit */int) ((unsigned short) min((arr_16 [i_1 - 2]), (((/* implicit */unsigned long long int) var_4)))))));
                        }
                        for (int i_6 = 3; i_6 < 13; i_6 += 1) 
                        {
                            var_15 = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [12LL] [i_2 - 3])) ? (((/* implicit */int) (short)-11364)) : (2144120405)))), (arr_4 [i_6 + 1] [i_3] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned char)24)))) + (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_21 [i_0] [i_1] [i_2] [i_2] [i_3 - 3] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))))));
                            var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) arr_2 [i_6 + 2]))));
                            arr_23 [i_0] [i_6 + 2] [i_6 + 2] [i_0] [i_6 + 2] = ((/* implicit */unsigned char) ((((1735631293213961517ULL) == (((/* implicit */unsigned long long int) min((7751910515585291835LL), (((/* implicit */long long int) (_Bool)1))))))) ? (max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_11 [i_6])) : (arr_4 [i_0] [3] [i_0]))), (((/* implicit */unsigned long long int) -4809974520590731393LL)))) : (max((((/* implicit */unsigned long long int) arr_21 [i_3 - 1] [i_2] [i_6 + 1] [i_2 - 2] [i_1 + 1] [i_1 + 1])), (arr_4 [i_3 - 1] [i_1] [i_6 - 3])))));
                            arr_24 [i_0] [i_0] [i_2 - 2] [i_0] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_2] [i_2 + 1] [10ULL] [i_3] [i_3] [i_1] [6LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_1] [i_1] [i_6 - 1]))) : (arr_11 [i_0])))), (arr_7 [i_0] [i_1] [(unsigned short)0] [i_6 - 2])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)31885))))) : (((((/* implicit */_Bool) arr_19 [i_0] [i_1 - 2] [i_6 + 1] [i_3 + 3] [i_6] [i_1] [i_3])) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_1])) : (-2144120412)))))) : (((((/* implicit */_Bool) ((var_8) + (((/* implicit */unsigned long long int) arr_22 [i_0] [i_1 - 2] [i_2] [i_3] [i_6 - 3]))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_2 + 1]))) % (arr_21 [i_0] [i_1 - 1] [i_0] [i_1 - 1] [i_3] [i_6]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) arr_8 [i_0] [i_1] [i_2 + 1] [i_1]))))))))));
                            arr_25 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned long long int) (~(((/* implicit */int) arr_8 [i_0] [(signed char)12] [i_2] [i_3 - 4]))))));
                        }
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2006289585)) ? (arr_12 [i_0] [i_1 + 2] [(short)1] [i_3]) : (2006289585)))), ((+(((arr_0 [i_1 + 1]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22642))))))))))));
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) 486187699785812722LL))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_26 [i_1 + 2] [i_2 + 1] [i_0] [i_7]))));
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_2 - 1] [i_2] [i_7])) ? (((3256606692824795204ULL) & (((/* implicit */unsigned long long int) -2144120412)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)149)))))))));
                    }
                    for (long long int i_8 = 3; i_8 < 13; i_8 += 1) 
                    {
                        arr_31 [i_0] [i_0] [(unsigned char)6] [i_8 + 2] [i_8] = ((/* implicit */int) ((signed char) (_Bool)1));
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((_Bool) min((2147483647), (((/* implicit */int) (unsigned char)18))))))));
                        var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)0))));
                        /* LoopSeq 2 */
                        for (unsigned char i_9 = 2; i_9 < 13; i_9 += 4) /* same iter space */
                        {
                            var_23 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 2006289586)) <= (max((var_7), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_2]))))))), (((((/* implicit */_Bool) 10622101596953666507ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63855))) : (var_5)))));
                            var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_1 + 1]))));
                        }
                        for (unsigned char i_10 = 2; i_10 < 13; i_10 += 4) /* same iter space */
                        {
                            arr_36 [i_0] [i_1 - 1] [i_2] [i_8] [(_Bool)1] = ((/* implicit */unsigned char) (-(-2144120401)));
                            var_25 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((-7338533802858783491LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) arr_18 [i_1 + 1] [i_1 + 1] [i_8 - 2] [i_10 - 2] [i_10 + 2])) : ((~(2006289592))))) | (((((/* implicit */_Bool) (unsigned char)53)) ? (-1) : (((/* implicit */int) (unsigned short)23))))));
                        }
                        var_26 = ((/* implicit */unsigned long long int) (-((+(arr_21 [i_2 - 3] [i_8 - 3] [i_8] [i_8 - 1] [i_8] [i_8 - 2])))));
                    }
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) -9078334117386690965LL)) ? (var_7) : (((/* implicit */unsigned long long int) (-2147483647 - 1))))) : ((-(var_7))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) == (var_8))))));
}
