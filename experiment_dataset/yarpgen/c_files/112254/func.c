/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112254
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((unsigned long long int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) -10)) >= (max((var_8), (((/* implicit */long long int) var_6)))))))) : (((max((((/* implicit */long long int) var_6)), (var_8))) / (((/* implicit */long long int) var_3))))));
    var_17 = ((/* implicit */long long int) var_6);
    var_18 = ((/* implicit */short) max((((unsigned int) min((var_1), (((/* implicit */unsigned int) 10))))), (((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))), (10))))));
    var_19 = ((/* implicit */long long int) ((((((((/* implicit */int) var_13)) | (((/* implicit */int) var_5)))) != (((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_5))))))) ? ((((+(((/* implicit */int) (short)5347)))) | (((/* implicit */int) var_14)))) : (((/* implicit */int) ((1027450858521656979LL) != (((/* implicit */long long int) ((/* implicit */int) (short)31434))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 15; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2409)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10568))) : (-1027450858521656971LL)));
                        arr_11 [(unsigned char)1] [i_1 + 1] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (_Bool)0))) ? (((/* implicit */unsigned long long int) ((var_1) + (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0])))))) : (((unsigned long long int) var_12))));
                        var_21 = ((/* implicit */unsigned int) var_2);
                    }
                } 
            } 
        } 
        arr_12 [(unsigned char)6] [i_0] = ((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [(short)8]);
        var_22 = ((/* implicit */_Bool) var_5);
    }
    for (short i_4 = 0; i_4 < 22; i_4 += 2) 
    {
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (long long int i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    {
                        arr_21 [12ULL] [i_5] [i_5] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_4] [6] [i_6] [i_7]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) ^ (var_3)))))))));
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) (short)-5348))) >> (((-10) + (33)))));
                        arr_22 [i_4] [i_7] [i_4] [i_4] [i_4] [0U] = ((/* implicit */long long int) arr_17 [i_7] [i_6] [i_5] [i_4]);
                        var_24 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned char) var_11))), (min((((/* implicit */long long int) var_5)), (-1027450858521656980LL)))))) ? (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) var_15)) < (arr_14 [i_4] [i_5])))) << (((((((/* implicit */_Bool) arr_19 [i_6] [i_4] [i_5] [i_4] [8LL])) ? (((/* implicit */int) (short)5347)) : (((/* implicit */int) (unsigned short)15)))) - (5322)))))) : (((((/* implicit */_Bool) ((var_3) % (((/* implicit */int) var_12))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)1))))) : (var_8)))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */unsigned short) ((-523553971584890701LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    }
}
