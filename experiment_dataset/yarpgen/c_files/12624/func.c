/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12624
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
    var_20 *= ((/* implicit */unsigned int) var_5);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_2 [i_0])))) ? ((+(((/* implicit */int) arr_2 [i_0])))) : (((((/* implicit */int) var_6)) >> (((((/* implicit */int) var_16)) + (14156)))))))) - (3083587530U))))));
        var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */long long int) var_17)))))));
    }
    for (unsigned int i_1 = 4; i_1 < 19; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 3) 
            {
                {
                    arr_13 [i_1] |= ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) ? (((long long int) min((var_19), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (arr_10 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (signed char)-113)) + (137))))) >= (((/* implicit */int) (_Bool)1)))) ? ((+(((/* implicit */int) min(((unsigned short)59920), (((/* implicit */unsigned short) arr_6 [i_1] [i_1]))))))) : ((+(((/* implicit */int) ((unsigned short) -2957567134987048262LL))))))))));
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_2] [i_1]))))) - ((+(var_15)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_19))));
                }
            } 
        } 
        var_25 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_11 [i_1 - 2] [i_1 - 3] [i_1 - 2] [i_1 - 2])))));
        /* LoopNest 3 */
        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                for (signed char i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    {
                        var_26 = ((/* implicit */short) (((((-(((/* implicit */int) var_16)))) < (((((/* implicit */int) arr_23 [i_1] [i_1] [i_5] [14ULL] [i_6])) ^ (((/* implicit */int) var_11)))))) ? (((/* implicit */long long int) var_10)) : (((((/* implicit */_Bool) ((var_3) / (((/* implicit */unsigned long long int) var_12))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_14 [i_1 - 1] [i_1 + 3])))));
                        var_27 = ((/* implicit */unsigned int) ((long long int) arr_14 [i_4] [i_4]));
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_6 [i_1] [i_1 - 1])) : (((/* implicit */int) var_9))))));
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_1] [i_1])), ((unsigned short)61920))))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) max((var_2), (((/* implicit */long long int) var_5))))) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) var_18))))));
    }
    var_30 = ((/* implicit */unsigned int) var_8);
}
