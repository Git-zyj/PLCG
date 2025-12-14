/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100980
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
    var_18 = ((/* implicit */short) max((max((((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */unsigned long long int) -265643564)))), (((/* implicit */unsigned long long int) ((var_10) + (((/* implicit */unsigned int) var_5))))))), (((/* implicit */unsigned long long int) (short)7814))));
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 24; i_0 += 1) 
    {
        arr_3 [3U] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_3))) + (arr_1 [i_0 - 3])))))) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? ((-(arr_1 [i_0]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))))))));
        var_19 = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) arr_0 [i_0 - 1] [i_0 - 2])), (var_14))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((long long int) var_6))) >= (((((/* implicit */_Bool) (signed char)68)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-54))) : (var_6))))))));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_4))))), (var_10)))) ? (((/* implicit */unsigned long long int) arr_1 [i_0 - 3])) : ((+(arr_2 [i_0 - 3]))))))));
        var_21 = ((/* implicit */unsigned short) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) - (arr_2 [i_0]))), (((/* implicit */unsigned long long int) ((2319071239U) >> (((6325190993881946653ULL) - (6325190993881946652ULL)))))))) << (((((((/* implicit */_Bool) var_5)) ? (arr_2 [i_0 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) - (7120383624825531461ULL)))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_19 [i_1] [i_3] [i_2] [i_3] [i_3] [i_2] = ((/* implicit */int) var_8);
                            var_22 = ((/* implicit */_Bool) -708648357);
                        }
                        for (unsigned short i_6 = 3; i_6 < 22; i_6 += 2) 
                        {
                            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_5 [i_6] [i_2]))) ? (arr_22 [19U] [i_4] [i_2] [i_2] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_2] [i_3] [i_3] [i_4] [i_6 - 1])))));
                            var_24 = ((/* implicit */unsigned int) var_1);
                        }
                        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 3) 
                        {
                            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40760))) & (var_10))))));
                            arr_26 [i_2] [i_2] [i_7] = ((/* implicit */int) ((var_10) >> (((var_6) - (13712619826163704199ULL)))));
                            arr_27 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) var_7);
                            var_26 = ((/* implicit */unsigned long long int) ((8191U) >> (((2044979371U) - (2044979368U)))));
                        }
                        var_27 = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */int) var_12)) << (((((/* implicit */int) var_8)) + (68)))))) == (var_17)));
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((var_0) / (((/* implicit */long long int) -708648364))))) / (((12121553079827604963ULL) >> (((/* implicit */int) var_4))))));
        arr_28 [i_1] [i_1] = ((/* implicit */_Bool) (+((-(-265643564)))));
        arr_29 [i_1] = ((unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_16)) : (arr_22 [i_1] [1ULL] [i_1] [i_1] [i_1])));
    }
    var_29 = ((/* implicit */long long int) (((((!(((/* implicit */_Bool) var_17)))) ? (((/* implicit */unsigned long long int) (~(var_5)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15899))) : (var_6))))) << (((((var_10) * (((/* implicit */unsigned int) var_5)))) - (2252030135U)))));
}
