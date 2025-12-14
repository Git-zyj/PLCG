/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18474
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        arr_4 [i_0 + 1] [(unsigned short)13] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [(short)11] [(short)11])) >> (((/* implicit */int) ((_Bool) (unsigned short)17549)))));
        arr_5 [i_0] [i_0 + 1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0 + 3])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6434))) : (arr_3 [i_0])))))) ? ((+(arr_3 [i_0 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)203))) : (3056812512360307646ULL))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            arr_16 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_3))) ? (12571366618736232786ULL) : (((/* implicit */unsigned long long int) ((int) (signed char)85)))))) ? (((((/* implicit */_Bool) ((int) (signed char)-67))) ? (((((/* implicit */_Bool) 2549845504726265383LL)) ? (11258555124715046421ULL) : (5875377454973318830ULL))) : (((/* implicit */unsigned long long int) -1283658341)))) : (((/* implicit */unsigned long long int) 8093674436395032916LL))));
                            var_19 = ((/* implicit */unsigned long long int) (unsigned short)43267);
                        }
                        var_20 -= ((/* implicit */unsigned long long int) min((((/* implicit */int) min((arr_14 [i_3 + 1] [i_3] [i_3] [(_Bool)1] [i_3 + 1] [i_3 + 1] [i_3 - 1]), (arr_14 [i_3 + 1] [i_3 + 1] [i_3] [i_3 + 1] [i_3] [i_3 - 1] [i_3 + 1])))), (((((/* implicit */_Bool) arr_14 [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 + 1])) ? (((/* implicit */int) arr_14 [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3] [i_3 - 1])) : (((/* implicit */int) arr_14 [i_3 + 1] [9LL] [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 + 1]))))));
                        /* LoopSeq 3 */
                        for (signed char i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            var_21 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 11258555124715046421ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5917))) : (2875689555321423232ULL)))) ? (((/* implicit */int) arr_17 [i_0 + 1] [i_0 - 1] [i_3 - 1] [i_3 - 1] [2ULL])) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned short)8188)) : (((/* implicit */int) var_16))))))));
                            var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) (signed char)-61)))));
                        }
                        for (short i_6 = 3; i_6 < 16; i_6 += 2) /* same iter space */
                        {
                            var_23 |= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_13 [i_0 + 3])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)101))))));
                            var_24 += ((/* implicit */_Bool) ((unsigned short) ((long long int) min(((unsigned short)3764), (((/* implicit */unsigned short) arr_10 [i_3 + 1] [i_1] [i_3 - 1] [i_3 + 1]))))));
                            var_25 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)7)), (11258555124715046421ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) ((unsigned short) 5875377454973318829ULL)))))) : ((+(5875377454973318834ULL))));
                        }
                        for (short i_7 = 3; i_7 < 16; i_7 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_3 - 1] [i_3] [i_3 + 1] [i_7 - 3] [i_7])) ? (((/* implicit */int) arr_14 [i_1] [i_2] [i_2] [i_1] [i_3 + 1] [i_7 - 3] [i_7 + 3])) : (((/* implicit */int) arr_14 [(unsigned short)6] [i_2] [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_7 - 3] [i_7]))))) ? (((((/* implicit */_Bool) (signed char)11)) ? (arr_18 [i_0] [i_0 + 1]) : (((/* implicit */int) ((signed char) 12571366618736232770ULL))))) : (((/* implicit */int) (signed char)15)))))));
                            arr_23 [i_7 - 1] [17ULL] [2LL] [2LL] [i_1] [i_0 + 3] = ((/* implicit */unsigned char) ((unsigned int) ((unsigned long long int) 15908272795012228590ULL)));
                            var_27 = -4121252833476686241LL;
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        for (signed char i_9 = 0; i_9 < 20; i_9 += 1) 
                        {
                            {
                                arr_28 [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1])))) ? ((+(15571054518388128370ULL))) : (max((((/* implicit */unsigned long long int) (unsigned short)65535)), (7733758751067269114ULL)))));
                                arr_29 [i_9] [i_1] [i_2] [i_8] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 8504493341560689519ULL)) ? (((/* implicit */int) (unsigned short)45391)) : (((/* implicit */int) (short)3098)))) & (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-58)), (arr_24 [17LL] [i_2]))))))) ? (((/* implicit */int) (signed char)87)) : (((/* implicit */int) (unsigned char)7))));
                            }
                        } 
                    } 
                    arr_30 [i_0] = ((/* implicit */unsigned char) 12571366618736232811ULL);
                    var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((((/* implicit */int) arr_14 [i_0 + 2] [i_1] [i_0 + 2] [i_2] [i_0 + 1] [i_2] [i_0 + 2])) > (((/* implicit */int) (unsigned short)0)))) ? (min((max((1125899906842624ULL), (((/* implicit */unsigned long long int) (short)-31885)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7968432533820142626ULL)) ? (7031681136635438950LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-7)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */long long int) 63294859)) : (-3710496979101130059LL)))) ? (10712985322642282501ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33347))) < (arr_15 [i_1] [i_1] [i_0 + 3]))))))))))));
                }
            } 
        } 
    }
    for (unsigned short i_10 = 2; i_10 < 17; i_10 += 4) 
    {
        var_29 = ((/* implicit */signed char) max((3687091210U), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-7)))))));
        var_30 = ((/* implicit */unsigned long long int) (short)-588);
        arr_33 [11ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-67))) - (5041270610876066851ULL)))) && (var_16)));
        arr_34 [i_10 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2570392125U)) ? (((/* implicit */int) arr_17 [i_10] [i_10 + 1] [i_10 - 2] [i_10 + 1] [i_10 - 1])) : (((((/* implicit */_Bool) arr_17 [i_10 + 1] [i_10 - 2] [i_10 + 1] [i_10 + 1] [i_10 + 1])) ? (((/* implicit */int) arr_17 [i_10 - 2] [i_10] [i_10 + 1] [(short)18] [i_10 - 2])) : (((/* implicit */int) arr_17 [i_10] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 - 2]))))));
    }
    for (unsigned int i_11 = 0; i_11 < 17; i_11 += 4) 
    {
        var_31 = ((/* implicit */unsigned short) min((-228721603), (((/* implicit */int) arr_27 [16ULL] [i_11] [i_11] [i_11] [i_11] [i_11] [3U]))));
        var_32 = ((/* implicit */unsigned int) ((unsigned long long int) ((var_14) ? (((/* implicit */int) arr_14 [18ULL] [i_11] [i_11] [i_11] [i_11] [i_11] [(short)4])) : (((/* implicit */int) arr_32 [i_11])))));
    }
    var_33 = ((/* implicit */int) var_6);
}
