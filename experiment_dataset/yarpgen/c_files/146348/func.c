/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146348
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)30)) & (((/* implicit */int) var_5))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        arr_9 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)45818)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)31))))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1301))) - (var_0)))));
                        arr_10 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)25513)) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_0] [i_2] [i_0])))) : (((((/* implicit */int) var_8)) >> (((((/* implicit */int) var_5)) - (63219)))))));
                    }
                    for (long long int i_4 = 0; i_4 < 14; i_4 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_5 = 1; i_5 < 13; i_5 += 2) 
                        {
                            arr_17 [i_0] [i_0] = ((/* implicit */unsigned int) (+(((-6560439285427767373LL) * (((/* implicit */long long int) 0U))))));
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? ((+(((/* implicit */int) (unsigned short)46713)))) : (((/* implicit */int) arr_15 [i_2] [i_5 + 1]))));
                            arr_18 [(unsigned short)11] [i_1] [i_1] [(unsigned short)1] [i_0] [i_5 - 1] = ((/* implicit */short) var_16);
                        }
                        arr_19 [i_4] [i_0] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_0) : (var_13)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) : (((((/* implicit */_Bool) arr_15 [i_0] [i_0])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0]))))));
                        var_19 *= ((/* implicit */unsigned char) arr_0 [i_1]);
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) << (((10188291742712036277ULL) - (10188291742712036259ULL)))))) ? (((((/* implicit */_Bool) var_8)) ? (10188291742712036260ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_11)) ? (10188291742712036284ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4] [i_4] [i_0] [i_1] [i_0] [i_0])))))))) ? ((-((+(((/* implicit */int) arr_1 [i_2])))))) : ((~(((/* implicit */int) (unsigned short)65535)))))))));
                    }
                    for (long long int i_6 = 0; i_6 < 14; i_6 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            var_21 = ((/* implicit */short) ((((/* implicit */int) (!((_Bool)0)))) & (((/* implicit */int) max((((/* implicit */unsigned char) arr_14 [i_7 + 1] [(_Bool)1] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7] [i_7])), (arr_12 [i_0] [i_6] [i_2] [i_6] [i_7] [i_1]))))));
                            var_22 ^= var_4;
                            arr_26 [i_0] [i_6] [i_6] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */int) var_11);
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            var_23 = ((((((/* implicit */_Bool) 2767490559U)) || (((((/* implicit */_Bool) (unsigned short)12370)) || (((/* implicit */_Bool) var_4)))))) ? (max((3034578981U), (((/* implicit */unsigned int) (unsigned short)0)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) >> (((((/* implicit */int) var_10)) - (196)))))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_1 [i_0]))))));
                            var_24 = ((/* implicit */unsigned int) ((10188291742712036277ULL) != (((((/* implicit */_Bool) (+(992)))) ? (var_13) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_8)), (var_15))))))));
                        }
                        var_25 -= ((/* implicit */long long int) var_11);
                        arr_29 [i_0] = ((/* implicit */short) (~((~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_5)))))))));
                        var_26 -= var_1;
                    }
                    for (long long int i_9 = 0; i_9 < 14; i_9 += 1) 
                    {
                        arr_34 [i_0] [2] [i_2] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned short)65535)) - (65514)))))));
                        arr_35 [i_0] [(unsigned char)4] [12LL] = arr_15 [i_0] [i_2];
                    }
                    arr_36 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned char)0)) ? (arr_32 [i_0] [i_1]) : (arr_32 [i_0] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((1044601516U), (((/* implicit */unsigned int) var_10))))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            arr_39 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned long long int) (~(((((/* implicit */int) var_2)) * (((/* implicit */int) var_1)))))));
            var_27 = ((/* implicit */unsigned short) var_15);
            arr_40 [i_0] [(short)12] |= (-(((/* implicit */int) ((short) (_Bool)1))));
        }
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) & (var_13)))) ? (((/* implicit */int) min((((unsigned short) 100820688)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)12288)))))))) : ((-(((/* implicit */int) (_Bool)1))))));
        arr_41 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((unsigned int) (+(((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [(signed char)2] [i_0] [1U])))))));
    }
}
