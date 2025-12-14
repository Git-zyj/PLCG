/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164637
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
    var_13 = ((/* implicit */int) var_8);
    var_14 = ((/* implicit */signed char) ((((/* implicit */long long int) var_11)) == (var_10)));
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? ((((((_Bool)1) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) >> (((((/* implicit */int) var_4)) - (17075))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) (_Bool)1))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (max((var_6), (((/* implicit */unsigned long long int) (+(arr_0 [i_0])))))) : (((/* implicit */unsigned long long int) arr_0 [i_0]))));
        var_16 = ((/* implicit */unsigned short) var_7);
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */signed char) ((long long int) arr_6 [i_1]));
        arr_8 [(unsigned char)7] = ((/* implicit */short) (+(((((((/* implicit */int) arr_6 [i_1])) + (2147483647))) >> (((((/* implicit */int) arr_6 [i_1])) + (7209)))))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                {
                    arr_16 [i_3] = ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) var_5)))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 4; i_5 < 16; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 16; i_6 += 1) 
                        {
                            {
                                arr_21 [i_3] [8LL] [i_4] [i_4] [(signed char)14] [i_3] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) arr_4 [i_2 + 2] [i_5 + 1])), (var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)21)) ? (((/* implicit */int) arr_4 [i_2 + 1] [i_5 - 3])) : (((/* implicit */int) (unsigned char)248)))))));
                                arr_22 [i_3] [5ULL] [i_4] [i_3] [i_2] [i_3] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_6 [i_2])))) ? (((((/* implicit */_Bool) arr_20 [i_2] [i_2 - 1] [i_3] [i_3] [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : ((+(var_1))))) : (((/* implicit */unsigned int) (+(((int) var_11)))))));
                                arr_23 [i_2] [i_2 + 1] [i_2 + 1] [i_3] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)207)) && (((/* implicit */_Bool) 9768695537807886173ULL)))) || (((((/* implicit */_Bool) 4275560685U)) || (((/* implicit */_Bool) (signed char)21))))))), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)9302))))), (var_2)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_24 [(short)6] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_13 [i_2 + 3] [i_2] [(signed char)12] [i_2])))) : (min((((arr_11 [i_2] [i_2 - 1] [(short)10]) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [2ULL] [i_2] [i_2] [i_2]))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_2] [3ULL])) << (((((((/* implicit */int) var_9)) + (8837))) - (16))))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 1) 
        {
            for (long long int i_8 = 0; i_8 < 19; i_8 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) (((-(((arr_11 [i_2] [i_2] [i_8]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0)))))) >= (((((/* implicit */_Bool) 3ULL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)9302))))));
                    arr_29 [i_8] = ((/* implicit */short) ((unsigned char) ((((((((/* implicit */_Bool) (unsigned short)34402)) ? (((/* implicit */int) arr_27 [i_8] [i_7])) : (((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((((((/* implicit */int) var_4)) >> (((/* implicit */int) var_5)))) - (17080))))));
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 3) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 19; i_10 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_27 [i_8] [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)0)))))) : (((var_2) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))), (((/* implicit */unsigned long long int) (+(max((arr_17 [i_7] [i_9] [i_8] [i_9] [i_10]), (((/* implicit */long long int) var_0)))))))));
                                var_19 *= ((/* implicit */unsigned char) var_2);
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) arr_15 [i_2] [i_10] [i_2] [i_2]))));
                            }
                        } 
                    } 
                    arr_36 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_15 [i_2] [i_8] [i_2] [5U]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) (unsigned char)60)) : (((/* implicit */int) arr_1 [i_2] [i_7]))))) : (((2458234451U) << (((13020899264563087965ULL) - (13020899264563087947ULL)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_2 + 3] [i_2 - 1] [i_8])))))) : (min((((/* implicit */unsigned int) min((arr_6 [i_7]), (((/* implicit */short) (unsigned char)183))))), (min((((/* implicit */unsigned int) (short)-8192)), (arr_0 [i_2])))))));
                }
            } 
        } 
    }
    var_21 = ((/* implicit */unsigned char) (+((~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)21)) : (((/* implicit */int) var_5))))))));
}
