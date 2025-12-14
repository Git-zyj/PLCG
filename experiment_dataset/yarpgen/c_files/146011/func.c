/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146011
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
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) -652615461)) : (-8018141714690805094LL)));
    var_16 &= ((/* implicit */unsigned long long int) ((unsigned short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) - (var_13))))));
    var_17 -= ((/* implicit */unsigned long long int) min(((unsigned short)1), ((unsigned short)0)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 16; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */_Bool) ((min((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), ((-(((/* implicit */int) var_4)))))) * (((((/* implicit */int) var_10)) << (((/* implicit */int) (unsigned short)7))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        arr_12 [i_0 - 1] [i_1] [i_1] [(unsigned short)12] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_11 [i_2 - 1] [i_1] [i_0 - 1] [(short)10]))));
                        arr_13 [i_0 - 1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) arr_10 [i_1] [i_1] [i_2 + 1] [i_3])) : (((/* implicit */int) var_3))))) ? (var_12) : (((/* implicit */unsigned long long int) ((int) var_13)))));
                        var_19 *= ((/* implicit */unsigned int) (+(arr_6 [(signed char)0])));
                        var_20 = ((/* implicit */short) var_12);
                    }
                    for (int i_4 = 1; i_4 < 17; i_4 += 4) 
                    {
                        var_21 = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (signed char)-103)))))) % (arr_11 [2LL] [i_2] [i_2 - 1] [i_2]))) >= (((/* implicit */unsigned int) ((/* implicit */int) min((var_6), (((/* implicit */unsigned short) arr_0 [i_1 - 2] [i_1]))))))));
                        var_22 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (+(arr_6 [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_2) != (((/* implicit */long long int) 127U)))))) : (max((4294967160U), (1415095958U)))))));
                        arr_17 [i_0 + 1] [(unsigned short)4] [i_1] [(signed char)8] = ((/* implicit */unsigned int) (unsigned short)36932);
                        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((arr_15 [i_0 - 1] [i_0 - 1] [i_2] [14LL]) ? (max((var_1), (2585650821233881945LL))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)54439)), (var_11)))))) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)112))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                        {
                            arr_21 [i_0] [12LL] [(unsigned short)12] [i_5] [i_5] [(unsigned char)14] &= ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (arr_5 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                            arr_22 [(_Bool)1] [(unsigned char)17] [(short)10] [i_4] [i_1] = var_13;
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_1 + 1] [(signed char)14] [(unsigned char)1] [i_4 + 1] [5] [i_5])) || (((/* implicit */_Bool) arr_14 [i_1]))));
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((((((/* implicit */int) var_14)) < (((/* implicit */int) (unsigned char)0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)862)) < (((/* implicit */int) (unsigned short)30211)))))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_5] [i_5]))) : (arr_6 [i_5])))))));
                        }
                    }
                    for (signed char i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned char) var_1);
                        var_27 = ((/* implicit */long long int) ((int) ((var_7) - (arr_11 [i_2 + 2] [13LL] [i_2] [i_1 - 2]))));
                        arr_25 [15ULL] [16ULL] [i_1] [2U] = ((/* implicit */long long int) (-((((!(((/* implicit */_Bool) (unsigned short)15173)))) ? (((unsigned long long int) arr_0 [3LL] [i_1 + 2])) : (arr_20 [i_6] [i_0 - 1])))));
                        var_28 = ((/* implicit */_Bool) arr_0 [i_0] [i_2]);
                    }
                    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 4) 
                    {
                        var_29 = var_8;
                        var_30 = ((/* implicit */short) max((max((arr_24 [i_1] [i_0 + 1]), (((/* implicit */long long int) (-(arr_11 [i_0] [i_1 + 2] [(unsigned char)3] [i_7])))))), (((((/* implicit */_Bool) arr_27 [i_1] [i_1 + 1] [i_1] [i_1 - 1])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
                        arr_28 [i_1] [i_1 + 2] [(unsigned short)2] [(_Bool)0] [i_0] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((1484156431), (((/* implicit */int) var_10)))))))) << (((min(((~(((/* implicit */int) (unsigned short)204)))), (((((/* implicit */_Bool) arr_18 [i_7] [i_2] [15] [12LL] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3)))))) + (25576)))));
                    }
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */short) 65472);
}
