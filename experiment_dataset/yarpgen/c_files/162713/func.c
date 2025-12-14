/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162713
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
    var_11 &= ((/* implicit */unsigned int) ((((/* implicit */long long int) var_6)) & (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)0)), (var_6)))) ? (min((var_10), (var_1))) : (((/* implicit */long long int) (~(var_6))))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        var_12 -= ((/* implicit */unsigned char) arr_0 [i_0]);
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((+(4118293973903021575LL)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) arr_0 [i_0]))))))) : ((((!(((/* implicit */_Bool) var_1)))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (4294967281U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_14 = ((/* implicit */_Bool) (unsigned char)208);
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (-(((16669860295572326412ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16262))))))))));
        arr_5 [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_3 [i_1])))))) % (((((/* implicit */_Bool) (unsigned char)72)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (1693402658362842209LL)))));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            arr_10 [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_6 [i_2] [i_1] [i_1])))) ? (var_1) : (((/* implicit */long long int) ((int) 4118293973903021554LL)))));
            arr_11 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_2])) <= (((/* implicit */int) arr_4 [i_2] [i_1]))));
        }
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            var_16 *= ((/* implicit */unsigned short) arr_8 [i_1] [i_1] [i_3]);
            var_17 -= ((/* implicit */int) ((signed char) arr_3 [i_1]));
            /* LoopNest 3 */
            for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        {
                            arr_22 [i_1] [i_4] [i_4] [i_5] [i_6] = ((/* implicit */unsigned short) (-((((_Bool)1) ? (arr_14 [i_6] [i_4] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)237)))))));
                            arr_23 [i_1] [i_1] [i_1] [i_4] [i_1] = (i_4 % 2 == zero) ? (((((/* implicit */int) (unsigned char)82)) >> (((arr_20 [i_4] [i_3] [i_4] [i_5] [i_6] [i_1]) + (2158878370756928931LL))))) : (((((/* implicit */int) (unsigned char)82)) >> (((((arr_20 [i_4] [i_3] [i_4] [i_5] [i_6] [i_1]) + (2158878370756928931LL))) + (6103210809020492655LL)))));
                            arr_24 [i_1] [i_4] [i_4] [i_5] [i_6] = ((/* implicit */unsigned long long int) (-(var_0)));
                            arr_25 [i_4] [i_6] [i_4] [i_6] [i_6] [i_4] [i_6] = ((/* implicit */unsigned int) (((~(((/* implicit */int) (_Bool)1)))) - ((+(((/* implicit */int) (unsigned short)40551))))));
                            var_18 = ((/* implicit */unsigned int) (((+(2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                        }
                    } 
                } 
            } 
            var_19 = ((/* implicit */signed char) arr_21 [i_1] [i_3] [i_1] [i_1] [i_1] [i_3]);
        }
    }
    for (unsigned char i_7 = 0; i_7 < 14; i_7 += 2) 
    {
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((((/* implicit */int) (signed char)22)) <= (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) arr_0 [i_7])) : (((/* implicit */int) var_7)))))));
        arr_29 [i_7] [i_7] = ((/* implicit */_Bool) arr_17 [i_7] [i_7] [i_7]);
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) ((-4118293973903021537LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)26)))));
        arr_32 [i_8] = ((/* implicit */_Bool) arr_27 [i_8] [i_8]);
        var_22 = ((/* implicit */_Bool) var_2);
    }
}
